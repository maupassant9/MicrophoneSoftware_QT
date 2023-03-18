#ifndef MICROPHONEARRAYWINDOW_H
#define MICROPHONEARRAYWINDOW_H

#include <QMainWindow>
#include "aquisition.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MicrophoneArrayWindow; }
QT_END_NAMESPACE

class MicrophoneArrayWindow : public QMainWindow
{
    Q_OBJECT

public:
    MicrophoneArrayWindow(QWidget *parent = nullptr);
    ~MicrophoneArrayWindow();

signals:
    void aquisitionStart(AquisitionCfg a);

private:
    Ui::MicrophoneArrayWindow *ui;
};
#endif // MICROPHONEARRAYWINDOW_H
