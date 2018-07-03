/********************************************************************************
** Form generated from reading ui file 'blackline.ui'
**
** Created: Tue Jul 3 10:31:44 2018
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
#include <QtGui/QCheckBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QFrame>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackLine
{
public:
    QWidget *centralWidget;
    QLabel *label_background;
    QCommandLinkButton *autoModeBtn;
    QCommandLinkButton *handModeBtn;
    QWidget *frame_handmode_menu;
    QCheckBox *checkBox_21;
    QCheckBox *checkBox_19;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_22;
    QCheckBox *checkBox;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_18;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_20;
    QCheckBox *checkBox_16;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_14;
    QPushButton *start_collect_handmode_btn;
    QPushButton *close_handmode_menu_btn;
    QPushButton *chose_folder_handmode_btn;
    QLabel *folder_path_handmode;
    QFrame *frame_automode_menu;
    QPushButton *start_collect_btn_automode;
    QCheckBox *checkBox_23;
    QTextBrowser *textBrowser;
    QPushButton *close_automode_menu_btn;
    QPushButton *chose_folder_automode_btn;
    QLabel *folder_path_automode;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QMainWindow *BlackLine)
    {
    if (BlackLine->objectName().isEmpty())
        BlackLine->setObjectName(QString::fromUtf8("BlackLine"));
    BlackLine->resize(1009, 590);
    centralWidget = new QWidget(BlackLine);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    centralWidget->setMinimumSize(QSize(500, 400));
    centralWidget->setMaximumSize(QSize(1000, 600));
    centralWidget->setLayoutDirection(Qt::LeftToRight);
    label_background = new QLabel(centralWidget);
    label_background->setObjectName(QString::fromUtf8("label_background"));
    label_background->setGeometry(QRect(-5, 0, 1015, 592));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(label_background->sizePolicy().hasHeightForWidth());
    label_background->setSizePolicy(sizePolicy);
    label_background->setMinimumSize(QSize(887, 418));
    label_background->setMaximumSize(QSize(1015, 745));
    label_background->setSizeIncrement(QSize(22, 31));
    label_background->setAutoFillBackground(false);
    label_background->setPixmap(QPixmap(QString::fromUtf8(":/Image/rsc/14287-01.png")));
    label_background->setScaledContents(true);
    autoModeBtn = new QCommandLinkButton(centralWidget);
    autoModeBtn->setObjectName(QString::fromUtf8("autoModeBtn"));
    autoModeBtn->setEnabled(true);
    autoModeBtn->setGeometry(QRect(50, 60, 271, 61));
    QFont font;
    font.setPointSize(14);
    autoModeBtn->setFont(font);
    autoModeBtn->setCursor(QCursor(Qt::PointingHandCursor));
    autoModeBtn->setFocusPolicy(Qt::NoFocus);
    handModeBtn = new QCommandLinkButton(centralWidget);
    handModeBtn->setObjectName(QString::fromUtf8("handModeBtn"));
    handModeBtn->setGeometry(QRect(50, 130, 281, 61));
    handModeBtn->setFont(font);
    handModeBtn->setCursor(QCursor(Qt::PointingHandCursor));
    frame_handmode_menu = new QWidget(centralWidget);
    frame_handmode_menu->setObjectName(QString::fromUtf8("frame_handmode_menu"));
    frame_handmode_menu->setGeometry(QRect(380, 10, 611, 571));
    frame_handmode_menu->setMinimumSize(QSize(7, 0));
    frame_handmode_menu->setAutoFillBackground(true);
    checkBox_21 = new QCheckBox(frame_handmode_menu);
    checkBox_21->setObjectName(QString::fromUtf8("checkBox_21"));
    checkBox_21->setGeometry(QRect(350, 240, 82, 21));
    checkBox_19 = new QCheckBox(frame_handmode_menu);
    checkBox_19->setObjectName(QString::fromUtf8("checkBox_19"));
    checkBox_19->setGeometry(QRect(350, 320, 82, 21));
    checkBox_12 = new QCheckBox(frame_handmode_menu);
    checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
    checkBox_12->setGeometry(QRect(350, 80, 82, 21));
    checkBox_13 = new QCheckBox(frame_handmode_menu);
    checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
    checkBox_13->setGeometry(QRect(350, 440, 82, 21));
    checkBox_22 = new QCheckBox(frame_handmode_menu);
    checkBox_22->setObjectName(QString::fromUtf8("checkBox_22"));
    checkBox_22->setGeometry(QRect(350, 200, 82, 21));
    checkBox = new QCheckBox(frame_handmode_menu);
    checkBox->setObjectName(QString::fromUtf8("checkBox"));
    checkBox->setGeometry(QRect(30, 120, 82, 21));
    checkBox_11 = new QCheckBox(frame_handmode_menu);
    checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
    checkBox_11->setGeometry(QRect(30, 40, 82, 21));
    checkBox_4 = new QCheckBox(frame_handmode_menu);
    checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
    checkBox_4->setGeometry(QRect(30, 240, 82, 21));
    checkBox_2 = new QCheckBox(frame_handmode_menu);
    checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
    checkBox_2->setGeometry(QRect(30, 160, 82, 21));
    checkBox_18 = new QCheckBox(frame_handmode_menu);
    checkBox_18->setObjectName(QString::fromUtf8("checkBox_18"));
    checkBox_18->setGeometry(QRect(350, 400, 82, 21));
    checkBox_10 = new QCheckBox(frame_handmode_menu);
    checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
    checkBox_10->setGeometry(QRect(30, 80, 82, 21));
    checkBox_3 = new QCheckBox(frame_handmode_menu);
    checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
    checkBox_3->setGeometry(QRect(30, 200, 82, 21));
    checkBox_20 = new QCheckBox(frame_handmode_menu);
    checkBox_20->setObjectName(QString::fromUtf8("checkBox_20"));
    checkBox_20->setGeometry(QRect(350, 360, 82, 21));
    checkBox_16 = new QCheckBox(frame_handmode_menu);
    checkBox_16->setObjectName(QString::fromUtf8("checkBox_16"));
    checkBox_16->setGeometry(QRect(350, 280, 82, 21));
    checkBox_6 = new QCheckBox(frame_handmode_menu);
    checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
    checkBox_6->setGeometry(QRect(30, 320, 82, 21));
    checkBox_5 = new QCheckBox(frame_handmode_menu);
    checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
    checkBox_5->setGeometry(QRect(30, 280, 82, 21));
    checkBox_17 = new QCheckBox(frame_handmode_menu);
    checkBox_17->setObjectName(QString::fromUtf8("checkBox_17"));
    checkBox_17->setGeometry(QRect(350, 160, 82, 21));
    checkBox_7 = new QCheckBox(frame_handmode_menu);
    checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
    checkBox_7->setGeometry(QRect(30, 360, 82, 21));
    checkBox_15 = new QCheckBox(frame_handmode_menu);
    checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));
    checkBox_15->setGeometry(QRect(350, 40, 82, 21));
    checkBox_9 = new QCheckBox(frame_handmode_menu);
    checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
    checkBox_9->setGeometry(QRect(30, 440, 82, 21));
    checkBox_8 = new QCheckBox(frame_handmode_menu);
    checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
    checkBox_8->setGeometry(QRect(30, 400, 82, 21));
    checkBox_14 = new QCheckBox(frame_handmode_menu);
    checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));
    checkBox_14->setGeometry(QRect(350, 120, 82, 21));
    start_collect_handmode_btn = new QPushButton(frame_handmode_menu);
    start_collect_handmode_btn->setObjectName(QString::fromUtf8("start_collect_handmode_btn"));
    start_collect_handmode_btn->setGeometry(QRect(400, 520, 181, 41));
    close_handmode_menu_btn = new QPushButton(frame_handmode_menu);
    close_handmode_menu_btn->setObjectName(QString::fromUtf8("close_handmode_menu_btn"));
    close_handmode_menu_btn->setGeometry(QRect(580, 10, 20, 16));
    chose_folder_handmode_btn = new QPushButton(frame_handmode_menu);
    chose_folder_handmode_btn->setObjectName(QString::fromUtf8("chose_folder_handmode_btn"));
    chose_folder_handmode_btn->setGeometry(QRect(400, 470, 181, 28));
    folder_path_handmode = new QLabel(frame_handmode_menu);
    folder_path_handmode->setObjectName(QString::fromUtf8("folder_path_handmode"));
    folder_path_handmode->setGeometry(QRect(30, 470, 361, 31));
    folder_path_handmode->setAutoFillBackground(false);
    checkBox_21->raise();
    checkBox_19->raise();
    checkBox_12->raise();
    checkBox_13->raise();
    checkBox_22->raise();
    checkBox->raise();
    checkBox_11->raise();
    checkBox_4->raise();
    checkBox_2->raise();
    checkBox_18->raise();
    checkBox_10->raise();
    checkBox_3->raise();
    checkBox_20->raise();
    checkBox_16->raise();
    checkBox_6->raise();
    checkBox_5->raise();
    checkBox_17->raise();
    checkBox_7->raise();
    checkBox_15->raise();
    checkBox_9->raise();
    checkBox_8->raise();
    checkBox_14->raise();
    start_collect_handmode_btn->raise();
    close_handmode_menu_btn->raise();
    chose_folder_handmode_btn->raise();
    folder_path_handmode->raise();
    frame_automode_menu = new QFrame(centralWidget);
    frame_automode_menu->setObjectName(QString::fromUtf8("frame_automode_menu"));
    frame_automode_menu->setGeometry(QRect(380, 10, 611, 571));
    frame_automode_menu->setAutoFillBackground(true);
    frame_automode_menu->setFrameShape(QFrame::StyledPanel);
    frame_automode_menu->setFrameShadow(QFrame::Raised);
    start_collect_btn_automode = new QPushButton(frame_automode_menu);
    start_collect_btn_automode->setObjectName(QString::fromUtf8("start_collect_btn_automode"));
    start_collect_btn_automode->setGeometry(QRect(400, 520, 181, 41));
    checkBox_23 = new QCheckBox(frame_automode_menu);
    checkBox_23->setObjectName(QString::fromUtf8("checkBox_23"));
    checkBox_23->setGeometry(QRect(30, 420, 181, 21));
    textBrowser = new QTextBrowser(frame_automode_menu);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(30, 60, 551, 341));
    QFont font1;
    font1.setPointSize(12);
    textBrowser->setFont(font1);
    close_automode_menu_btn = new QPushButton(frame_automode_menu);
    close_automode_menu_btn->setObjectName(QString::fromUtf8("close_automode_menu_btn"));
    close_automode_menu_btn->setGeometry(QRect(580, 10, 20, 16));
    chose_folder_automode_btn = new QPushButton(frame_automode_menu);
    chose_folder_automode_btn->setObjectName(QString::fromUtf8("chose_folder_automode_btn"));
    chose_folder_automode_btn->setGeometry(QRect(400, 470, 181, 28));
    folder_path_automode = new QLabel(frame_automode_menu);
    folder_path_automode->setObjectName(QString::fromUtf8("folder_path_automode"));
    folder_path_automode->setGeometry(QRect(30, 470, 361, 31));
    commandLinkButton = new QCommandLinkButton(centralWidget);
    commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
    commandLinkButton->setGeometry(QRect(50, 200, 271, 71));
    commandLinkButton->setFont(font);
    BlackLine->setCentralWidget(centralWidget);
    label_background->raise();
    autoModeBtn->raise();
    handModeBtn->raise();
    commandLinkButton->raise();
    frame_handmode_menu->raise();
    frame_automode_menu->raise();

    retranslateUi(BlackLine);

    QMetaObject::connectSlotsByName(BlackLine);
    } // setupUi

    void retranslateUi(QMainWindow *BlackLine)
    {
    BlackLine->setWindowTitle(QApplication::translate("BlackLine", "BlackLine", 0, QApplication::UnicodeUTF8));
    label_background->setText(QString());

#ifndef QT_NO_TOOLTIP
    autoModeBtn->setToolTip(QApplication::translate("BlackLine", "Thu th\341\272\255p c\303\241c th\303\264ng tin v\341\273\201 h\341\272\241 t\341\272\247ng m\341\272\241ng, ram, ........\n"
"Th\341\273\235i gian trung b\303\254nh kho\341\272\243ng 20p c\303\263 th\341\273\203 l\303\242u h\306\241n t\303\271y h\341\273\207 th\341\273\221ng", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    autoModeBtn->setText(QApplication::translate("BlackLine", "Thu th\341\272\255p t\341\273\261 \304\221\341\273\231ng", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    handModeBtn->setToolTip(QApplication::translate("BlackLine", "T\341\273\261 l\341\273\261a ch\341\273\215n c\303\241c th\303\264ng tin c\341\272\247n thu th\341\272\255p", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    handModeBtn->setText(QApplication::translate("BlackLine", "Thu th\341\272\255p th\341\273\247 c\303\264ng", 0, QApplication::UnicodeUTF8));
    checkBox_21->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_19->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_12->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_13->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_22->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_11->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_4->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_2->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_18->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_10->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_3->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_20->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_16->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_6->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_5->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_17->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_7->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_15->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_9->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_8->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    checkBox_14->setText(QApplication::translate("BlackLine", "CheckBox", 0, QApplication::UnicodeUTF8));
    start_collect_handmode_btn->setText(QApplication::translate("BlackLine", "B\341\272\257t \304\221\341\272\247u thu th\341\272\255p", 0, QApplication::UnicodeUTF8));
    close_handmode_menu_btn->setText(QApplication::translate("BlackLine", "x", 0, QApplication::UnicodeUTF8));
    chose_folder_handmode_btn->setText(QApplication::translate("BlackLine", "Ch\341\273\215n th\306\260 m\341\273\245c l\306\260u k\341\272\277t qu\341\272\243", 0, QApplication::UnicodeUTF8));
    folder_path_handmode->setText(QApplication::translate("BlackLine", "Ch\306\260a ch\341\273\215n th\306\260 m\341\273\245c l\306\260u k\341\272\277t qu\341\272\243", 0, QApplication::UnicodeUTF8));
    start_collect_btn_automode->setText(QApplication::translate("BlackLine", "B\341\272\257t \304\221\341\272\247u thu th\341\272\255p", 0, QApplication::UnicodeUTF8));
    checkBox_23->setText(QApplication::translate("BlackLine", "Sao l\306\260u b\341\273\231 nh\341\273\233 RAM", 0, QApplication::UnicodeUTF8));
    textBrowser->setHtml(QApplication::translate("BlackLine", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Ch\341\272\277 \304\221\341\273\231 n\303\240y s\341\272\275 thu th\341\272\255p c\303\241c th\303\264ng tin sau:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">+</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">+</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left"
        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">+</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">+</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    close_automode_menu_btn->setText(QApplication::translate("BlackLine", "x", 0, QApplication::UnicodeUTF8));
    chose_folder_automode_btn->setText(QApplication::translate("BlackLine", "Ch\341\273\215n th\306\260 m\341\273\245c l\306\260u k\341\272\277t qu\341\272\243", 0, QApplication::UnicodeUTF8));
    folder_path_automode->setText(QApplication::translate("BlackLine", "Ch\306\260a ch\341\273\215n th\306\260 m\341\273\245c l\306\260u k\341\272\277t qu\341\272\243", 0, QApplication::UnicodeUTF8));
    commandLinkButton->setText(QApplication::translate("BlackLine", "Ph\303\242n t\303\255ch d\341\273\257 li\341\273\207u", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(BlackLine);
    } // retranslateUi

};

namespace Ui {
    class BlackLine: public Ui_BlackLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKLINE_H
