/**
 *  @file      microphonearraycfg.cpp
 *  @brief     Class for microphone arrary software configurations.
 *  @details   All the configuration configured in gui is syncronized into
 *             this class, and all part of the software use this class
 *             to operate and behave accordingly.
 *  @author    Dong Xia
 *  @version   0.1
 *  @date      08/03/2023
 *  @note
 *  @todo
 */


#include "microphonearraycfg.h"

MicrophoneArrayCfg::MicrophoneArrayCfg(MicrophoneBoard &board):
    boardSetting {board},
    aquisitionSetting {AquisitionCfg(*pboard)}
{

}
