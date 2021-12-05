/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_6;
    QLabel *label_13;
    QPushButton *pb_ajouter;
    QLineEdit *le_matricule;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_29;
    QPushButton *but_img2;
    QComboBox *combo_etat_2;
    QComboBox *combo_etat_ajout;
    QWidget *tab_2;
    QTableView *tab_bus;
    QLabel *label_16;
    QLabel *Digital_clock;
    QPushButton *pb_facebook_2;
    QPushButton *pb_instagram_2;
    QLabel *label_8;
    QLineEdit *le_matriculesupp;
    QPushButton *pb_supprimer_3;
    QPushButton *pb_supprimer;
    QLabel *imgaff;
    QPushButton *pb_afficher;
    QPushButton *pb_trier;
    QComboBox *comboOrdre;
    QWidget *tab_4;
    QLabel *label_15;
    QLineEdit *le_matriculemod;
    QLabel *label_30;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *but_modifier;
    QComboBox *combo_etat;
    QPushButton *but_img;
    QLabel *img;
    QComboBox *combo_etat_modif;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QStringLiteral("MainWindow2"));
        MainWindow2->resize(1105, 621);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(250, 70, 800, 500));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 50, 371, 391));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/244340699_686126612356691_3962841609219595743_n.png")));
        label_6->setScaledContents(true);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, -10, 800, 500));
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(240, 330, 100, 30));
        le_matricule = new QLineEdit(tab);
        le_matricule->setObjectName(QStringLiteral("le_matricule"));
        le_matricule->setGeometry(QRect(191, 100, 200, 40));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 131, 41));
        QFont font;
        font.setFamily(QStringLiteral("Palatino Linotype"));
        font.setPointSize(18);
        label_4->setFont(font);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 100, 131, 41));
        label_7->setFont(font);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 160, 131, 41));
        label_5->setFont(font);
        label_29 = new QLabel(tab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 280, 131, 41));
        label_29->setFont(font);
        but_img2 = new QPushButton(tab);
        but_img2->setObjectName(QStringLiteral("but_img2"));
        but_img2->setGeometry(QRect(190, 160, 200, 40));
        combo_etat_2 = new QComboBox(tab);
        combo_etat_2->setObjectName(QStringLiteral("combo_etat_2"));
        combo_etat_2->setGeometry(QRect(190, 280, 200, 40));
        combo_etat_ajout = new QComboBox(tab);
        combo_etat_ajout->setObjectName(QStringLiteral("combo_etat_ajout"));
        combo_etat_ajout->setGeometry(QRect(190, 223, 200, 40));
        tabWidget->addTab(tab, QString());
        label_13->raise();
        label_6->raise();
        pb_ajouter->raise();
        le_matricule->raise();
        label_4->raise();
        label_7->raise();
        label_5->raise();
        label_29->raise();
        but_img2->raise();
        combo_etat_2->raise();
        combo_etat_ajout->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_bus = new QTableView(tab_2);
        tab_bus->setObjectName(QStringLiteral("tab_bus"));
        tab_bus->setGeometry(QRect(0, 99, 561, 371));
        QPalette palette;
        QBrush brush(QColor(255, 255, 0, 128));
        brush.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        tab_bus->setPalette(palette);
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, -10, 800, 500));
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        Digital_clock = new QLabel(tab_2);
        Digital_clock->setObjectName(QStringLiteral("Digital_clock"));
        Digital_clock->setGeometry(QRect(120, 10, 121, 31));
        QFont font1;
        font1.setPointSize(14);
        Digital_clock->setFont(font1);
        pb_facebook_2 = new QPushButton(tab_2);
        pb_facebook_2->setObjectName(QStringLiteral("pb_facebook_2"));
        pb_facebook_2->setGeometry(QRect(60, 0, 51, 51));
        QIcon icon;
        icon.addFile(QStringLiteral("../../Facebook-logo-png-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_facebook_2->setIcon(icon);
        pb_facebook_2->setIconSize(QSize(50, 50));
        pb_instagram_2 = new QPushButton(tab_2);
        pb_instagram_2->setObjectName(QStringLiteral("pb_instagram_2"));
        pb_instagram_2->setGeometry(QRect(0, 0, 51, 51));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../download.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_instagram_2->setIcon(icon1);
        pb_instagram_2->setIconSize(QSize(40, 40));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 60, 91, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Palatino Linotype"));
        font2.setPointSize(12);
        label_8->setFont(font2);
        le_matriculesupp = new QLineEdit(tab_2);
        le_matriculesupp->setObjectName(QStringLiteral("le_matriculesupp"));
        le_matriculesupp->setGeometry(QRect(90, 60, 101, 31));
        pb_supprimer_3 = new QPushButton(tab_2);
        pb_supprimer_3->setObjectName(QStringLiteral("pb_supprimer_3"));
        pb_supprimer_3->setGeometry(QRect(310, 60, 100, 30));
        pb_supprimer = new QPushButton(tab_2);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(200, 60, 100, 30));
        imgaff = new QLabel(tab_2);
        imgaff->setObjectName(QStringLiteral("imgaff"));
        imgaff->setGeometry(QRect(570, 220, 201, 81));
        imgaff->setScaledContents(true);
        pb_afficher = new QPushButton(tab_2);
        pb_afficher->setObjectName(QStringLiteral("pb_afficher"));
        pb_afficher->setGeometry(QRect(420, 60, 100, 30));
        pb_trier = new QPushButton(tab_2);
        pb_trier->setObjectName(QStringLiteral("pb_trier"));
        pb_trier->setGeometry(QRect(530, 60, 100, 30));
        comboOrdre = new QComboBox(tab_2);
        comboOrdre->setObjectName(QStringLiteral("comboOrdre"));
        comboOrdre->setGeometry(QRect(640, 60, 101, 22));
        tabWidget->addTab(tab_2, QString());
        label_16->raise();
        tab_bus->raise();
        Digital_clock->raise();
        pb_facebook_2->raise();
        pb_instagram_2->raise();
        label_8->raise();
        le_matriculesupp->raise();
        pb_supprimer_3->raise();
        pb_supprimer->raise();
        imgaff->raise();
        pb_afficher->raise();
        pb_trier->raise();
        comboOrdre->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, -10, 800, 500));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        le_matriculemod = new QLineEdit(tab_4);
        le_matriculemod->setObjectName(QStringLiteral("le_matriculemod"));
        le_matriculemod->setGeometry(QRect(191, 100, 200, 40));
        label_30 = new QLabel(tab_4);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 280, 131, 41));
        label_30->setFont(font);
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 50, 371, 391));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/244340699_686126612356691_3962841609219595743_n.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 100, 131, 41));
        label_10->setFont(font);
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 220, 131, 41));
        label_11->setFont(font);
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 160, 131, 41));
        label_12->setFont(font);
        but_modifier = new QPushButton(tab_4);
        but_modifier->setObjectName(QStringLiteral("but_modifier"));
        but_modifier->setGeometry(QRect(240, 330, 100, 30));
        combo_etat = new QComboBox(tab_4);
        combo_etat->setObjectName(QStringLiteral("combo_etat"));
        combo_etat->setGeometry(QRect(190, 280, 200, 40));
        but_img = new QPushButton(tab_4);
        but_img->setObjectName(QStringLiteral("but_img"));
        but_img->setGeometry(QRect(190, 160, 200, 40));
        img = new QLabel(tab_4);
        img->setObjectName(QStringLiteral("img"));
        img->setGeometry(QRect(290, 110, 31, 16));
        combo_etat_modif = new QComboBox(tab_4);
        combo_etat_modif->setObjectName(QStringLiteral("combo_etat_modif"));
        combo_etat_modif->setGeometry(QRect(190, 223, 200, 40));
        tabWidget->addTab(tab_4, QString());
        img->raise();
        label_15->raise();
        label_9->raise();
        le_matriculemod->raise();
        label_30->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        but_modifier->raise();
        combo_etat->raise();
        but_img->raise();
        combo_etat_modif->raise();
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1105, 26));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "MainWindow", Q_NULLPTR));
        label_6->setText(QString());
        label_13->setText(QString());
        pb_ajouter->setText(QApplication::translate("MainWindow2", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow2", "Classe", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow2", "Matricule", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow2", "Image", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow2", "Etat", Q_NULLPTR));
        but_img2->setText(QApplication::translate("MainWindow2", "Parcourir une image", Q_NULLPTR));
        combo_etat_2->clear();
        combo_etat_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "En Marche", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "En Panne", Q_NULLPTR)
        );
        combo_etat_ajout->clear();
        combo_etat_ajout->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "Touristique", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "Express", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "Commun", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow2", "Ajouter", Q_NULLPTR));
        label_16->setText(QString());
        Digital_clock->setText(QApplication::translate("MainWindow2", "Clock", Q_NULLPTR));
        pb_facebook_2->setText(QString());
        pb_instagram_2->setText(QString());
        label_8->setText(QApplication::translate("MainWindow2", "Matricule", Q_NULLPTR));
        pb_supprimer_3->setText(QApplication::translate("MainWindow2", "Rechercher", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow2", "Supprimer", Q_NULLPTR));
        imgaff->setText(QString());
        pb_afficher->setText(QApplication::translate("MainWindow2", "Afficher", Q_NULLPTR));
        pb_trier->setText(QApplication::translate("MainWindow2", "Trier", Q_NULLPTR));
        comboOrdre->clear();
        comboOrdre->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "Croissant", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "Decroissant", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow2", "Affichage", Q_NULLPTR));
        label_15->setText(QString());
        label_30->setText(QApplication::translate("MainWindow2", "Etat", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("MainWindow2", "Matricule", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow2", "Classe", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow2", "Image", Q_NULLPTR));
        but_modifier->setText(QApplication::translate("MainWindow2", "Modifier", Q_NULLPTR));
        combo_etat->clear();
        combo_etat->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "En Marche", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "En Panne", Q_NULLPTR)
        );
        but_img->setText(QApplication::translate("MainWindow2", "Parcourir une image", Q_NULLPTR));
        img->setText(QApplication::translate("MainWindow2", "TextLabel", Q_NULLPTR));
        combo_etat_modif->clear();
        combo_etat_modif->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "Touristique", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "Express", Q_NULLPTR)
         << QApplication::translate("MainWindow2", "Commun", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow2", "Modifier ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
