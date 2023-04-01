#ifndef COMMUNICATIONETHERNET_H
#define COMMUNICATIONETHERNET_H

#include <QObject>
#include "comminterface.h"

class CommunicationEthernet : public CommInterface
{
    Q_OBJECT
public:
    explicit CommunicationEthernet();

signals:

};

#endif // COMMUNICATIONETHERNET_H
