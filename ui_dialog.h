/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
 
#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QFrame *frame;
    QPushButton *pushButtonCll;
    QPushButton *pushButtonRej;
    QPushButton *pushButtonNum1;
    QPushButton *pushButtonNum2;
    QPushButton *pushButtonNum3;
    QPushButton *pushButtonNum4;
    QPushButton *pushButtonNum5;
    QPushButton *pushButtonNum6;
    QPushButton *pushButtonNum7;
    QPushButton *pushButtonNum8;
    QPushButton *pushButtonNum9;
    QPushButton *pushButtonNumSep;
    QPushButton *pushButtonNum0;
    QPushButton *pushButtonNumClr;
    QComboBox *c;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditIp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(261, 513);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setWindowOpacity(1);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(235, 25));
        lineEdit->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"	border: 2px solid black;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px;"));
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 2);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(241, 361));
        frame->setLayoutDirection(Qt::LeftToRight);
        frame->setStyleSheet(QLatin1String("QFrame#frame	{\n"
"	background-color: white;\n"
"	border: 1px solid rgb(100,100,100);\n"
"}"));
        frame->setInputMethodHints(Qt::ImhNone);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        frame->setMidLineWidth(0);
        pushButtonCll = new QPushButton(frame);
        pushButtonCll->setObjectName(QStringLiteral("pushButtonCll"));
        pushButtonCll->setGeometry(QRect(20, 10, 60, 60));
        pushButtonCll->setStyleSheet(QLatin1String("QPushButton#pushButtonCll	{\n"
"	background-color: rgb(63,127,0);\n"
"	border: none;\n"
"	border-radius: 20px;\n"
"	border: 5px solid rgb(63,127,0);\n"
"}\n"
"\n"
"QPushButton#pushButtonCll:hover	{\n"
"	background-color: rgb(63,127,0);\n"
"	border: 5px solid  rgb(37,74,0);\n"
"}\n"
"\n"
"QPushButton#pushButtonCll:pressed	{\n"
"	background-color: rgb(63,127,0);\n"
"	border: 5px solid  rgb(87,174,0);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/green.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCll->setIcon(icon);
        pushButtonCll->setIconSize(QSize(50, 50));
        pushButtonCll->setFlat(false);
        pushButtonRej = new QPushButton(frame);
        pushButtonRej->setObjectName(QStringLiteral("pushButtonRej"));
        pushButtonRej->setGeometry(QRect(160, 10, 60, 60));
        pushButtonRej->setStyleSheet(QLatin1String("QPushButton#pushButtonRej	{\n"
"	background-color: rgb(190,31,37);\n"
"	border: none;\n"
"	border-radius: 20px;\n"
"	border: 5px solid rgb(190,31,37);\n"
"}\n"
"\n"
"QPushButton#pushButtonRej:hover	{\n"
"	background-color: rgb(190,31,37);\n"
"	border: 5px solid  rgb(137,22,28);\n"
"}\n"
"\n"
"QPushButton#pushButtonRej:pressed	{\n"
"	background-color: rgb(190,31,37);\n"
"	border: 5px solid  rgb(225,70,78);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRej->setIcon(icon1);
        pushButtonRej->setIconSize(QSize(45, 45));
        pushButtonNum1 = new QPushButton(frame);
        pushButtonNum1->setObjectName(QStringLiteral("pushButtonNum1"));
        pushButtonNum1->setGeometry(QRect(20, 80, 60, 60));
        QFont font;
        font.setPointSize(20);
        pushButtonNum1->setFont(font);
        pushButtonNum1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum1->setStyleSheet(QLatin1String("QPushButton#pushButtonNum1	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum1:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum1:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}"));
        pushButtonNum1->setIconSize(QSize(50, 50));
        pushButtonNum1->setFlat(false);
        pushButtonNum2 = new QPushButton(frame);
        pushButtonNum2->setObjectName(QStringLiteral("pushButtonNum2"));
        pushButtonNum2->setGeometry(QRect(90, 80, 60, 60));
        pushButtonNum2->setFont(font);
        pushButtonNum2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum2->setStyleSheet(QLatin1String("QPushButton#pushButtonNum2	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum2:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum2:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}"));
        pushButtonNum2->setIconSize(QSize(50, 50));
        pushButtonNum2->setFlat(false);
        pushButtonNum3 = new QPushButton(frame);
        pushButtonNum3->setObjectName(QStringLiteral("pushButtonNum3"));
        pushButtonNum3->setGeometry(QRect(160, 80, 60, 60));
        pushButtonNum3->setFont(font);
        pushButtonNum3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum3->setStyleSheet(QLatin1String("QPushButton#pushButtonNum3	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum3:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum3:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}"));
        pushButtonNum3->setIconSize(QSize(50, 50));
        pushButtonNum3->setFlat(false);
        pushButtonNum4 = new QPushButton(frame);
        pushButtonNum4->setObjectName(QStringLiteral("pushButtonNum4"));
        pushButtonNum4->setGeometry(QRect(20, 150, 60, 60));
        pushButtonNum4->setFont(font);
        pushButtonNum4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum4->setStyleSheet(QLatin1String("QPushButton#pushButtonNum4	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum4:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum4:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNum4->setIconSize(QSize(50, 50));
        pushButtonNum4->setFlat(false);
        pushButtonNum5 = new QPushButton(frame);
        pushButtonNum5->setObjectName(QStringLiteral("pushButtonNum5"));
        pushButtonNum5->setGeometry(QRect(90, 150, 60, 60));
        pushButtonNum5->setFont(font);
        pushButtonNum5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum5->setStyleSheet(QLatin1String("QPushButton#pushButtonNum5	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum5:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum5:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNum5->setIconSize(QSize(50, 50));
        pushButtonNum5->setFlat(false);
        pushButtonNum6 = new QPushButton(frame);
        pushButtonNum6->setObjectName(QStringLiteral("pushButtonNum6"));
        pushButtonNum6->setGeometry(QRect(160, 150, 60, 60));
        pushButtonNum6->setFont(font);
        pushButtonNum6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum6->setStyleSheet(QLatin1String("QPushButton#pushButtonNum6	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum6:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum6:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNum6->setIconSize(QSize(50, 50));
        pushButtonNum6->setFlat(false);
        pushButtonNum7 = new QPushButton(frame);
        pushButtonNum7->setObjectName(QStringLiteral("pushButtonNum7"));
        pushButtonNum7->setGeometry(QRect(20, 220, 60, 60));
        pushButtonNum7->setFont(font);
        pushButtonNum7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum7->setStyleSheet(QLatin1String("QPushButton#pushButtonNum7	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum7:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum7:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNum7->setIconSize(QSize(50, 50));
        pushButtonNum7->setFlat(false);
        pushButtonNum8 = new QPushButton(frame);
        pushButtonNum8->setObjectName(QStringLiteral("pushButtonNum8"));
        pushButtonNum8->setGeometry(QRect(90, 220, 60, 60));
        pushButtonNum8->setFont(font);
        pushButtonNum8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum8->setStyleSheet(QLatin1String("QPushButton#pushButtonNum8	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum8:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum8:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNum8->setIconSize(QSize(50, 50));
        pushButtonNum8->setFlat(false);
        pushButtonNum9 = new QPushButton(frame);
        pushButtonNum9->setObjectName(QStringLiteral("pushButtonNum9"));
        pushButtonNum9->setGeometry(QRect(160, 220, 60, 60));
        pushButtonNum9->setFont(font);
        pushButtonNum9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum9->setStyleSheet(QLatin1String("QPushButton#pushButtonNum9	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum9:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum9:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNum9->setIconSize(QSize(50, 50));
        pushButtonNum9->setFlat(false);
        pushButtonNumSep = new QPushButton(frame);
        pushButtonNumSep->setObjectName(QStringLiteral("pushButtonNumSep"));
        pushButtonNumSep->setGeometry(QRect(20, 290, 60, 60));
        pushButtonNumSep->setFont(font);
        pushButtonNumSep->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNumSep->setStyleSheet(QLatin1String("QPushButton#pushButtonNumSep	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNumSep:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNumSep:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNumSep->setIconSize(QSize(50, 50));
        pushButtonNumSep->setFlat(false);
        pushButtonNum0 = new QPushButton(frame);
        pushButtonNum0->setObjectName(QStringLiteral("pushButtonNum0"));
        pushButtonNum0->setGeometry(QRect(90, 290, 60, 60));
        pushButtonNum0->setFont(font);
        pushButtonNum0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNum0->setStyleSheet(QLatin1String("QPushButton#pushButtonNum0	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum0:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNum0:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNum0->setIconSize(QSize(50, 50));
        pushButtonNum0->setFlat(false);
        pushButtonNumClr = new QPushButton(frame);
        pushButtonNumClr->setObjectName(QStringLiteral("pushButtonNumClr"));
        pushButtonNumClr->setGeometry(QRect(160, 290, 60, 60));
        pushButtonNumClr->setFont(font);
        pushButtonNumClr->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNumClr->setStyleSheet(QLatin1String("QPushButton#pushButtonNumClr	{\n"
"	background-color: rgb(234,234,225);\n"
"	border: none;\n"
"	border-radius: 30px;\n"
"	border: 1px solid rgb(202,202,225);\n"
"	color: rgb(145,145,255);\n"
"}\n"
"\n"
"QPushButton#pushButtonNumClr:hover	{\n"
"	background-color: rgb(234,234,225);\n"
"}\n"
"\n"
"QPushButton#pushButtonNumClr:pressed	{\n"
"	background-color: rgb(221,221,225);\n"
"}\n"
""));
        pushButtonNumClr->setIconSize(QSize(50, 50));
        pushButtonNumClr->setFlat(false);

        gridLayout_2->addWidget(frame, 1, 0, 1, 2);

        c = new QComboBox(centralwidget);
        c->setObjectName(QStringLiteral("c"));

        gridLayout_2->addWidget(c, 3, 0, 1, 2);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMinimumSize(QSize(0, 58));
        frame_2->setStyleSheet(QLatin1String("QFrame#frame_2	{\n"
"	background-color: rgb(100,100,100);\n"
"	border: 1px solid rgb(100,100,100);\n"
"}"));
        frame_2->setInputMethodHints(Qt::ImhNone);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 0, 5, 0);
        lineEditIp = new QLineEdit(frame_2);
        lineEditIp->setObjectName(QStringLiteral("lineEditIp"));
        sizePolicy1.setHeightForWidth(lineEditIp->sizePolicy().hasHeightForWidth());
        lineEditIp->setSizePolicy(sizePolicy1);
        lineEditIp->setMinimumSize(QSize(0, 45));
        QFont font1;
        font1.setPointSize(12);
        lineEditIp->setFont(font1);
        lineEditIp->setStyleSheet(QLatin1String("QLineEdit#lineEditIp	{\n"
"	border-radius: 20px;\n"
"	border: 1px solid black;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px;\n"
"}"));
        lineEditIp->setInputMethodHints(Qt::ImhPreferNumbers);
        lineEditIp->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEditIp);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineEdit, lineEditIp);
        QWidget::setTabOrder(lineEditIp, pushButtonCll);
        QWidget::setTabOrder(pushButtonCll, pushButtonRej);
        QWidget::setTabOrder(pushButtonRej, pushButtonNum1);
        QWidget::setTabOrder(pushButtonNum1, pushButtonNum2);
        QWidget::setTabOrder(pushButtonNum2, pushButtonNum3);
        QWidget::setTabOrder(pushButtonNum3, pushButtonNum4);
        QWidget::setTabOrder(pushButtonNum4, pushButtonNum5);
        QWidget::setTabOrder(pushButtonNum5, pushButtonNum6);
        QWidget::setTabOrder(pushButtonNum6, pushButtonNum7);
        QWidget::setTabOrder(pushButtonNum7, pushButtonNum8);
        QWidget::setTabOrder(pushButtonNum8, pushButtonNum9);
        QWidget::setTabOrder(pushButtonNum9, pushButtonNumSep);
        QWidget::setTabOrder(pushButtonNumSep, pushButtonNum0);
        QWidget::setTabOrder(pushButtonNum0, pushButtonNumClr);
        QWidget::setTabOrder(pushButtonNumClr, pushButton);
        QWidget::setTabOrder(pushButton, c);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lan Comm", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Enter Name", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Scan", Q_NULLPTR));
        pushButtonCll->setText(QString());
        pushButtonRej->setText(QString());
        pushButtonNum1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButtonNum2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButtonNum3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButtonNum4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButtonNum5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButtonNum6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButtonNum7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButtonNum8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButtonNum9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButtonNumSep->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        pushButtonNum0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButtonNumClr->setText(QApplication::translate("MainWindow", "CLR", Q_NULLPTR));
        lineEditIp->setText(QString());
        lineEditIp->setPlaceholderText(QApplication::translate("MainWindow", "Enter IP To Call", Q_NULLPTR));//Q_NULLPTR
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
