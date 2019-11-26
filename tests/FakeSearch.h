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

#pragma once

#include "SearchWidget.h"

class QPushButton;

class FakeSearch : public SearchWidget
{

    public: // Constructor / Destructor
        explicit FakeSearch(TextEdit* textEdit, QWidget *parent=nullptr);
//        ~FakeSearch();

    public: // General methods
    public: // set ...
        void initializeMembers();
    public: // get ...

        QPushButton * getGuiNextButton() const;

        QPushButton * getGuiPreviousButton() const;

    private: // Members
        QPushButton *guiNextButton = nullptr;
        QPushButton *guiPreviousButton = nullptr;

};


