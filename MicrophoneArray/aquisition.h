#ifndef AQUISITION_H
#define AQUISITION_H

#include <QFileInfo>
class Aquisition
{
public:
    Aquisition();
    bool isChannelEnable(int id);
    bool isChannelDisplayEnable(int id);
    void setChannelEnable(int id, bool e);
    void setChannelDisplayEnable(int id, bool e);

private:
    int samplingFreq;
    int downSamplingRate;
    bool isBurstMode;
    int aquistionPeriod;
    bool isSDCardEnable;
    bool isTransmitViaCommEnable;

    bool * pChannelEnable;
    bool * pChannelDisplayEnable;

    QString filepath;

    bool startAquiFlag;
    bool stopAquiFlag;

};

#endif // AQUISITION_H
