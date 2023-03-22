#ifndef MICROPHONEARRAYCFG_H
#define MICROPHONEARRAYCFG_H


#include "aquisitioncfg.h"
#include "microphoneboard.h"

class MicrophoneArrayCfg
{
public:
    MicrophoneArrayCfg(MicrophoneBoard &board);

private:
    AquisitionCfg aquisitionSetting;
    MicrophoneBoard BoardSetting;
};

#endif // MICROPHONEARRAYCFG_H
