#ifndef MICROPHONEBOARD_H
#define MICROPHONEBOARD_H
#include <QDateTime>
#include <memory>

class MicrophoneBoard
{
public:
    enum class CommunicationType{
            RS232,
            Ethernet,
            USB
        };
    MicrophoneBoard(bool isBurstModeSupport,
                    bool hasSDCard,
                    bool isTransmitViaCommSupport,
                    uint8_t maxChannelNumber,
                    std::unique_ptr<QList<int>> pSupportedSamplingFreqs,
                    std::unique_ptr<QList<int>> pSupportedDownsamplingRate,
                    std::unique_ptr<QList<CommunicationType>> pSupportedCommunicationType,
                    QString boardFwVersion,
                    QString boardHwVersion,
                    QString boardIp,
                    uint16_t maxSamplingFreq,
                    uint16_t samplingFreqStep,
                    uint16_t maxDownsamplingRate) noexcept;
    //delete the copy constructor!! It is a singleton class
    MicrophoneBoard(MicrophoneBoard & a) = delete;


    const bool isBurstModeSupport;
    const uint8_t maxChannelNumber;
    const bool hasSDCard;
    const bool isTransmitViaCommSupport;
    const std::unique_ptr<QList<int>> pSupportedSamplingFreqs;
    const std::unique_ptr<QList<int>> pSupportedDownsamplingRate;
    const std::unique_ptr<QList<CommunicationType>> pSupportedCommunicationType;
    const uint16_t maxSamplingFreq;
    const uint16_t samplingFreqStep;
    const uint16_t maxDownsamplingRate;
    const QString boardFwVersion;
    const QString boardHwVersion;
    const QString boardIp;


    void setBoardDateTime(QDateTime dt);
    QDateTime getBoardDateTime(void);
    static bool verifyVersionString(QString v);

private:
    QDateTime boardDateTime;

};

#endif // MICROPHONEBOARD_H
