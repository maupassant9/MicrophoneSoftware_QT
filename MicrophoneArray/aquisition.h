#ifndef AQUISITION_H
#define AQUISITION_H

#include <QObject>
#include <fstream>
#include "commwarnable.h"
#include "microphonearraycfg.h"
#include <memory>

enum class CommandID{
    COMMAND_START_AQUISITION = 0x1,
    COMMAND_STOP_AQUISITION,
    COMMAND_SET_SAMPLINGFREQ,
    COMMAND_QUERY_SAMPLINGFREQ
};


class Aquisition:public CommWarnable
{
public:
    Aquisition();
    void sendCommand(CommandID cmd);
    void start();
    void stop();
    void save2file(std::ofstream f);
private:
    std::unique_ptr<MicrophoneArrayCfg> pconfig;
};

#endif // AQUISITION_H
