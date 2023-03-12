#ifndef AQUISITION_H
#define AQUISITION_H

#include <QFileInfo>
#include "microphoneboard.h"

class AquisitionCfg
{
public:
    AquisitionCfg(const MicrophoneBoard * b) noexcept;
    ~AquisitionCfg();
    AquisitionCfg(AquisitionCfg && a) noexcept;
    AquisitionCfg(const AquisitionCfg & a) noexcept;

    // channel configurations
    bool isChannelEnable(uint16_t id) noexcept;
    bool isChannelDisplayEnable(uint16_t id) noexcept;
    void setChannelEnable(uint16_t id, bool e) noexcept;
    void setChannelDisplayEnable(uint16_t id, bool e) noexcept;

    //aquisition configurations
    void setSamplingFreq(uint32_t sampF) noexcept;
    bool setDownsampling(uint8_t rate) noexcept;
    void setBusrtMode(bool e) noexcept;
    void setAquisitionPeriod(uint16_t p) noexcept;
    void setSDCardEnable(bool e) noexcept;
    void setTransmitEnable(bool e) noexcept;
    void setFilePath(QString f);
private:
    uint32_t samplingFreq;
    uint8_t downSamplingRate;
    bool isBurstMode;
    uint16_t aquistionPeriod;
    bool isSDCardEnable;
    bool isTransmitViaCommEnable;

    bool * pChannelEnable;
    bool * pChannelDisplayEnable;

    QString filepath;
    const uint8_t maxChannelNo;

};

#endif // AQUISITION_H
