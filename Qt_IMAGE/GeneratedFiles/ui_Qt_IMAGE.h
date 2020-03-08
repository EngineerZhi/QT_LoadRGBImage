/********************************************************************************
** Form generated from reading UI file 'Qt_IMAGE.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_IMAGE_H
#define UI_QT_IMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt_IMAGEClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_IMAGEClass)
    {
        if (Qt_IMAGEClass->objectName().isEmpty())
            Qt_IMAGEClass->setObjectName(QStringLiteral("Qt_IMAGEClass"));
        Qt_IMAGEClass->resize(867, 584);
        centralWidget = new QWidget(Qt_IMAGEClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 691, 411));
        Qt_IMAGEClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Qt_IMAGEClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt_IMAGEClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qt_IMAGEClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt_IMAGEClass->setStatusBar(statusBar);

        retranslateUi(Qt_IMAGEClass);

        QMetaObject::connectSlotsByName(Qt_IMAGEClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_IMAGEClass)
    {
        Qt_IMAGEClass->setWindowTitle(QApplication::translate("Qt_IMAGEClass", "Qt_IMAGE", Q_NULLPTR));
        label->setText(QApplication::translate("Qt_IMAGEClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qt_IMAGEClass: public Ui_Qt_IMAGEClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_IMAGE_H
