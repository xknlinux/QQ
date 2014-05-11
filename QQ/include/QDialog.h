#ifndef QDIALOG_
#define QDIALOG_

#include<QtGui>

class QQ_QDialog : public QDialog
{
    Q_OBJECT

    public:
        QQ_QDialog();

    private:
        void CreateWidget();
        void Setup_Layout();

         QLabel *wel_label;
         QLabel *account_label;
         QLabel *Picture_Label;
         QLabel *key_label;

         QLineEdit *account_line;
         QLineEdit *key_line;

         QPushButton *land_Button;
         QPushButton *quit_Button;
         QPushButton *register_Button;

         //QPixmap *Main_Pixmap;
};


#endif
