/********************************************************************************
** Form generated from reading ui file 'blackline.ui'
**
** Created: Sun Jul 1 20:40:13 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BLACKLINE_H
#define UI_BLACKLINE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackLine
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BlackLine)
    {
    if (BlackLine->objectName().isEmpty())
        BlackLine->setObjectName(QString::fromUtf8("BlackLine"));
    BlackLine->resize(400, 300);
    menuBar = new QMenuBar(BlackLine);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    BlackLine->setMenuBar(menuBar);
    mainToolBar = new QToolBar(BlackLine);
    mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
    BlackLine->addToolBar(mainToolBar);
    centralWidget = new QWidget(BlackLine);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    BlackLine->setCentralWidget(centralWidget);
    statusBar = new QStatusBar(BlackLine);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    BlackLine->setStatusBar(statusBar);

    retranslateUi(BlackLine);

    QMetaObject::connectSlotsByName(BlackLine);
    } // setupUi

    void retranslateUi(QMainWindow *BlackLine)
    {
    BlackLine->setWindowTitle(QApplication::translate("BlackLine", "BlackLine", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(BlackLine);
    } // retranslateUi

};

namespace Ui {
    class BlackLine: public Ui_BlackLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKLINE_H
