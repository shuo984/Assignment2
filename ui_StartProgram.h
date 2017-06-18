/********************************************************************************
** Form generated from reading UI file 'StartProgram.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPROGRAM_H
#define UI_STARTPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartProgram
{
public:
    QWidget *loginForm;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *login_usnLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *login_pwLine;
    QLabel *loginNotif;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *loginButton;
    QPushButton *signupButton;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QPushButton *resetProg;
    QWidget *selectRoleForm;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *login_readerButton;
    QRadioButton *login_librarianButton;
    QRadioButton *login_usermanagerButton;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *login_backButton;
    QPushButton *login_confirmButton;
    QSpacerItem *verticalSpacer;
    QLabel *xLabel;
    QWidget *signupForm;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_6;
    QLineEdit *regUser_dobLine;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_5;
    QLineEdit *regUser_PIDLine;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QLineEdit *regUser_jobLine;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QLineEdit *regUser_nameLine;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_8;
    QLineEdit *regUser_mailLine;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QLineEdit *regUser_UIDLine;
    QLabel *regUser_PIDdupLabel;
    QLabel *regUser_UIDdupLabel;
    QLabel *regUser_maildupLabel;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *regUser_backButton;
    QPushButton *regUser_confirmButton_1;
    QWidget *signupAccount;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLineEdit *regUser_pwLine;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *regUser_usnLine;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *regUser_repwLine;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_8;
    QLabel *dupUSNLabel;
    QLabel *dupPWLabel;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *regUser_backButton_2;
    QPushButton *regUser_regButton;
    QWidget *regSuccessPage;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *regUser_backButton_3;
    QPushButton *regUser_exitButton;
    QWidget *regAccPage;
    QGridLayout *gridLayout_6;
    QPushButton *newUserButton;
    QPushButton *oldUserButton;
    QWidget *page_2;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_14;
    QLineEdit *regA_uidLine;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_13;
    QLineEdit *regA_libLine;
    QLabel *regA_erLabel;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *regA_backButton;
    QPushButton *regA_confirmButton;
    QLabel *regA_erLabel2;
    QWidget *page;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_15;
    QLineEdit *regA_usnLine;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_16;
    QLineEdit *regA_pwLine;
    QLabel *regA_errLabel;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_17;
    QLineEdit *regA_repwLine;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *regA_backButton_2;
    QPushButton *regA_regButton;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_14;

    void setupUi(QStackedWidget *StartProgram)
    {
        if (StartProgram->objectName().isEmpty())
            StartProgram->setObjectName(QStringLiteral("StartProgram"));
        StartProgram->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/Circle-icons-bookshelf.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        StartProgram->setWindowIcon(icon);
        StartProgram->setWindowOpacity(8);
        StartProgram->setLayoutDirection(Qt::LeftToRight);
        StartProgram->setAutoFillBackground(false);
        StartProgram->setStyleSheet(QLatin1String("StartProgram\n"
"{\n"
"		background: rgb(186, 189, 182);\n"
"}\n"
"QPushButton\n"
"{\n"
"		color: white;\n"
"		background-color: #27a9e3;\n"
"		border-width: 0px;\n"
"		border-radius: 3px;\n"
"}\n"
"QPushButton:hover { background-color: #66c011; }\n"
"\n"
"QPushButton:disabled \n"
"{\n"
"    background-color:  rgb(85, 87, 83);\n"
"}\n"
"QLineEdit:disabled\n"
"{\n"
"		background-color:  rgb(211, 215, 207);\n"
"}\n"
""));
        loginForm = new QWidget();
        loginForm->setObjectName(QStringLiteral("loginForm"));
        gridLayout = new QGridLayout(loginForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(loginForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        login_usnLine = new QLineEdit(loginForm);
        login_usnLine->setObjectName(QStringLiteral("login_usnLine"));

        horizontalLayout->addWidget(login_usnLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        login_pwLine = new QLineEdit(loginForm);
        login_pwLine->setObjectName(QStringLiteral("login_pwLine"));
        login_pwLine->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(login_pwLine);


        verticalLayout->addLayout(horizontalLayout_2);

        loginNotif = new QLabel(loginForm);
        loginNotif->setObjectName(QStringLiteral("loginNotif"));

        verticalLayout->addWidget(loginNotif);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setMinimumSize(QSize(0, 20));

        horizontalLayout_5->addWidget(loginButton);

        signupButton = new QPushButton(loginForm);
        signupButton->setObjectName(QStringLiteral("signupButton"));
        signupButton->setMinimumSize(QSize(0, 20));

        horizontalLayout_5->addWidget(signupButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);

        resetProg = new QPushButton(loginForm);
        resetProg->setObjectName(QStringLiteral("resetProg"));
        resetProg->setMinimumSize(QSize(15, 15));
        resetProg->setMaximumSize(QSize(15, 15));

        gridLayout->addWidget(resetProg, 2, 0, 1, 1);

        StartProgram->addWidget(loginForm);
        selectRoleForm = new QWidget();
        selectRoleForm->setObjectName(QStringLiteral("selectRoleForm"));
        gridLayout_2 = new QGridLayout(selectRoleForm);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        login_readerButton = new QRadioButton(selectRoleForm);
        login_readerButton->setObjectName(QStringLiteral("login_readerButton"));
        login_readerButton->setChecked(true);

        verticalLayout_2->addWidget(login_readerButton);

        login_librarianButton = new QRadioButton(selectRoleForm);
        login_librarianButton->setObjectName(QStringLiteral("login_librarianButton"));

        verticalLayout_2->addWidget(login_librarianButton);

        login_usermanagerButton = new QRadioButton(selectRoleForm);
        login_usermanagerButton->setObjectName(QStringLiteral("login_usermanagerButton"));

        verticalLayout_2->addWidget(login_usermanagerButton);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(-1, 0, -1, -1);
        login_backButton = new QPushButton(selectRoleForm);
        login_backButton->setObjectName(QStringLiteral("login_backButton"));

        horizontalLayout_18->addWidget(login_backButton);

        login_confirmButton = new QPushButton(selectRoleForm);
        login_confirmButton->setObjectName(QStringLiteral("login_confirmButton"));
        login_confirmButton->setMinimumSize(QSize(0, 20));
        login_confirmButton->setAutoDefault(true);

        horizontalLayout_18->addWidget(login_confirmButton);


        verticalLayout_2->addLayout(horizontalLayout_18);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        xLabel = new QLabel(selectRoleForm);
        xLabel->setObjectName(QStringLiteral("xLabel"));

        gridLayout_2->addWidget(xLabel, 2, 1, 1, 1);

        StartProgram->addWidget(selectRoleForm);
        signupForm = new QWidget();
        signupForm->setObjectName(QStringLiteral("signupForm"));
        gridLayout_3 = new QGridLayout(signupForm);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_6 = new QLabel(signupForm);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_13->addWidget(label_6);

        regUser_dobLine = new QLineEdit(signupForm);
        regUser_dobLine->setObjectName(QStringLiteral("regUser_dobLine"));
        regUser_dobLine->setMinimumSize(QSize(140, 0));
        regUser_dobLine->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_13->addWidget(regUser_dobLine);


        gridLayout_3->addLayout(horizontalLayout_13, 4, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_5 = new QLabel(signupForm);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_12->addWidget(label_5);

        regUser_PIDLine = new QLineEdit(signupForm);
        regUser_PIDLine->setObjectName(QStringLiteral("regUser_PIDLine"));
        regUser_PIDLine->setMinimumSize(QSize(140, 0));
        regUser_PIDLine->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_12->addWidget(regUser_PIDLine);


        gridLayout_3->addLayout(horizontalLayout_12, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 8, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_7 = new QLabel(signupForm);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_14->addWidget(label_7);

        regUser_jobLine = new QLineEdit(signupForm);
        regUser_jobLine->setObjectName(QStringLiteral("regUser_jobLine"));
        regUser_jobLine->setMinimumSize(QSize(140, 0));
        regUser_jobLine->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_14->addWidget(regUser_jobLine);


        gridLayout_3->addLayout(horizontalLayout_14, 5, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_3 = new QLabel(signupForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_10->addWidget(label_3);

        regUser_nameLine = new QLineEdit(signupForm);
        regUser_nameLine->setObjectName(QStringLiteral("regUser_nameLine"));
        regUser_nameLine->setMinimumSize(QSize(140, 0));
        regUser_nameLine->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_10->addWidget(regUser_nameLine);


        gridLayout_3->addLayout(horizontalLayout_10, 1, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_8 = new QLabel(signupForm);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_15->addWidget(label_8);

        regUser_mailLine = new QLineEdit(signupForm);
        regUser_mailLine->setObjectName(QStringLiteral("regUser_mailLine"));
        regUser_mailLine->setMinimumSize(QSize(140, 0));
        regUser_mailLine->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_15->addWidget(regUser_mailLine);


        gridLayout_3->addLayout(horizontalLayout_15, 6, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 0, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_4 = new QLabel(signupForm);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_11->addWidget(label_4);

        regUser_UIDLine = new QLineEdit(signupForm);
        regUser_UIDLine->setObjectName(QStringLiteral("regUser_UIDLine"));
        regUser_UIDLine->setMinimumSize(QSize(140, 0));
        regUser_UIDLine->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_11->addWidget(regUser_UIDLine);


        gridLayout_3->addLayout(horizontalLayout_11, 2, 1, 1, 1);

        regUser_PIDdupLabel = new QLabel(signupForm);
        regUser_PIDdupLabel->setObjectName(QStringLiteral("regUser_PIDdupLabel"));

        gridLayout_3->addWidget(regUser_PIDdupLabel, 3, 2, 1, 1);

        regUser_UIDdupLabel = new QLabel(signupForm);
        regUser_UIDdupLabel->setObjectName(QStringLiteral("regUser_UIDdupLabel"));

        gridLayout_3->addWidget(regUser_UIDdupLabel, 2, 2, 1, 1);

        regUser_maildupLabel = new QLabel(signupForm);
        regUser_maildupLabel->setObjectName(QStringLiteral("regUser_maildupLabel"));

        gridLayout_3->addWidget(regUser_maildupLabel, 6, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 3, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 4, 2, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        regUser_backButton = new QPushButton(signupForm);
        regUser_backButton->setObjectName(QStringLiteral("regUser_backButton"));

        horizontalLayout_8->addWidget(regUser_backButton);

        regUser_confirmButton_1 = new QPushButton(signupForm);
        regUser_confirmButton_1->setObjectName(QStringLiteral("regUser_confirmButton_1"));

        horizontalLayout_8->addWidget(regUser_confirmButton_1);


        gridLayout_3->addLayout(horizontalLayout_8, 7, 1, 1, 1);

        StartProgram->addWidget(signupForm);
        signupAccount = new QWidget();
        signupAccount->setObjectName(QStringLiteral("signupAccount"));
        gridLayout_4 = new QGridLayout(signupAccount);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_10 = new QLabel(signupAccount);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_4->addWidget(label_10);

        regUser_pwLine = new QLineEdit(signupAccount);
        regUser_pwLine->setObjectName(QStringLiteral("regUser_pwLine"));
        regUser_pwLine->setMinimumSize(QSize(150, 0));
        regUser_pwLine->setMaximumSize(QSize(150, 16777215));
        regUser_pwLine->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(regUser_pwLine);


        gridLayout_4->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(signupAccount);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        regUser_usnLine = new QLineEdit(signupAccount);
        regUser_usnLine->setObjectName(QStringLiteral("regUser_usnLine"));
        regUser_usnLine->setMinimumSize(QSize(150, 0));
        regUser_usnLine->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(regUser_usnLine);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_11 = new QLabel(signupAccount);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        regUser_repwLine = new QLineEdit(signupAccount);
        regUser_repwLine->setObjectName(QStringLiteral("regUser_repwLine"));
        regUser_repwLine->setMinimumSize(QSize(150, 0));
        regUser_repwLine->setMaximumSize(QSize(150, 16777215));
        regUser_repwLine->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(regUser_repwLine);


        gridLayout_4->addLayout(horizontalLayout_7, 3, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_7, 5, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_8, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 2, 2, 1, 1);

        dupUSNLabel = new QLabel(signupAccount);
        dupUSNLabel->setObjectName(QStringLiteral("dupUSNLabel"));
        dupUSNLabel->setMaximumSize(QSize(1677215, 16777215));

        gridLayout_4->addWidget(dupUSNLabel, 1, 2, 1, 1);

        dupPWLabel = new QLabel(signupAccount);
        dupPWLabel->setObjectName(QStringLiteral("dupPWLabel"));

        gridLayout_4->addWidget(dupPWLabel, 3, 2, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, 0, -1, -1);
        regUser_backButton_2 = new QPushButton(signupAccount);
        regUser_backButton_2->setObjectName(QStringLiteral("regUser_backButton_2"));

        horizontalLayout_16->addWidget(regUser_backButton_2);

        regUser_regButton = new QPushButton(signupAccount);
        regUser_regButton->setObjectName(QStringLiteral("regUser_regButton"));

        horizontalLayout_16->addWidget(regUser_regButton);


        gridLayout_4->addLayout(horizontalLayout_16, 4, 1, 1, 1);

        StartProgram->addWidget(signupAccount);
        regSuccessPage = new QWidget();
        regSuccessPage->setObjectName(QStringLiteral("regSuccessPage"));
        gridLayout_5 = new QGridLayout(regSuccessPage);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 3, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_10, 0, 1, 1, 1);

        label_12 = new QLabel(regSuccessPage);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 1, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_9, 3, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 3, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        regUser_backButton_3 = new QPushButton(regSuccessPage);
        regUser_backButton_3->setObjectName(QStringLiteral("regUser_backButton_3"));
        regUser_backButton_3->setMinimumSize(QSize(0, 20));

        horizontalLayout_6->addWidget(regUser_backButton_3);

        regUser_exitButton = new QPushButton(regSuccessPage);
        regUser_exitButton->setObjectName(QStringLiteral("regUser_exitButton"));
        regUser_exitButton->setMinimumSize(QSize(0, 20));

        horizontalLayout_6->addWidget(regUser_exitButton);


        gridLayout_5->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        StartProgram->addWidget(regSuccessPage);
        regAccPage = new QWidget();
        regAccPage->setObjectName(QStringLiteral("regAccPage"));
        gridLayout_6 = new QGridLayout(regAccPage);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        newUserButton = new QPushButton(regAccPage);
        newUserButton->setObjectName(QStringLiteral("newUserButton"));
        newUserButton->setMinimumSize(QSize(80, 80));
        newUserButton->setMaximumSize(QSize(80, 80));

        gridLayout_6->addWidget(newUserButton, 0, 0, 1, 1);

        oldUserButton = new QPushButton(regAccPage);
        oldUserButton->setObjectName(QStringLiteral("oldUserButton"));
        oldUserButton->setMinimumSize(QSize(80, 80));
        oldUserButton->setMaximumSize(QSize(80, 80));

        gridLayout_6->addWidget(oldUserButton, 0, 1, 1, 1);

        StartProgram->addWidget(regAccPage);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_7 = new QGridLayout(page_2);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_11, 7, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 1, 2, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(-1, 0, -1, -1);
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_19->addWidget(label_14);

        regA_uidLine = new QLineEdit(page_2);
        regA_uidLine->setObjectName(QStringLiteral("regA_uidLine"));
        regA_uidLine->setMinimumSize(QSize(150, 0));
        regA_uidLine->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_19->addWidget(regA_uidLine);


        gridLayout_7->addLayout(horizontalLayout_19, 2, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_12, 0, 1, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_17->addWidget(label_13);

        regA_libLine = new QLineEdit(page_2);
        regA_libLine->setObjectName(QStringLiteral("regA_libLine"));
        regA_libLine->setMinimumSize(QSize(150, 0));
        regA_libLine->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_17->addWidget(regA_libLine);


        gridLayout_7->addLayout(horizontalLayout_17, 1, 1, 1, 1);

        regA_erLabel = new QLabel(page_2);
        regA_erLabel->setObjectName(QStringLiteral("regA_erLabel"));

        gridLayout_7->addWidget(regA_erLabel, 4, 1, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(-1, 0, -1, -1);
        regA_backButton = new QPushButton(page_2);
        regA_backButton->setObjectName(QStringLiteral("regA_backButton"));

        horizontalLayout_20->addWidget(regA_backButton);

        regA_confirmButton = new QPushButton(page_2);
        regA_confirmButton->setObjectName(QStringLiteral("regA_confirmButton"));

        horizontalLayout_20->addWidget(regA_confirmButton);


        gridLayout_7->addLayout(horizontalLayout_20, 5, 1, 1, 1);

        regA_erLabel2 = new QLabel(page_2);
        regA_erLabel2->setObjectName(QStringLiteral("regA_erLabel2"));

        gridLayout_7->addWidget(regA_erLabel2, 3, 1, 1, 1);

        StartProgram->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_8 = new QGridLayout(page);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_15 = new QLabel(page);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_21->addWidget(label_15);

        regA_usnLine = new QLineEdit(page);
        regA_usnLine->setObjectName(QStringLiteral("regA_usnLine"));
        regA_usnLine->setMinimumSize(QSize(150, 0));
        regA_usnLine->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_21->addWidget(regA_usnLine);


        gridLayout_8->addLayout(horizontalLayout_21, 1, 1, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_16 = new QLabel(page);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_22->addWidget(label_16);

        regA_pwLine = new QLineEdit(page);
        regA_pwLine->setObjectName(QStringLiteral("regA_pwLine"));
        regA_pwLine->setMinimumSize(QSize(150, 0));
        regA_pwLine->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_22->addWidget(regA_pwLine);


        gridLayout_8->addLayout(horizontalLayout_22, 2, 1, 1, 1);

        regA_errLabel = new QLabel(page);
        regA_errLabel->setObjectName(QStringLiteral("regA_errLabel"));

        gridLayout_8->addWidget(regA_errLabel, 4, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_14, 2, 2, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_17 = new QLabel(page);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_23->addWidget(label_17);

        regA_repwLine = new QLineEdit(page);
        regA_repwLine->setObjectName(QStringLiteral("regA_repwLine"));
        regA_repwLine->setMinimumSize(QSize(150, 0));
        regA_repwLine->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_23->addWidget(regA_repwLine);


        gridLayout_8->addLayout(horizontalLayout_23, 3, 1, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(-1, 0, -1, -1);
        regA_backButton_2 = new QPushButton(page);
        regA_backButton_2->setObjectName(QStringLiteral("regA_backButton_2"));

        horizontalLayout_24->addWidget(regA_backButton_2);

        regA_regButton = new QPushButton(page);
        regA_regButton->setObjectName(QStringLiteral("regA_regButton"));

        horizontalLayout_24->addWidget(regA_regButton);


        gridLayout_8->addLayout(horizontalLayout_24, 5, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_13, 2, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_13, 6, 1, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_14, 0, 1, 1, 1);

        StartProgram->addWidget(page);

        retranslateUi(StartProgram);
        QObject::connect(regUser_exitButton, SIGNAL(clicked()), StartProgram, SLOT(close()));

        StartProgram->setCurrentIndex(0);
        loginButton->setDefault(true);
        login_confirmButton->setDefault(true);


        QMetaObject::connectSlotsByName(StartProgram);
    } // setupUi

    void retranslateUi(QStackedWidget *StartProgram)
    {
        StartProgram->setWindowTitle(QApplication::translate("StartProgram", "\304\220\304\203ng nh\341\272\255p v\303\240o LIBPRO", Q_NULLPTR));
        label->setText(QApplication::translate("StartProgram", "T\303\240i kho\341\272\243n", Q_NULLPTR));
        label_2->setText(QApplication::translate("StartProgram", "M\341\272\255t kh\341\272\251u", Q_NULLPTR));
        loginNotif->setText(QString());
        loginButton->setText(QApplication::translate("StartProgram", "\304\220\304\203ng nh\341\272\255p", Q_NULLPTR));
        signupButton->setText(QApplication::translate("StartProgram", "\304\220\304\203ng k\303\255", Q_NULLPTR));
        resetProg->setText(QString());
        login_readerButton->setText(QApplication::translate("StartProgram", "\304\220\304\203ng nh\341\272\255p v\341\273\233i t\306\260 c\303\241ch \304\221\341\273\215c gi\341\272\243", Q_NULLPTR));
        login_librarianButton->setText(QApplication::translate("StartProgram", "\304\220\304\203ng nh\341\272\255p v\341\273\233i t\306\260 c\303\241ch th\341\273\247 th\306\260", Q_NULLPTR));
        login_usermanagerButton->setText(QApplication::translate("StartProgram", "\304\220\304\203ng nh\341\272\255p v\341\273\233i t\306\260 c\303\241ch qu\341\272\243n l\303\275 ng\306\260\341\273\235i d\303\271ng", Q_NULLPTR));
        login_backButton->setText(QApplication::translate("StartProgram", "Quay l\341\272\241i", Q_NULLPTR));
        login_confirmButton->setText(QApplication::translate("StartProgram", "X\303\241c nh\341\272\255n", Q_NULLPTR));
        xLabel->setText(QApplication::translate("StartProgram", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("StartProgram", "Ng\303\240y sinh", Q_NULLPTR));
        label_5->setText(QApplication::translate("StartProgram", "CMND", Q_NULLPTR));
        label_7->setText(QApplication::translate("StartProgram", "Ngh\341\273\201 nghi\341\273\207p", Q_NULLPTR));
        label_3->setText(QApplication::translate("StartProgram", "H\341\273\215 t\303\252n", Q_NULLPTR));
        label_8->setText(QApplication::translate("StartProgram", "Email", Q_NULLPTR));
        label_4->setText(QApplication::translate("StartProgram", "MSSV", Q_NULLPTR));
        regUser_PIDdupLabel->setText(QApplication::translate("StartProgram", "X", Q_NULLPTR));
        regUser_UIDdupLabel->setText(QApplication::translate("StartProgram", "X", Q_NULLPTR));
        regUser_maildupLabel->setText(QApplication::translate("StartProgram", "X", Q_NULLPTR));
        regUser_backButton->setText(QApplication::translate("StartProgram", "Quay l\341\272\241i", Q_NULLPTR));
        regUser_confirmButton_1->setText(QApplication::translate("StartProgram", "X\303\241c nh\341\272\255n", Q_NULLPTR));
        label_10->setText(QApplication::translate("StartProgram", "M\341\272\255t kh\341\272\251u", Q_NULLPTR));
        label_9->setText(QApplication::translate("StartProgram", "T\303\252n \304\221\304\203ng nh\341\272\255p", Q_NULLPTR));
        label_11->setText(QApplication::translate("StartProgram", "Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u", Q_NULLPTR));
        dupUSNLabel->setText(QApplication::translate("StartProgram", "X", Q_NULLPTR));
        dupPWLabel->setText(QApplication::translate("StartProgram", "X", Q_NULLPTR));
        regUser_backButton_2->setText(QApplication::translate("StartProgram", "Quay l\341\272\241i", Q_NULLPTR));
        regUser_regButton->setText(QApplication::translate("StartProgram", "\304\220\304\203ng k\303\255", Q_NULLPTR));
        label_12->setText(QApplication::translate("StartProgram", "\304\220\304\203ng k\303\255 th\303\240nh c\303\264ng\n"
"Vui l\303\262ng \304\221\341\273\243i qu\341\272\243n tr\341\273\213 vi\303\252n x\303\241c nh\341\272\255n", Q_NULLPTR));
        regUser_backButton_3->setText(QApplication::translate("StartProgram", "Quay l\341\272\241i", Q_NULLPTR));
        regUser_exitButton->setText(QApplication::translate("StartProgram", "Tho\303\241t", Q_NULLPTR));
        newUserButton->setText(QApplication::translate("StartProgram", "Ng\306\260\341\273\235i d\303\271ng\n"
" m\341\273\233i", Q_NULLPTR));
        oldUserButton->setText(QApplication::translate("StartProgram", "Ng\306\260\341\273\235i d\303\271ng\n"
" c\305\251", Q_NULLPTR));
        label_14->setText(QApplication::translate("StartProgram", "MSSV/MSGV", Q_NULLPTR));
        label_13->setText(QApplication::translate("StartProgram", "M\303\243 s\341\273\221 th\306\260 vi\341\273\207n", Q_NULLPTR));
        regA_erLabel->setText(QApplication::translate("StartProgram", "Th\303\264ng tin kh\303\264ng h\341\273\243p l\341\273\207", Q_NULLPTR));
        regA_backButton->setText(QApplication::translate("StartProgram", "Quay l\341\272\241i", Q_NULLPTR));
        regA_confirmButton->setText(QApplication::translate("StartProgram", "X\303\241c nh\341\272\255n", Q_NULLPTR));
        regA_erLabel2->setText(QApplication::translate("StartProgram", "Kh\303\264ng th\341\273\203 th\303\252m t\303\240i kho\341\272\243n", Q_NULLPTR));
        label_15->setText(QApplication::translate("StartProgram", "T\303\252n \304\221\304\203ng nh\341\272\255p", Q_NULLPTR));
        label_16->setText(QApplication::translate("StartProgram", "M\341\272\255t kh\341\272\251u", Q_NULLPTR));
        regA_errLabel->setText(QApplication::translate("StartProgram", "T\303\252n \304\221\304\203ng nh\341\272\255p \304\221\303\243 t\341\273\223n t\341\272\241i", Q_NULLPTR));
        label_17->setText(QApplication::translate("StartProgram", "Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u", Q_NULLPTR));
        regA_backButton_2->setText(QApplication::translate("StartProgram", "Quay l\341\272\241i", Q_NULLPTR));
        regA_regButton->setText(QApplication::translate("StartProgram", "\304\220\304\203ng k\303\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StartProgram: public Ui_StartProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPROGRAM_H
