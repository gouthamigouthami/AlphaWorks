/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *btnCancel;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName("Dialog2");
        Dialog2->resize(406, 198);
        verticalLayout = new QVBoxLayout(Dialog2);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Dialog2);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        btnCancel = new QPushButton(Dialog2);
        btnCancel->setObjectName("btnCancel");

        verticalLayout->addWidget(btnCancel);


        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QCoreApplication::translate("Dialog2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog2", "this is dialog2", nullptr));
        btnCancel->setText(QCoreApplication::translate("Dialog2", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
