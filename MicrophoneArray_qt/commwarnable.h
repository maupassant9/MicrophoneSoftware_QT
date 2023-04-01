#ifndef COMMWARNABLE_H
#define COMMWARNABLE_H

#include <QObject>
#include <QSemaphore>

class CommWarnable : public QObject
{
    Q_OBJECT
public:
    explicit CommWarnable();
    bool hasData();
    void addData(QList<int> datas);

private:
    QSemaphore semaFlag;


};

#endif // COMMWARNABLE_H
