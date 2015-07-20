#include <QtGui/QApplication>
#include <QTextCodec>   //添加中文支持2-1

#include "client.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());//添加中文支持2-2

//    Widget w;
//    w.show();
    client w1;
    w1.show();

    return a.exec();
}
