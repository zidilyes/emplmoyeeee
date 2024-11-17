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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_role;
    QPushButton *pushButton_ajouter;
    QPushButton *pushButton_supprimer;
    QTableView *tableView;
    QPushButton *pushButton_update;
    QLineEdit *lineEdit_ID_2;
    QLineEdit *lineEdit_ID_3;
    QLineEdit *lineEdit_ID_4;
    QLineEdit *lineEdit_ID_5;
    QPushButton *pushButton_rechercher;
    QPushButton *pushButton_trier;
    QPushButton *pushButton_statistiques;
    QPushButton *pushButton_exporterPDF;
    QLineEdit *lineEdit_recherche;
    QTableView *tableView_statistiques;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1188, 634);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(98, 145, 255);\n"
"alternate-background-color: rgb(255, 255, 255);\n"
"border-color: rgb(232, 232, 232);\n"
"alternate-background-color: rgb(162, 218, 255);\n"
"color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEdit_ID = new QLineEdit(centralwidget);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(200, 230, 391, 41));
        lineEdit_ID->setStyleSheet(QStringLiteral(""));
        lineEdit_nom = new QLineEdit(centralwidget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(200, 280, 391, 41));
        lineEdit_prenom = new QLineEdit(centralwidget);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(200, 330, 391, 41));
        lineEdit_role = new QLineEdit(centralwidget);
        lineEdit_role->setObjectName(QStringLiteral("lineEdit_role"));
        lineEdit_role->setGeometry(QRect(200, 380, 391, 41));
        pushButton_ajouter = new QPushButton(centralwidget);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(70, 540, 93, 28));
        pushButton_supprimer = new QPushButton(centralwidget);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(180, 540, 93, 28));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 0, 741, 211));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_update = new QPushButton(centralwidget);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(290, 540, 93, 28));
        lineEdit_ID_2 = new QLineEdit(centralwidget);
        lineEdit_ID_2->setObjectName(QStringLiteral("lineEdit_ID_2"));
        lineEdit_ID_2->setGeometry(QRect(30, 230, 161, 41));
        lineEdit_ID_3 = new QLineEdit(centralwidget);
        lineEdit_ID_3->setObjectName(QStringLiteral("lineEdit_ID_3"));
        lineEdit_ID_3->setGeometry(QRect(30, 280, 161, 41));
        lineEdit_ID_4 = new QLineEdit(centralwidget);
        lineEdit_ID_4->setObjectName(QStringLiteral("lineEdit_ID_4"));
        lineEdit_ID_4->setGeometry(QRect(30, 330, 161, 41));
        lineEdit_ID_5 = new QLineEdit(centralwidget);
        lineEdit_ID_5->setObjectName(QStringLiteral("lineEdit_ID_5"));
        lineEdit_ID_5->setGeometry(QRect(30, 380, 161, 41));
        pushButton_rechercher = new QPushButton(centralwidget);
        pushButton_rechercher->setObjectName(QStringLiteral("pushButton_rechercher"));
        pushButton_rechercher->setGeometry(QRect(940, 440, 93, 28));
        pushButton_trier = new QPushButton(centralwidget);
        pushButton_trier->setObjectName(QStringLiteral("pushButton_trier"));
        pushButton_trier->setGeometry(QRect(400, 540, 93, 28));
        pushButton_statistiques = new QPushButton(centralwidget);
        pushButton_statistiques->setObjectName(QStringLiteral("pushButton_statistiques"));
        pushButton_statistiques->setGeometry(QRect(940, 230, 93, 28));
        pushButton_exporterPDF = new QPushButton(centralwidget);
        pushButton_exporterPDF->setObjectName(QStringLiteral("pushButton_exporterPDF"));
        pushButton_exporterPDF->setGeometry(QRect(1070, 550, 93, 28));
        lineEdit_recherche = new QLineEdit(centralwidget);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(850, 370, 261, 51));
        lineEdit_recherche->setStyleSheet(QStringLiteral(""));
        tableView_statistiques = new QTableView(centralwidget);
        tableView_statistiques->setObjectName(QStringLiteral("tableView_statistiques"));
        tableView_statistiques->setGeometry(QRect(800, 0, 351, 211));
        tableView_statistiques->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(770, 10, 16, 591));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1188, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lineEdit_ID->setText(QString());
        lineEdit_nom->setText(QString());
        lineEdit_prenom->setText(QString());
        lineEdit_role->setText(QString());
        pushButton_ajouter->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        pushButton_update->setText(QApplication::translate("MainWindow", "EDITER", Q_NULLPTR));
        lineEdit_ID_2->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        lineEdit_ID_3->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        lineEdit_ID_4->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        lineEdit_ID_5->setText(QApplication::translate("MainWindow", "role", Q_NULLPTR));
        pushButton_rechercher->setText(QApplication::translate("MainWindow", "RECHERCHE", Q_NULLPTR));
        pushButton_trier->setText(QApplication::translate("MainWindow", "TRIER", Q_NULLPTR));
        pushButton_statistiques->setText(QApplication::translate("MainWindow", "STATIQTIQUE", Q_NULLPTR));
        pushButton_exporterPDF->setText(QApplication::translate("MainWindow", "EXPORTER", Q_NULLPTR));
        lineEdit_recherche->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
