#include "aquisition.h"
#include <memory>

AquisitionCfg::AquisitionCfg(uint16_t channelNo) noexcept:
    samplingFreq {0},
    downSamplingRate {0},
    isBurstMode {false},
    aquistionPeriod {0},
    isSDCardEnable {false},
    isTransmitViaCommEnable {false},
    filepath {""},
    maxChannelNo {0}
{
    if(channelNo == 0){
        pChannelEnable = nullptr;
        pChannelDisplayEnable = nullptr;
    } else {
        pChannelEnable = new bool[channelNo];
        pChannelDisplayEnable = new bool[channelNo];
    }
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


bool AquisitionCfg::isChannelEnable(uint16_t id) noexcept
{
    if(id < maxChannelNo) return pChannelEnable[id];
    else return false;
}


bool AquisitionCfg::isChannelDisplayEnable(uint16_t id) noexcept
{
    if(id < maxChannelNo) return pChannelDisplayEnable[id];
    else return false;
}

void AquisitionCfg::setChannelEnable(uint16_t id, bool e) noexcept
{
    if(id < maxChannelNo) pChannelEnable[id] = e;
}


void AquisitionCfg::setChannelDisplayEnable(uint16_t id, bool e) noexcept
{
    if(id < maxChannelNo) pChannelDisplayEnable[id] = e;
}


void setSamplingFreq(uint32_t sampF) noexcept
{
    if(sampF <= )
}
bool setDownsampling(uint8_t rate) noexcept
{

}
void setBusrtMode(bool e) noexcept
{

}
void setAquisitionPeriod(uint16_t p) noexcept
{

}
void setSDCardEnable(bool e) noexcept
{

}
void setTransmitEnable(bool e) noexcept
{

}
void setFilePath(QString f)
{

}
