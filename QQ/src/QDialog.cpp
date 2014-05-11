#include<QtGui>

#include"QDialog.h"


QQ_QDialog::QQ_QDialog()
{
    CreateWidget();
    Setup_Layout();

    this -> setFixedSize(500,200);
}


void QQ_QDialog::CreateWidget()
{
    wel_label = new QLabel(tr("<h3><i><font color = green>欢迎使用聊天工具</i></h3>"));
    
    account_label = new QLabel(tr("帐号"));
    account_line = new QLineEdit;

    key_label = new QLabel(tr("密码"));
    key_line = new QLineEdit;

    land_Button = new QPushButton(tr("登陆"));

    quit_Button = new QPushButton(tr("退出"));
    connect(quit_Button, SIGNAL(clicked()), this, SLOT(close()));

    register_Button = new QPushButton(tr("注册"));

    Picture_Label = new QLabel();
    QMovie *movie = new QMovie(":/images/main.GIF");
    Picture_Label->setMovie(movie);
    movie->start();
}

void QQ_QDialog::Setup_Layout()
{
    QHBoxLayout *TopLayout = new QHBoxLayout;
    TopLayout->addWidget(wel_label);

    QHBoxLayout *MiddleLayout_a = new QHBoxLayout;
    MiddleLayout_a->addWidget(account_label);
    MiddleLayout_a->addWidget(account_line);


    QHBoxLayout *MiddleLayout_k = new QHBoxLayout;
    MiddleLayout_k->addWidget(key_label);
    MiddleLayout_k->addWidget(key_line);

    QVBoxLayout *LeftLayout = new QVBoxLayout;
    LeftLayout->addLayout(TopLayout);
    LeftLayout->addLayout(MiddleLayout_a);
    LeftLayout->addLayout(MiddleLayout_k);

    QHBoxLayout *AppLayout = new QHBoxLayout;
    AppLayout->addLayout(LeftLayout);
    AppLayout->addWidget(Picture_Label);

    QHBoxLayout *BottomLayout = new QHBoxLayout;
    BottomLayout->addWidget(land_Button);
    BottomLayout->addWidget(quit_Button);
    BottomLayout->addWidget(register_Button);

    QVBoxLayout *MainLayout = new QVBoxLayout;
    MainLayout->addLayout(AppLayout);
    MainLayout->addLayout(BottomLayout);

    setLayout(MainLayout);
}
