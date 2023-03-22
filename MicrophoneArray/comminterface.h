#ifndef COMMINTERFACE_H
#define COMMINTERFACE_H

#include <QObject>
#include <memory>
#include <QMutex>
#include <QList>
#include "commwarnable.h"

enum class CommunicationType{
    RS232,
    Ethernet,
    USB
};

class CommInterface : public QObject
{
    Q_OBJECT
public:
    std::shared_ptr<CommInterface> getInstance();
    virtual void send(QList<int> datas);
    virtual QList<int> getMicrophoneDatas(uint8_t channel);
    void connect(CommWarnable o);
    void disconnect(CommWarnable o);
    void disconnectAll();


private:
    std::shared_ptr<CommInterface> instance;

    QMutex read_lock;
    QMutex write_lock;
    QList<QList<int>> read_buffer;
    QList<char> read_buffer_raw;
    QList<QList<char>> write_buffer;
    QList<CommWarnable> warnable_list;

    CommInterface();
    virtual void interpret();
    void warnNewData(uint8_t channel);

};

#endif // COMMINTERFACE_H
