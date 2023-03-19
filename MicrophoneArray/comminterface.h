#ifndef COMMINTERFACE_H
#define COMMINTERFACE_H

#include <QObject>

enum class CommunicationType{
    RS232,
    Ethernet,
    USB
};

class CommInterface : public QObject
{
    Q_OBJECT
public:
    explicit CommInterface();

signals:

};

#endif // COMMINTERFACE_H
