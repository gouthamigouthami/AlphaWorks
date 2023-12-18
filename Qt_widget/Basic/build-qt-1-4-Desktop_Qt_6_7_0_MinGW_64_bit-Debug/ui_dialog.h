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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btnInternal;
    QPushButton *btnEditor;
    QPushButton *btnConnect;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(206, 128);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        btnInternal = new QPushButton(Dialog);
        btnInternal->setObjectName("btnInternal");

        verticalLayout->addWidget(btnInternal);

        btnEditor = new QPushButton(Dialog);
        btnEditor->setObjectName("btnEditor");

        verticalLayout->addWidget(btnEditor);

        btnConnect = new QPushButton(Dialog);
        btnConnect->setObjectName("btnConnect");

        verticalLayout->addWidget(btnConnect);


        retranslateUi(Dialog);
        QObject::connect(btnInternal, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnInternal->setText(QCoreApplication::translate("Dialog", "Internal", nullptr));
        btnEditor->setText(QCoreApplication::translate("Dialog", "Editot", nullptr));
        btnConnect->setText(QCoreApplication::translate("Dialog", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
