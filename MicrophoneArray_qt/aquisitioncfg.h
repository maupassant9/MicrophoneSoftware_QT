#ifndef AQUISITION_H
#define AQUISITION_H

#include <QFileInfo>
#include "microphoneboard.h"


class AquisitionCfg
{
public:
    AquisitionCfg() noexcept;
    //AquisitionCfg() noexcept;
    ~AquisitionCfg();
    AquisitionCfg(AquisitionCfg && a) noexcept;
    AquisitionCfg(const AquisitionCfg & a) noexcept;

    // channel configurations
    bool isChannelEnable(uint16_t id);
    bool isChannelDisplayEnable(uint16_t id);
    void setChannelEnable(uint16_t id, bool e);
    void setChannelDisplayEnable(uint16_t id, bool e);

    //aquisition configurations
    void setSamplingFreq(uint32_t sampF);
    bool setDownsampling(uint8_t rate);
    void setBusrtMode(bool e);
    void setAquisitionPeriod(uint16_t p);
    void setSDCardEnable(bool e);
    void setTransmitEnable(bool e);
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
