#include "microphonearraywindow.h"
#include "./ui_microphonearraywindow.h"

MicrophoneArrayWindow::MicrophoneArrayWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MicrophoneArrayWindow)
{
    ui->setupUi(this);
}

MicrophoneArrayWindow::~MicrophoneArrayWindow()
{
    delete ui;
}

