/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QLineEdit *nickname;
    QPushButton *send;
    QPushButton *bind;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLineEdit *message;
    QLabel *label;

    void setupUi(QDialog *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QStringLiteral("Chat"));
        Chat->resize(835, 559);
        nickname = new QLineEdit(Chat);
        nickname->setObjectName(QStringLiteral("nickname"));
        nickname->setGeometry(QRect(30, 42, 788, 24));
        send = new QPushButton(Chat);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(30, 484, 788, 22));
        send->setStyleSheet(QLatin1String("#send{\n"
"\n"
"background-color: black;\n"
"border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"font-family: century gothic;\n"
"font-size: 18px;\n"
"color: #a9b7c6;\n"
"}\n"
"#send:hover{\n"
"border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #e67e22;\n"
"	border-bottom-width: 1px;\n"
"	border-bottom-radius: 6px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-bottom: 2px;\n"
"	background-color: green;\n"
"}"));
        bind = new QPushButton(Chat);
        bind->setObjectName(QStringLiteral("bind"));
        bind->setGeometry(QRect(30, 512, 788, 22));
        bind->setStyleSheet(QLatin1String("#bind{\n"
"\n"
"background-color: black;\n"
"border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"font-family: century gothic;\n"
"font-size: 18px;\n"
"color: #a9b7c6;\n"
"}\n"
"#bind:hover{\n"
"border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #e67e22;\n"
"	border-bottom-width: 1px;\n"
"	border-bottom-radius: 6px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-bottom: 2px;\n"
"	background-color: green;\n"
"}"));
        textEdit = new QTextEdit(Chat);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 72, 788, 354));
        label_2 = new QLabel(Chat);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 432, 788, 16));
        message = new QLineEdit(Chat);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(30, 454, 788, 24));
        label = new QLabel(Chat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 788, 16));

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QDialog *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "Dialog", Q_NULLPTR));
        send->setText(QApplication::translate("Chat", "Envoyer ", Q_NULLPTR));
        bind->setText(QApplication::translate("Chat", "Connecter ", Q_NULLPTR));
        label_2->setText(QApplication::translate("Chat", "Message :", Q_NULLPTR));
        label->setText(QApplication::translate("Chat", "Your_Name  :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
