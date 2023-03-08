#ifndef MICROPHONEARRAYWINDOW_H
#define MICROPHONEARRAYWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MicrophoneArrayWindow; }
QT_END_NAMESPACE

class MicrophoneArrayWindow : public QMainWindow
{
    Q_OBJECT

public:
    MicrophoneArrayWindow(QWidget *parent = nullptr);
    ~MicrophoneArrayWindow();




private:
    Ui::MicrophoneArrayWindow *ui;
};
#endif // MICROPHONEARRAYWINDOW_H
