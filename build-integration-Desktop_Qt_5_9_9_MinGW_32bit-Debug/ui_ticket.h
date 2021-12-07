/********************************************************************************
** Form generated from reading UI file 'ticket.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_H
#define UI_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ticket
{
public:
    QTabWidget *ticket_2;
    QWidget *tab;
    QLabel *label;
    QLineEdit *le_referance;
    QLabel *label_2;
    QLineEdit *le_prix;
    QLabel *label_3;
    QLineEdit *le_destination;
    QPushButton *qb_ajouter;
    QPushButton *qb_supprimer;
    QPushButton *qb_modifier;
    QPushButton *qb_tri;
    QPushButton *qb_qr;
    QPushButton *qb_revenu;
    QLabel *label_5;
    QLineEdit *le_date;
    QLabel *label_6;
    QLineEdit *le_depart;
    QLabel *label_7;
    QLineEdit *le_arrive;
    QWidget *Tab2;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QWidget *tab_2;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_15;
    QLabel *label_9;

    void setupUi(QDialog *ticket)
    {
        if (ticket->objectName().isEmpty())
            ticket->setObjectName(QStringLiteral("ticket"));
        ticket->resize(800, 500);
        ticket_2 = new QTabWidget(ticket);
        ticket_2->setObjectName(QStringLiteral("ticket_2"));
        ticket_2->setGeometry(QRect(30, 30, 700, 400));
        ticket_2->setMinimumSize(QSize(700, 400));
        ticket_2->setMaximumSize(QSize(400, 300));
        ticket_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 238, 167);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 91, 31));
        label->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_referance = new QLineEdit(tab);
        le_referance->setObjectName(QStringLiteral("le_referance"));
        le_referance->setGeometry(QRect(130, 50, 113, 22));
        le_referance->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"background-color: rgb(255, 195, 151);"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 140, 56, 16));
        label_2->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_prix = new QLineEdit(tab);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setGeometry(QRect(130, 140, 113, 22));
        le_prix->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 195, 151);"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 101, 31));
        label_3->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_destination = new QLineEdit(tab);
        le_destination->setObjectName(QStringLiteral("le_destination"));
        le_destination->setGeometry(QRect(130, 100, 113, 22));
        le_destination->setStyleSheet(QStringLiteral("background-color: rgb(255, 195, 151);"));
        qb_ajouter = new QPushButton(tab);
        qb_ajouter->setObjectName(QStringLiteral("qb_ajouter"));
        qb_ajouter->setGeometry(QRect(30, 310, 93, 28));
        qb_supprimer = new QPushButton(tab);
        qb_supprimer->setObjectName(QStringLiteral("qb_supprimer"));
        qb_supprimer->setGeometry(QRect(280, 310, 101, 28));
        qb_modifier = new QPushButton(tab);
        qb_modifier->setObjectName(QStringLiteral("qb_modifier"));
        qb_modifier->setGeometry(QRect(150, 310, 93, 28));
        qb_tri = new QPushButton(tab);
        qb_tri->setObjectName(QStringLiteral("qb_tri"));
        qb_tri->setGeometry(QRect(550, 110, 93, 28));
        qb_tri->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        qb_qr = new QPushButton(tab);
        qb_qr->setObjectName(QStringLiteral("qb_qr"));
        qb_qr->setGeometry(QRect(540, 210, 93, 28));
        qb_revenu = new QPushButton(tab);
        qb_revenu->setObjectName(QStringLiteral("qb_revenu"));
        qb_revenu->setGeometry(QRect(560, 320, 93, 28));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 91, 31));
        label_5->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_date = new QLineEdit(tab);
        le_date->setObjectName(QStringLiteral("le_date"));
        le_date->setGeometry(QRect(130, 190, 113, 22));
        le_date->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 195, 151);"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 220, 91, 31));
        label_6->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_depart = new QLineEdit(tab);
        le_depart->setObjectName(QStringLiteral("le_depart"));
        le_depart->setGeometry(QRect(130, 230, 113, 22));
        le_depart->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 195, 151);"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 260, 91, 31));
        label_7->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_arrive = new QLineEdit(tab);
        le_arrive->setObjectName(QStringLiteral("le_arrive"));
        le_arrive->setGeometry(QRect(130, 270, 113, 22));
        le_arrive->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 195, 151);"));
        ticket_2->addTab(tab, QString());
        Tab2 = new QWidget();
        Tab2->setObjectName(QStringLiteral("Tab2"));
        pushButton_7 = new QPushButton(Tab2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(260, 200, 93, 28));
        lineEdit_4 = new QLineEdit(Tab2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 100, 113, 22));
        lineEdit_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 195, 151);"));
        label_4 = new QLabel(Tab2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 90, 91, 31));
        label_4->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        ticket_2->addTab(Tab2, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(140, 110, 113, 22));
        lineEdit_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 195, 151);"));
        pushButton_15 = new QPushButton(tab_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(270, 220, 93, 28));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 100, 91, 31));
        label_9->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        ticket_2->addTab(tab_2, QString());

        retranslateUi(ticket);

        ticket_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ticket);
    } // setupUi

    void retranslateUi(QDialog *ticket)
    {
        ticket->setWindowTitle(QApplication::translate("ticket", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ticket", "Referance", Q_NULLPTR));
        label_2->setText(QApplication::translate("ticket", "Prix", Q_NULLPTR));
        label_3->setText(QApplication::translate("ticket", "Destination", Q_NULLPTR));
        qb_ajouter->setText(QApplication::translate("ticket", "Ajouter ticket", Q_NULLPTR));
        qb_supprimer->setText(QApplication::translate("ticket", "Supprimer ticket", Q_NULLPTR));
        qb_modifier->setText(QApplication::translate("ticket", "Modifier ticket", Q_NULLPTR));
        qb_tri->setText(QApplication::translate("ticket", "TRI", Q_NULLPTR));
        qb_qr->setText(QApplication::translate("ticket", "QR Code", Q_NULLPTR));
        qb_revenu->setText(QApplication::translate("ticket", "Revenu ", Q_NULLPTR));
        label_5->setText(QApplication::translate("ticket", "date", Q_NULLPTR));
        label_6->setText(QApplication::translate("ticket", "depart", Q_NULLPTR));
        label_7->setText(QApplication::translate("ticket", "arrive", Q_NULLPTR));
        ticket_2->setTabText(ticket_2->indexOf(tab), QApplication::translate("ticket", "gestion des ticket", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("ticket", "valid\303\251", Q_NULLPTR));
        label_4->setText(QApplication::translate("ticket", "Reference", Q_NULLPTR));
        ticket_2->setTabText(ticket_2->indexOf(Tab2), QApplication::translate("ticket", "recherche", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("ticket", "ouvrir map", Q_NULLPTR));
        label_9->setText(QApplication::translate("ticket", "Reference", Q_NULLPTR));
        ticket_2->setTabText(ticket_2->indexOf(tab_2), QApplication::translate("ticket", "MAP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ticket: public Ui_ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_H
