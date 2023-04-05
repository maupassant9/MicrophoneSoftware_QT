#ifndef COMMUNICATIONSERIAL_H
#define COMMUNICATIONSERIAL_H

#include <QObject>
#include "comminterface.h"

class CommunicationSerial : public CommInterface
{
    Q_OBJECT
private:
    explicit CommunicationSerial();

signals:

};

#endif // COMMUNICATIONSERIAL_H
