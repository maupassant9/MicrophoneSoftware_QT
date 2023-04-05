#include "aquisitioncfg.h"
#include <memory>

AquisitionCfg::AquisitionCfg(const MicrophoneBoard &board) noexcept:
    samplingFreq {0},
    downSamplingRate {0},
    isBurstMode {false},
    aquistionPeriod {0},
    isSDCardEnable {false},
    isTransmitViaCommEnable {false},
    filepath {""},
    maxChannelNo {0}
{
//  if (board.maxChannelNumber == 0) {
//    pChannelEnable = nullptr;
//    pChannelDisplayEnable = nullptr;
//  } else {
//    pChannelEnable = new bool[board.maxChannelNumber];
//    pChannelDisplayEnable = new bool[board.maxChannelNumber];
//  }
}


AquisitionCfg::~AquisitionCfg()
{
    if(pChannelEnable) delete pChannelEnable;
    if(pChannelDisplayEnable) delete pChannelDisplayEnable;
}

AquisitionCfg::AquisitionCfg(const AquisitionCfg& a) noexcept:
    maxChannelNo {a.maxChannelNo},
    pChannelEnable {a.pChannelEnable},
    pChannelDisplayEnable {a.pChannelDisplayEnable},
    samplingFreq {a.samplingFreq},
    downSamplingRate {a.downSamplingRate},
    isBurstMode {a.isBurstMode},
    aquistionPeriod {a.aquistionPeriod},
    isSDCardEnable {a.isSDCardEnable},
    isTransmitViaCommEnable {a.isTransmitViaCommEnable},
    filepath {a.filepath}
{
    if(a.pChannelEnable){
        pChannelEnable = new bool[a.maxChannelNo];
        std::memcpy(pChannelEnable, a.pChannelEnable, a.maxChannelNo);
    }
    if(a.pChannelDisplayEnable){
        pChannelDisplayEnable = new bool[a.maxChannelNo];
        std::memcpy(pChannelDisplayEnable,a.pChannelDisplayEnable,a.maxChannelNo);
    }
}

AquisitionCfg::AquisitionCfg(AquisitionCfg&& a) noexcept:
    maxChannelNo {a.maxChannelNo},
    pChannelEnable {a.pChannelEnable},
    pChannelDisplayEnable {a.pChannelDisplayEnable},
    samplingFreq {a.samplingFreq},
    downSamplingRate {a.downSamplingRate},
    isBurstMode {a.isBurstMode},
    aquistionPeriod {a.aquistionPeriod},
    isSDCardEnable {a.isSDCardEnable},
    isTransmitViaCommEnable {a.isTransmitViaCommEnable},
    filepath {a.filepath}
{
    a.pChannelEnable = nullptr;
    a.pChannelDisplayEnable = nullptr;
}


bool AquisitionCfg::isChannelEnable(uint16_t id)
{
    if(id < maxChannelNo) return pChannelEnable[id];
    else return false;
}


bool AquisitionCfg::isChannelDisplayEnable(uint16_t id)
{
    if(id < maxChannelNo) return pChannelDisplayEnable[id];
    else return false;
}

void AquisitionCfg::setChannelEnable(uint16_t id, bool e)
{
    if(id < maxChannelNo) pChannelEnable[id] = e;
}


void AquisitionCfg::setChannelDisplayEnable(uint16_t id, bool e)
{
    if(id < maxChannelNo) pChannelDisplayEnable[id] = e;
}


void setSamplingFreq(uint32_t sampF)
{

}
bool setDownsampling(uint8_t rate)
{

}
void setBusrtMode(bool e)
{

}
void setAquisitionPeriod(uint16_t p)
{

}
void setSDCardEnable(bool e)
{

}
void setTransmitEnable(bool e)
{

}
void setFilePath(QString f)
{

}
