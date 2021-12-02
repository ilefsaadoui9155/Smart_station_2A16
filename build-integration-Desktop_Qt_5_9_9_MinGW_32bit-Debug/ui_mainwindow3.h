/********************************************************************************
** Form generated from reading UI file 'mainwindow3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW3_H
#define UI_MAINWINDOW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow3
{
public:
    QWidget *centralWidget;
    QTabWidget *supprimer;
    QWidget *tab_3;
    QLabel *label;
    QLineEdit *le_referance_2;
    QLabel *label_2;
    QLineEdit *le_prix_2;
    QLabel *label_3;
    QLineEdit *le_destination_2;
    QPushButton *qb_ajouter;
    QPushButton *qb_modifier;
    QPushButton *qb_revenu;
    QLabel *label_12;
    QLineEdit *le_date_2;
    QLabel *label_13;
    QLineEdit *le_depart;
    QLabel *label_14;
    QLineEdit *le_arrive_2;
    QLabel *label_5;
    QComboBox *comboBox;
    QPushButton *qb_supprimer;
    QLabel *le_revenu1;
    QWidget *tab;
    QTableView *tab_tickets;
    QRadioButton *trireferance;
    QRadioButton *triprix;
    QRadioButton *tritempsdepart;
    QLineEdit *lineEdit;
    QWidget *tab_4;
    QPushButton *pushButton_16;
    QLabel *label_pic;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QLabel *label_6;
    QLineEdit *le_QR;
    QPushButton *QR_code;
    QLabel *label_pic_2;
    QMenuBar *menuBar;
    QMenu *menuTICKET;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow3)
    {
        if (MainWindow3->objectName().isEmpty())
            MainWindow3->setObjectName(QStringLiteral("MainWindow3"));
        MainWindow3->resize(900, 600);
        centralWidget = new QWidget(MainWindow3);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        supprimer = new QTabWidget(centralWidget);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(20, 10, 800, 600));
        supprimer->setMinimumSize(QSize(800, 600));
        supprimer->setMaximumSize(QSize(400, 300));
        supprimer->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 127);"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 91, 31));
        label->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_referance_2 = new QLineEdit(tab_3);
        le_referance_2->setObjectName(QStringLiteral("le_referance_2"));
        le_referance_2->setGeometry(QRect(130, 50, 113, 22));
        le_referance_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 140, 56, 16));
        label_2->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_prix_2 = new QLineEdit(tab_3);
        le_prix_2->setObjectName(QStringLiteral("le_prix_2"));
        le_prix_2->setGeometry(QRect(130, 140, 113, 22));
        le_prix_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 101, 31));
        label_3->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_destination_2 = new QLineEdit(tab_3);
        le_destination_2->setObjectName(QStringLiteral("le_destination_2"));
        le_destination_2->setGeometry(QRect(130, 100, 113, 22));
        le_destination_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);"));
        qb_ajouter = new QPushButton(tab_3);
        qb_ajouter->setObjectName(QStringLiteral("qb_ajouter"));
        qb_ajouter->setGeometry(QRect(50, 460, 93, 28));
        qb_modifier = new QPushButton(tab_3);
        qb_modifier->setObjectName(QStringLiteral("qb_modifier"));
        qb_modifier->setGeometry(QRect(280, 460, 93, 28));
        qb_revenu = new QPushButton(tab_3);
        qb_revenu->setObjectName(QStringLiteral("qb_revenu"));
        qb_revenu->setGeometry(QRect(640, 460, 93, 28));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 180, 91, 31));
        label_12->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_date_2 = new QLineEdit(tab_3);
        le_date_2->setObjectName(QStringLiteral("le_date_2"));
        le_date_2->setGeometry(QRect(130, 190, 113, 22));
        le_date_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 220, 91, 31));
        label_13->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_depart = new QLineEdit(tab_3);
        le_depart->setObjectName(QStringLiteral("le_depart"));
        le_depart->setGeometry(QRect(130, 230, 113, 22));
        le_depart->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 260, 91, 31));
        label_14->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        le_arrive_2 = new QLineEdit(tab_3);
        le_arrive_2->setObjectName(QStringLiteral("le_arrive_2"));
        le_arrive_2->setGeometry(QRect(130, 270, 113, 22));
        le_arrive_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, -10, 671, 551));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../logo final.png")));
        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(240, 50, 61, 21));
        qb_supprimer = new QPushButton(tab_3);
        qb_supprimer->setObjectName(QStringLiteral("qb_supprimer"));
        qb_supprimer->setGeometry(QRect(450, 460, 101, 28));
        le_revenu1 = new QLabel(tab_3);
        le_revenu1->setObjectName(QStringLiteral("le_revenu1"));
        le_revenu1->setGeometry(QRect(655, 420, 81, 31));
        supprimer->addTab(tab_3, QString());
        label_5->raise();
        label->raise();
        le_referance_2->raise();
        label_2->raise();
        le_prix_2->raise();
        label_3->raise();
        le_destination_2->raise();
        qb_ajouter->raise();
        qb_modifier->raise();
        qb_revenu->raise();
        label_12->raise();
        le_date_2->raise();
        label_13->raise();
        le_depart->raise();
        label_14->raise();
        le_arrive_2->raise();
        comboBox->raise();
        qb_supprimer->raise();
        le_revenu1->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_tickets = new QTableView(tab);
        tab_tickets->setObjectName(QStringLiteral("tab_tickets"));
        tab_tickets->setGeometry(QRect(40, 90, 721, 411));
        tab_tickets->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        trireferance = new QRadioButton(tab);
        trireferance->setObjectName(QStringLiteral("trireferance"));
        trireferance->setGeometry(QRect(100, 20, 185, 20));
        triprix = new QRadioButton(tab);
        triprix->setObjectName(QStringLiteral("triprix"));
        triprix->setGeometry(QRect(300, 20, 185, 20));
        tritempsdepart = new QRadioButton(tab);
        tritempsdepart->setObjectName(QStringLiteral("tritempsdepart"));
        tritempsdepart->setGeometry(QRect(550, 20, 185, 20));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 50, 441, 22));
        supprimer->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_16 = new QPushButton(tab_4);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(40, 370, 93, 28));
        label_pic = new QLabel(tab_4);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(220, 30, 541, 461));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 100, 121, 41));
        label_4->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        comboBox_2 = new QComboBox(tab_4);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(30, 180, 101, 22));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(tab_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 150, 101, 31));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        supprimer->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 100, 91, 16));
        label_6->setStyleSheet(QLatin1String("color: rgb(0, 85, 255);\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
""));
        le_QR = new QLineEdit(tab_2);
        le_QR->setObjectName(QStringLiteral("le_QR"));
        le_QR->setGeometry(QRect(50, 140, 71, 22));
        le_QR->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QR_code = new QPushButton(tab_2);
        QR_code->setObjectName(QStringLiteral("QR_code"));
        QR_code->setGeometry(QRect(60, 350, 93, 28));
        label_pic_2 = new QLabel(tab_2);
        label_pic_2->setObjectName(QStringLiteral("label_pic_2"));
        label_pic_2->setGeometry(QRect(230, 10, 541, 461));
        supprimer->addTab(tab_2, QString());
        MainWindow3->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow3);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 26));
        menuTICKET = new QMenu(menuBar);
        menuTICKET->setObjectName(QStringLiteral("menuTICKET"));
        MainWindow3->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow3);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow3->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow3);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow3->setStatusBar(statusBar);

        menuBar->addAction(menuTICKET->menuAction());

        retranslateUi(MainWindow3);

        supprimer->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow3);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow3)
    {
        MainWindow3->setWindowTitle(QApplication::translate("MainWindow3", "Gestion des Clients", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        supprimer->setWhatsThis(QApplication::translate("MainWindow3", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("MainWindow3", "Referance", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow3", "Prix", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow3", "Destination", Q_NULLPTR));
        qb_ajouter->setText(QApplication::translate("MainWindow3", "Ajouter ticket", Q_NULLPTR));
        qb_modifier->setText(QApplication::translate("MainWindow3", "Modifier ticket", Q_NULLPTR));
        qb_revenu->setText(QApplication::translate("MainWindow3", "Revenu ", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow3", "date", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow3", "depart", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow3", "arrive", Q_NULLPTR));
        label_5->setText(QString());
        qb_supprimer->setText(QApplication::translate("MainWindow3", "Supprimer ticket", Q_NULLPTR));
        le_revenu1->setText(QString());
        supprimer->setTabText(supprimer->indexOf(tab_3), QApplication::translate("MainWindow3", "gestion des ticket", Q_NULLPTR));
        trireferance->setText(QApplication::translate("MainWindow3", "Trier Referance", Q_NULLPTR));
        triprix->setText(QApplication::translate("MainWindow3", "Trier Prix", Q_NULLPTR));
        tritempsdepart->setText(QApplication::translate("MainWindow3", "Trier temps depart", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow3", "Rechercher", Q_NULLPTR));
        supprimer->setTabText(supprimer->indexOf(tab), QApplication::translate("MainWindow3", "afficher", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow3", "ouvrir map", Q_NULLPTR));
        label_pic->setText(QString());
        label_4->setText(QApplication::translate("MainWindow3", "destination", Q_NULLPTR));
        supprimer->setTabText(supprimer->indexOf(tab_4), QApplication::translate("MainWindow3", "MAP", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow3", "QR code", Q_NULLPTR));
        QR_code->setText(QApplication::translate("MainWindow3", "choisir le code", Q_NULLPTR));
        label_pic_2->setText(QString());
        supprimer->setTabText(supprimer->indexOf(tab_2), QApplication::translate("MainWindow3", "Page", Q_NULLPTR));
        menuTICKET->setTitle(QApplication::translate("MainWindow3", "TICKET", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow3: public Ui_MainWindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW3_H
