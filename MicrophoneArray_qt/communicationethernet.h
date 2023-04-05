#ifndef COMMUNICATIONETHERNET_H
#define COMMUNICATIONETHERNET_H

#include <QObject>
#include "comminterface.h"

class CommunicationEthernet : public CommInterface
{
    Q_OBJECT
private:
    explicit CommunicationEthernet();

signals:

};

#endif // COMMUNICATIONETHERNET_H
