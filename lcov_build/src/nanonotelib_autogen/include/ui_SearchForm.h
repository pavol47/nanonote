/********************************************************************************
** Form generated from reading UI file 'SearchForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHFORM_H
#define UI_SEARCHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchForm
{
public:
    QGridLayout *gridLayout;
    QLabel *countLabel;
    QLineEdit *searchLine;
    QToolButton *closeButton;
    QToolButton *previousButton;
    QToolButton *nextButton;

    void setupUi(QWidget *SearchForm)
    {
        if (SearchForm->objectName().isEmpty())
            SearchForm->setObjectName(QString::fromUtf8("SearchForm"));
        SearchForm->resize(832, 45);
        gridLayout = new QGridLayout(SearchForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        countLabel = new QLabel(SearchForm);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));

        gridLayout->addWidget(countLabel, 0, 2, 1, 1);

        searchLine = new QLineEdit(SearchForm);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));

        gridLayout->addWidget(searchLine, 0, 1, 1, 1);

        closeButton = new QToolButton(SearchForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout->addWidget(closeButton, 0, 5, 1, 1);

        previousButton = new QToolButton(SearchForm);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));

        gridLayout->addWidget(previousButton, 0, 3, 1, 1);

        nextButton = new QToolButton(SearchForm);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(nextButton, 0, 4, 1, 1);


        retranslateUi(SearchForm);

        QMetaObject::connectSlotsByName(SearchForm);
    } // setupUi

    void retranslateUi(QWidget *SearchForm)
    {
        SearchForm->setWindowTitle(QApplication::translate("SearchForm", "Form", nullptr));
        countLabel->setText(QApplication::translate("SearchForm", "- / -", nullptr));
        closeButton->setText(QApplication::translate("SearchForm", "x", nullptr));
        previousButton->setText(QApplication::translate("SearchForm", "Previous", nullptr));
        nextButton->setText(QApplication::translate("SearchForm", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchForm: public Ui_SearchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFORM_H
