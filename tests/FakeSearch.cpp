/**
 * @file
 * @brief
 *
 * @author Pavol Oresky <pavol.oresky@r-sys.sk>
 * @date   17. November 2019
 *
 * (C) COPYRIGHT 2019 R-SYS,s.r.o
 * All rights reserved.
 */

#include "FakeSearch.h"

#include <QPushButton>

FakeSearch::FakeSearch(TextEdit * textEdit, QWidget * parent)
    : SearchWidget(textEdit, parent)
{
    initializeMembers();
    QObject::connect(guiNextButton, &QPushButton::clicked, this, &FakeSearch::onNextButtonClicked);
    QObject::connect(guiPreviousButton, &QPushButton::clicked, this, &FakeSearch::onPreviousButtonClicked);
//    QObject::connect(mUi->guiHighlightedButton, SIGNAL(toggled(bool)), this, SLOT(highLightedWords(bool)));
//    QObject::connect(mTextEdit, SIGNAL(textChanged()), this, SLOT(documentChange()));
//    QObject::connect(mUi->guiCaseSensitive, SIGNAL(toggled(bool)), this, SLOT(onSearchButtonCLicked()));
//    QObject::connect(mUi->guiWholeWords, SIGNAL(toggled(bool)), this, SLOT(onSearchButtonCLicked()));
//    QObject::connect(mUi->guiSearchLine, SIGNAL(textChanged(QString)), this, SLOT(onSearchButtonCLicked()));
//    QObject::connect(mUi->guiCloseButton, SIGNAL(clicked()), this, SLOT(closeSearch()));
}

void FakeSearch::initializeMembers()
{
    guiNextButton = nullptr;
    guiPreviousButton = nullptr;

    guiNextButton = new QPushButton(this);
    guiPreviousButton = new QPushButton(this);

}

QPushButton * FakeSearch::getGuiNextButton() const
{
    return guiNextButton;
}

QPushButton * FakeSearch::getGuiPreviousButton() const
{
    return guiPreviousButton;
}
