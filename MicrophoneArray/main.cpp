#include "microphonearraywindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MicrophoneArrayWindow w;
    w.show();
    return a.exec();
}
