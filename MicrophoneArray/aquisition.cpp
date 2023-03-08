#include "aquisition.h"

Aquisition::Aquisition():
    pChannelEnable {nullptr},
    pChannelDisplayEnable {nullptr},
    samplingFreq {0},
    downSamplingRate {0},
    isBurstMode {false},
    aquistionPeriod {0},
    isSDCardEnable {false},
    isTransmitViaCommEnable {false},
    filepath {""},
    startAquiFlag {false},
    stopAquiFlag {false}
{

}
