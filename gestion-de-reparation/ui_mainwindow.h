/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *ref;
    QLineEdit *matricule;
    QLineEdit *type;
    QLineEdit *nombre;
    QPushButton *ajouter;
    QGroupBox *groupBox_2;
    QTableView *tabreparation;
    QLineEdit *reff;
    QLabel *label_6;
    QPushButton *SupprimerButton;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *matricule2;
    QLineEdit *type2;
    QLineEdit *nombre2;
    QLineEdit *ref2;
    QPushButton *ButtonModification;
    QPushButton *recherche;
    QLineEdit *reff3;
    QLabel *label_5;
    QPushButton *anglais;
    QPushButton *Imprimer;
    QPushButton *francais;
    QPushButton *pushButton;
    QLabel *label_10;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *tab;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QTableView *tab_rep;
    QLabel *label_12;
    QWidget *tab_4;
    QPushButton *pushButton_76;
    QTableView *tableView_3;
    QLabel *label_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1006, 721);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 981, 651));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 291, 351));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 56, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 56, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 56, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 190, 56, 16));
        ref = new QLineEdit(groupBox);
        ref->setObjectName(QStringLiteral("ref"));
        ref->setGeometry(QRect(90, 70, 113, 22));
        matricule = new QLineEdit(groupBox);
        matricule->setObjectName(QStringLiteral("matricule"));
        matricule->setGeometry(QRect(90, 110, 113, 22));
        type = new QLineEdit(groupBox);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(90, 150, 113, 22));
        nombre = new QLineEdit(groupBox);
        nombre->setObjectName(QStringLiteral("nombre"));
        nombre->setGeometry(QRect(90, 190, 113, 22));
        ajouter = new QPushButton(groupBox);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(100, 290, 93, 28));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 370, 671, 241));
        tabreparation = new QTableView(groupBox_2);
        tabreparation->setObjectName(QStringLiteral("tabreparation"));
        tabreparation->setGeometry(QRect(10, 30, 641, 191));
        reff = new QLineEdit(tab_2);
        reff->setObjectName(QStringLiteral("reff"));
        reff->setGeometry(QRect(740, 450, 113, 22));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(670, 450, 61, 20));
        SupprimerButton = new QPushButton(tab_2);
        SupprimerButton->setObjectName(QStringLiteral("SupprimerButton"));
        SupprimerButton->setGeometry(QRect(750, 510, 93, 28));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(540, 20, 401, 351));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 70, 56, 16));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 110, 56, 16));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 150, 56, 16));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 20, 61, 16));
        matricule2 = new QLineEdit(groupBox_3);
        matricule2->setObjectName(QStringLiteral("matricule2"));
        matricule2->setGeometry(QRect(90, 70, 113, 22));
        type2 = new QLineEdit(groupBox_3);
        type2->setObjectName(QStringLiteral("type2"));
        type2->setGeometry(QRect(90, 110, 113, 22));
        nombre2 = new QLineEdit(groupBox_3);
        nombre2->setObjectName(QStringLiteral("nombre2"));
        nombre2->setGeometry(QRect(90, 150, 113, 22));
        ref2 = new QLineEdit(groupBox_3);
        ref2->setObjectName(QStringLiteral("ref2"));
        ref2->setGeometry(QRect(90, 20, 113, 22));
        ButtonModification = new QPushButton(groupBox_3);
        ButtonModification->setObjectName(QStringLiteral("ButtonModification"));
        ButtonModification->setGeometry(QRect(280, 60, 93, 28));
        recherche = new QPushButton(groupBox_3);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(290, 260, 93, 28));
        reff3 = new QLineEdit(groupBox_3);
        reff3->setObjectName(QStringLiteral("reff3"));
        reff3->setGeometry(QRect(140, 260, 113, 22));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 260, 71, 21));
        anglais = new QPushButton(tab_2);
        anglais->setObjectName(QStringLiteral("anglais"));
        anglais->setGeometry(QRect(390, 40, 93, 28));
        Imprimer = new QPushButton(tab_2);
        Imprimer->setObjectName(QStringLiteral("Imprimer"));
        Imprimer->setGeometry(QRect(390, 120, 93, 28));
        francais = new QPushButton(tab_2);
        francais->setObjectName(QStringLiteral("francais"));
        francais->setGeometry(QRect(390, 80, 93, 28));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 160, 93, 28));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(110, 0, 731, 491));
        label_10->setStyleSheet(QStringLiteral("image:url(:/D:/ProjetCpp/gestion-de-reparation/logo.png)"));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(700, 390, 112, 34));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(830, 390, 112, 34));
        tabWidget->addTab(tab_2, QString());
        label_10->raise();
        groupBox->raise();
        groupBox_2->raise();
        reff->raise();
        label_6->raise();
        SupprimerButton->raise();
        groupBox_3->raise();
        anglais->raise();
        Imprimer->raise();
        francais->raise();
        pushButton->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(520, 420, 161, 31));
        radioButton_2->setStyleSheet(QLatin1String("QRadioButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QRadioButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        radioButton = new QRadioButton(tab);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(520, 460, 161, 31));
        radioButton->setStyleSheet(QLatin1String("QRadioButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QRadioButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        radioButton_3 = new QRadioButton(tab);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(520, 380, 161, 31));
        radioButton_3->setStyleSheet(QLatin1String("QRadioButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QRadioButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        tab_rep = new QTableView(tab);
        tab_rep->setObjectName(QStringLiteral("tab_rep"));
        tab_rep->setGeometry(QRect(210, 100, 571, 271));
        tab_rep->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #000000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 390, 181, 191));
        label_12->setStyleSheet(QStringLiteral("image:url(:/D:/ProjetCpp/gestion-de-reparation/logo.png)"));
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_76 = new QPushButton(tab_4);
        pushButton_76->setObjectName(QStringLiteral("pushButton_76"));
        pushButton_76->setGeometry(QRect(670, 60, 93, 28));
        pushButton_76->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(170, 150, 123);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"\n"
"text-decoration: none;\n"
"background: #ffb300;\n"
"\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #ffcc00;\n"
"	background-color: ;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        tableView_3 = new QTableView(tab_4);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(150, 110, 631, 461));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(790, 410, 181, 191));
        label_13->setStyleSheet(QStringLiteral("image:url(:/D:/ProjetCpp/gestion-de-reparation/logo.png)"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1006, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Employes", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "reference", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "matricule", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "nombre", Q_NULLPTR));
        ajouter->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "List des Reparation", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "reference", Q_NULLPTR));
        SupprimerButton->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Modifier ", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "matricule", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "nombre", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "reference", Q_NULLPTR));
        ButtonModification->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        recherche->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "reference", Q_NULLPTR));
        anglais->setText(QApplication::translate("MainWindow", "Anglais", Q_NULLPTR));
        Imprimer->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        francais->setText(QApplication::translate("MainWindow", "Francais", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        label_10->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "ouvrir porte", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "alarme", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Gestion des Employes", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "tri par matricule", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "tri par type", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "tri par referance", Q_NULLPTR));
        label_12->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "tri", Q_NULLPTR));
        pushButton_76->setText(QApplication::translate("MainWindow", "Historique", Q_NULLPTR));
        label_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Historique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
