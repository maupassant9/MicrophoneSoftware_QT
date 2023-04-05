#ifndef COMMINTERFACE_H
#define COMMINTERFACE_H

#include <QObject>
#include <memory>
#include <QMutex>
#include <QList>
#include <QThread>



class CommInterface : public QThread
{
    Q_OBJECT
public:
    enum class CommunicationType{
        RS232,
        Ethernet,
        USB
    };

    std::shared_ptr<CommInterface> getInstance();
    virtual void send(QList<int> datas);
    void run() override;

private:
    std::shared_ptr<CommInterface> instance;

    QList<char> read_buffer_raw;

    CommInterface();
    //delete the copy constructor!! It is a singleton class
    CommInterface(CommInterface & a) = delete;
    virtual void interpret();

};

#endif // COMMINTERFACE_H
