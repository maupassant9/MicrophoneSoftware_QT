#ifndef MICROPHONEARRAYCFG_H
#define MICROPHONEARRAYCFG_H
#include "aquisition.h"
#include "microphoneboard.h"

class MicrophoneArrayCfg
{
public:
    MicrophoneArrayCfg();

private:
    AquisitionCfg aquisitionSetting;
    MicrophoneBoard * pBoardSetting;
};

#endif // MICROPHONEARRAYCFG_H
