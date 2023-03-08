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
                    int maxChannelNumber,
                    std::unique_ptr<QList<int>> pSupportedSamplingFreqs,
                    std::unique_ptr<QList<int>> pSupportedDownsamplingRate,
                    std::unique_ptr<QList<CommunicationType>> pSupportedCommunicationType,
                    QString boardFwVersion,
                    QString boardHwVersion,
                    QString boardIp);


    const bool isBurstModeSupport;
    const int maxChannelNumber;
    const bool hasSDCard;
    const bool isTransmitViaCommSupport;
    const std::unique_ptr<QList<int>> pSupportedSamplingFreqs;
    const std::unique_ptr<QList<int>> pSupportedDownsamplingRate;
    const std::unique_ptr<QList<CommunicationType>> pSupportedCommunicationType;
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
