#include "SearchWidget.h"
#include "FakeSearch.h"
#include "TextEdit.h"

#include <QMainWindow>
#include <QPushButton>
#include <QTest>
#include <QString>

#include <catch2/catch.hpp>

#include "TestUtils.h"

#include <iostream>

void setTextInDocument(TextEdit * textedit)
{
    textedit->setPlainText(
                QObject::tr(
                    "Welcome to Nanonote!\n"
                    "\n"
                    "Nanonote is a minimalist note taking application.\n"
                    "\n"
                    "It's meant for short-lived notes. Anything you type here is automatically saved on your disk.\n"
                    "\n"
                    "The only UI is the context menu, try it out!\n"
                    "\n"
                    "As you can see in the context menu, Nanonote has an \"Always on Top\" mode. This feature is handy to keep the window around.\n"
                    "\n"
                    "It also has a few handy editing features, like auto-bullet lists:\n"
                    "\n"
                    "- Try to move the cursor at the end of this line and press Enter\n"
                    "- This works for\n"
                    "    - nested lists\n"
                    "    * and asterisks\n"
                    "\n"
                    "You can also open urls using Control + click or Control + Enter while your cursor is inside a URL. You can try clicking on this one for example: https://github.com/agateau/nanonote.\n"
                    "\n"
                    "Finally, you can indent selected lines with Tab or Ctrl+I and unindent them with Shift+Tab or Ctrl+U.\n"
                    "\n"
                    "That's all there is to say, now you can erase this text and start taking notes! Control\n"
                    )
                );
}

TEST_CASE("SearchAddToLine")
{
    QMainWindow window;
    TextEdit *edit = new TextEdit;
    setTextInDocument(edit);
    window.setCentralWidget(edit);
    SearchWidget * search = new SearchWidget(edit);
    SECTION("countsControl") {
        search->initialize("Control");
       REQUIRE(search->getPositionWords().size() == 3);
    }
    SECTION("countsWord ") {
        search->initialize("ahoj");
        REQUIRE(search->getPositionWords().size() == 0);
    }
}

TEST_CASE("ReturnPress")
{
    QMainWindow window;
    TextEdit *edit = new TextEdit;
    setTextInDocument(edit);
    window.setCentralWidget(edit);
    SearchWidget * search = new SearchWidget(edit);
    search->initialize("Control");
    SECTION("countsControl") {
       REQUIRE(search->getPositionWords().size() == 3);
    }
    SECTION("currentPositionZero") {
        REQUIRE(search->getCurrentSelectedWord() == 0);
    }
    SECTION("buttonNextClick") {
        QTest::keyEvent(QTest::KeyAction::Click, search, Qt::Key_Enter);
        REQUIRE(search->getCurrentSelectedWord() == 1);
        QTest::keyEvent(QTest::KeyAction::Click, search, Qt::Key_Enter);
        REQUIRE(search->getCurrentSelectedWord() == 2);
    }
}

TEST_CASE("FakeSearchNextButton")
{
    QMainWindow window;
    TextEdit *edit = new TextEdit;
    setTextInDocument(edit);
    window.setCentralWidget(edit);
    FakeSearch * search = new FakeSearch(edit);
    search->initialize("Control");
    SECTION("countsControl") {
       REQUIRE(search->getPositionWords().size() == 3);
    }
    SECTION("currentPositionZero") {
        REQUIRE(search->getCurrentSelectedWord() == 0);
    }
    SECTION("buttonNextClick") {
        QTest::mouseClick(search->getGuiNextButton(), Qt::LeftButton);
        REQUIRE(search->getCurrentSelectedWord() == 1);
        QTest::mouseClick(search->getGuiNextButton(), Qt::LeftButton);
        REQUIRE(search->getCurrentSelectedWord() == 2);
    }
}

TEST_CASE("FakeSearchPreviousButton")
{
    QMainWindow window;
    TextEdit *edit = new TextEdit;
    setTextInDocument(edit);
    window.setCentralWidget(edit);
    FakeSearch * search = new FakeSearch(edit);
    search->initialize("Control");
    SECTION("countsControl") {
       REQUIRE(search->getPositionWords().size() == 3);
    }
    SECTION("currentPositionZero") {
        REQUIRE(search->getCurrentSelectedWord() == 0);
    }
    SECTION("buttonPreviousClick") {
        QTest::mouseClick(search->getGuiPreviousButton(), Qt::LeftButton);
        REQUIRE(search->getCurrentSelectedWord() == 2);
        QTest::mouseClick(search->getGuiPreviousButton(), Qt::LeftButton);
        REQUIRE(search->getCurrentSelectedWord() == 1);
    }
}

TEST_CASE("FakeSearchAddText")
{
    QMainWindow window;
    TextEdit *edit = new TextEdit;
    setTextInDocument(edit);
    window.setCentralWidget(edit);
    FakeSearch * search = new FakeSearch(edit);
    search->initialize("Control");
    SECTION("countsControl") {
       REQUIRE(search->getPositionWords().size() == 3);
    }
    SECTION("currentPositionZero") {
        REQUIRE(search->getCurrentSelectedWord() == 0);
    }
    SECTION("addTextToDocument") {
       edit->setPlainText("Control");
       REQUIRE(search->getPositionWords().size() == 1);
    }
}
