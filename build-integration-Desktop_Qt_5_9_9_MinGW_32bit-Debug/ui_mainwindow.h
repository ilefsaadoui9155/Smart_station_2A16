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
#include <QtWidgets/QComboBox>
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
#include "qcustomplot.h"

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
    QLabel *label_5;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *l_adresse;
    QLineEdit *la_fonction;
    QLineEdit *le_cin_e;
    QPushButton *pushButton;
    QLineEdit *l_age;
    QLabel *label_14;
    QLabel *label_6;
    QPushButton *SupprimerButton;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *le_nom_2;
    QLineEdit *le_prenom_2;
    QLineEdit *l_adresse_2;
    QLineEdit *la_fonction_2;
    QLineEdit *le_cin_e_2;
    QPushButton *ButtonModification;
    QComboBox *comboBox_2;
    QLineEdit *l_age_2;
    QLabel *label_15;
    QComboBox *comboBox;
    QRadioButton *trinom;
    QRadioButton *triprenom;
    QRadioButton *triadresse;
    QGroupBox *groupBox_2;
    QTableView *tab_Employes;
    QLineEdit *lineEdit;
    QWidget *tab;
    QCustomPlot *widget;
    QPushButton *chat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1005, 846);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 981, 761));
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
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 230, 56, 16));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(90, 70, 113, 22));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(90, 110, 113, 22));
        l_adresse = new QLineEdit(groupBox);
        l_adresse->setObjectName(QStringLiteral("l_adresse"));
        l_adresse->setGeometry(QRect(90, 150, 113, 22));
        la_fonction = new QLineEdit(groupBox);
        la_fonction->setObjectName(QStringLiteral("la_fonction"));
        la_fonction->setGeometry(QRect(90, 190, 113, 22));
        le_cin_e = new QLineEdit(groupBox);
        le_cin_e->setObjectName(QStringLiteral("le_cin_e"));
        le_cin_e->setGeometry(QRect(90, 230, 113, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 310, 93, 28));
        l_age = new QLineEdit(groupBox);
        l_age->setObjectName(QStringLiteral("l_age"));
        l_age->setGeometry(QRect(90, 270, 113, 22));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 270, 56, 16));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(700, 450, 31, 16));
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
        label_9->setGeometry(QRect(30, 190, 56, 16));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 150, 56, 16));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 30, 31, 16));
        le_nom_2 = new QLineEdit(groupBox_3);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(90, 70, 113, 22));
        le_prenom_2 = new QLineEdit(groupBox_3);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));
        le_prenom_2->setGeometry(QRect(90, 110, 113, 22));
        l_adresse_2 = new QLineEdit(groupBox_3);
        l_adresse_2->setObjectName(QStringLiteral("l_adresse_2"));
        l_adresse_2->setGeometry(QRect(90, 190, 113, 22));
        la_fonction_2 = new QLineEdit(groupBox_3);
        la_fonction_2->setObjectName(QStringLiteral("la_fonction_2"));
        la_fonction_2->setGeometry(QRect(90, 150, 113, 22));
        le_cin_e_2 = new QLineEdit(groupBox_3);
        le_cin_e_2->setObjectName(QStringLiteral("le_cin_e_2"));
        le_cin_e_2->setGeometry(QRect(90, 30, 113, 22));
        ButtonModification = new QPushButton(groupBox_3);
        ButtonModification->setObjectName(QStringLiteral("ButtonModification"));
        ButtonModification->setGeometry(QRect(280, 60, 93, 28));
        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(290, 100, 73, 22));
        l_age_2 = new QLineEdit(groupBox_3);
        l_age_2->setObjectName(QStringLiteral("l_age_2"));
        l_age_2->setGeometry(QRect(90, 230, 113, 22));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 230, 56, 16));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(750, 450, 73, 22));
        trinom = new QRadioButton(tab_2);
        trinom->setObjectName(QStringLiteral("trinom"));
        trinom->setGeometry(QRect(120, 380, 97, 20));
        triprenom = new QRadioButton(tab_2);
        triprenom->setObjectName(QStringLiteral("triprenom"));
        triprenom->setGeometry(QRect(260, 380, 111, 20));
        triadresse = new QRadioButton(tab_2);
        triadresse->setObjectName(QStringLiteral("triadresse"));
        triadresse->setGeometry(QRect(390, 380, 111, 20));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 410, 671, 281));
        tab_Employes = new QTableView(groupBox_2);
        tab_Employes->setObjectName(QStringLiteral("tab_Employes"));
        tab_Employes->setGeometry(QRect(10, 70, 641, 191));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 40, 113, 22));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget = new QCustomPlot(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 20, 801, 351));
        chat = new QPushButton(tab);
        chat->setObjectName(QStringLiteral("chat"));
        chat->setGeometry(QRect(220, 620, 80, 25));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1005, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Employes", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "adresse", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "fonction", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "cin_e", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "age", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "CIN :", Q_NULLPTR));
        SupprimerButton->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Modifier ", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "adresse", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "fonction", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "CIN: ", Q_NULLPTR));
        ButtonModification->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "age", Q_NULLPTR));
        trinom->setText(QApplication::translate("MainWindow", "tri par nom", Q_NULLPTR));
        triprenom->setText(QApplication::translate("MainWindow", "tri par prenom", Q_NULLPTR));
        triadresse->setText(QApplication::translate("MainWindow", "tri par adresse", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "List des Employes", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Gestion des Employes", Q_NULLPTR));
        chat->setText(QApplication::translate("MainWindow", "CHAT", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "tab 1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
