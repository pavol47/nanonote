#pragma once

#include <QWidget>
#include <QTextDocument>
#include <QTextCursor>
#include <vector>

class TextEdit;

namespace Ui {
class SearchForm;
}

class SearchWidget : public QWidget
{
        Q_OBJECT

    public:
        explicit SearchWidget(TextEdit* textEdit, QWidget *parent=nullptr);
        ~SearchWidget();

        void initialize(const QString & text);
        void uninitialize();

        int getCurrentSelectedWord() const;

        std::vector<int> getPositionWords() const;

    signals:
        void closeSearchDialog();

    protected:
        void onNextButtonClicked();
        void onPreviousButtonClicked();

    private:
        void documentChange();
        void closeSearch();
        void selectWord();
        void setCountAndCurrentPosition();
        void highLightedWords(bool highLighted);
        void searchLineChanged(const QString & value);
        void searchWord(bool selectNext = true, QString searchValue = "");
        void searchPositionsWordsInDocument(const QString & searchString, bool selectNext = true);

        Ui::SearchForm *mUi;
        std::vector<int> mPositionWords;
        TextEdit* mTextEdit = nullptr;
        QString mTextDocument;
        bool mSearchVisible = false;
        int mCurrentSelectedWord = -1;
};


