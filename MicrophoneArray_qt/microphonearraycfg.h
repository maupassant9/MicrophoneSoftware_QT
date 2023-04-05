#ifndef MICROPHONEARRAYCFG_H
#define MICROPHONEARRAYCFG_H


#include "aquisitioncfg.h"
#include "microphoneboard.h"

class MicrophoneArrayCfg
{
public:
    MicrophoneArrayCfg();

private:
    AquisitionCfg aquisitionSetting;
    std::unique_ptr<MicrophoneBoard> pboardSetting;
};

#endif // MICROPHONEARRAYCFG_H
