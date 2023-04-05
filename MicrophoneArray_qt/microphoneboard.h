#ifndef MICROPHONEBOARD_H
#define MICROPHONEBOARD_H
#include <QDateTime>
#include <memory>
#include "comminterface.h"

class MicrophoneBoard
{
public:
    static bool verifyVersionString(QString v);
    static std::shared_ptr<MicrophoneBoard> getInstance();
    void setBoardDateTime(QDateTime dt);
    QDateTime getBoardDateTime(void);
    QString getFWVersion();
    QString getHWVersion();
    QString getBoardIp();

private:
    MicrophoneBoard(bool isBurstModeSupport,
                    bool hasSDCard,
                    bool isTransmitViaCommSupport,
                    uint8_t maxChannelNumber,
                    const QList<int>& pSupportedSamplingFreqs,
                    const QList<int>& pSupportedDownsamplingRate,
                    const QList<CommInterface::CommunicationType>& pSupportedCommunicationType,
                    QString boardFwVersion,
                    QString boardHwVersion,
                    QString boardIp,
                    uint16_t maxSamplingFreq,
                    uint16_t samplingFreqStep,
                    uint16_t maxDownsamplingRate) noexcept;
    //delete the copy constructor!! It is a singleton class
    MicrophoneBoard(MicrophoneBoard & a) = delete;
    ~MicrophoneBoard() = default;


    const bool isBurstModeSupport;
    const uint8_t maxChannelNumber;
    const bool hasSDCard;
    const bool isTransmitViaCommSupport;
    const QList<int> supportedSamplingFreqs;
    const QList<int> supportedDownsamplingRate;
    const QList<CommInterface::CommunicationType> supportedCommunicationType;
    const uint16_t maxSamplingFreq;
    const uint16_t samplingFreqStep;
    const uint16_t maxDownsamplingRate;
    const QString boardFwVersion;
    const QString boardHwVersion;
    const QString boardIp;

    std::shared_ptr<MicrophoneBoard> instance;
    QDateTime boardDateTime;


};

#endif // MICROPHONEBOARD_H
