/********************************************************************************
** Form generated from reading UI file 'widget1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET1_H
#define UI_WIDGET1_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_widget1
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *nickname;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLineEdit *message;
    QPushButton *send;
    QPushButton *bind;

    void setupUi(QDialog *widget1)
    {
        if (widget1->objectName().isEmpty())
            widget1->setObjectName(QStringLiteral("widget1"));
        widget1->resize(806, 532);
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        nickname = new QLineEdit(widget1);
        nickname->setObjectName(QStringLiteral("nickname"));

        verticalLayout->addWidget(nickname);

        textEdit = new QTextEdit(widget1);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        message = new QLineEdit(widget1);
        message->setObjectName(QStringLiteral("message"));

        verticalLayout->addWidget(message);

        send = new QPushButton(widget1);
        send->setObjectName(QStringLiteral("send"));
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

        verticalLayout->addWidget(send);

        bind = new QPushButton(widget1);
        bind->setObjectName(QStringLiteral("bind"));
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

        verticalLayout->addWidget(bind);


        retranslateUi(widget1);

        QMetaObject::connectSlotsByName(widget1);
    } // setupUi

    void retranslateUi(QDialog *widget1)
    {
        widget1->setWindowTitle(QApplication::translate("widget1", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("widget1", "Your_Name  :", Q_NULLPTR));
        label_2->setText(QApplication::translate("widget1", "Message :", Q_NULLPTR));
        send->setText(QApplication::translate("widget1", "Envoyer ", Q_NULLPTR));
        bind->setText(QApplication::translate("widget1", "Connecter ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widget1: public Ui_widget1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET1_H
