#include<QtGui>

#include"QDialog.h"

int main(int argc, char *argv[])
{
    //解决中文乱码问题
    QTextCodec *codec = QTextCodec::codecForName("system");

    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);

    
    QApplication app(argc, argv);
    
    QQ_QDialog *q_dialog = new QQ_QDialog();
    q_dialog->show();

    return app.exec();
}
