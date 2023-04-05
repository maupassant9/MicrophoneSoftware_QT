#ifndef AQUISITION_H
#define AQUISITION_H

#include <QObject>
#include <fstream>
#include <memory>
#include "data.h"

enum class CommandID{
    COMMAND_START_AQUISITION = 0x1,
    COMMAND_STOP_AQUISITION,
    COMMAND_SET_SAMPLINGFREQ,
    COMMAND_QUERY_SAMPLINGFREQ
};


class Aquisition
{
public:
    Aquisition(std::weak_ptr<Data> p);
    void sendCommand(CommandID cmd, long parameters);
    void start();
    void stop();
    void save2file(std::ofstream f);
};

#endif // AQUISITION_H
