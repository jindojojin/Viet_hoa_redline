#include <QtGui/QApplication>
#include "blackline.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BlackLine w;
    w.show();

    return a.exec();
}
