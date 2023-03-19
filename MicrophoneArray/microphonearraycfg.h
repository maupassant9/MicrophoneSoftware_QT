#ifndef MICROPHONEARRAYCFG_H
#define MICROPHONEARRAYCFG_H
#include "aquisition.h"
#include "microphoneboard.h"

class MicrophoneArrayCfg
{
public:
    MicrophoneArrayCfg(MicrophoneBoard *p);

private:
    AquisitionCfg aquisitionSetting;
    MicrophoneBoard * pBoardSetting;
};

#endif // MICROPHONEARRAYCFG_H
