/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnCheckable;
    QPushButton *btnIsChecked;
    QPushButton *btnAutoRepeat;
    QPushButton *bntToggleAutoRepeat;
    QPushButton *btnDefault;
    QPushButton *btnToggleDefault;
    QPushButton *btnQuit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(178, 142);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnCheckable = new QPushButton(Dialog);
        btnCheckable->setObjectName("btnCheckable");
        btnCheckable->setCheckable(true);
        btnCheckable->setChecked(false);

        gridLayout->addWidget(btnCheckable, 0, 0, 1, 1);

        btnIsChecked = new QPushButton(Dialog);
        btnIsChecked->setObjectName("btnIsChecked");

        gridLayout->addWidget(btnIsChecked, 0, 1, 1, 1);

        btnAutoRepeat = new QPushButton(Dialog);
        btnAutoRepeat->setObjectName("btnAutoRepeat");

        gridLayout->addWidget(btnAutoRepeat, 1, 0, 1, 1);

        bntToggleAutoRepeat = new QPushButton(Dialog);
        bntToggleAutoRepeat->setObjectName("bntToggleAutoRepeat");

        gridLayout->addWidget(bntToggleAutoRepeat, 1, 1, 1, 1);

        btnDefault = new QPushButton(Dialog);
        btnDefault->setObjectName("btnDefault");

        gridLayout->addWidget(btnDefault, 2, 0, 1, 1);

        btnToggleDefault = new QPushButton(Dialog);
        btnToggleDefault->setObjectName("btnToggleDefault");

        gridLayout->addWidget(btnToggleDefault, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        btnQuit = new QPushButton(Dialog);
        btnQuit->setObjectName("btnQuit");

        verticalLayout->addWidget(btnQuit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnCheckable->setText(QCoreApplication::translate("Dialog", "Checkable", nullptr));
        btnIsChecked->setText(QCoreApplication::translate("Dialog", "Is Checked", nullptr));
        btnAutoRepeat->setText(QCoreApplication::translate("Dialog", "Auto Repeat", nullptr));
        bntToggleAutoRepeat->setText(QCoreApplication::translate("Dialog", "Toggle", nullptr));
        btnDefault->setText(QCoreApplication::translate("Dialog", "Default", nullptr));
        btnToggleDefault->setText(QCoreApplication::translate("Dialog", "Toggle", nullptr));
        btnQuit->setText(QCoreApplication::translate("Dialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
