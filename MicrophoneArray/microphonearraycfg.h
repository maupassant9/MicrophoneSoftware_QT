#ifndef MICROPHONEARRAYCFG_H
#define MICROPHONEARRAYCFG_H
#include "aquisition.h"
#include "microphoneboard.h"

class MicrophoneArrayCfg
{
public:
    MicrophoneArrayCfg();

private:
    Aquisition aquisitionSetting;
    MicrophoneBoard * pBoardSetting;
};

#endif // MICROPHONEARRAYCFG_H
