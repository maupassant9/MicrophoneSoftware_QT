#include "microphoneboard.h"

MicrophoneBoard::MicrophoneBoard(
        bool isBurstModeSupport,
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
        uint16_t maxDownsamplingRate) noexcept:
    isBurstModeSupport {isBurstModeSupport},
    maxChannelNumber {maxChannelNumber},
    isTransmitViaCommSupport {isTransmitViaCommSupport},
    hasSDCard {hasSDCard},
    supportedSamplingFreqs {pSupportedSamplingFreqs},
    supportedDownsamplingRate {pSupportedDownsamplingRate},
    supportedCommunicationType {pSupportedCommunicationType},
    boardFwVersion {boardFwVersion},
    boardHwVersion {boardHwVersion},
    boardIp {boardIp},
    maxDownsamplingRate {maxDownsamplingRate},
    maxSamplingFreq {maxSamplingFreq},
    samplingFreqStep {samplingFreqStep},
    instance {nullptr}
{

}


bool MicrophoneBoard::verifyVersionString(QString v)
{

}
std::shared_ptr<MicrophoneBoard> MicrophoneBoard::getInstance()
{

}
void MicrophoneBoard::setBoardDateTime(QDateTime dt)
{

}
QDateTime MicrophoneBoard::getBoardDateTime(void)
{

}
QString MicrophoneBoard::getFWVersion()
{

}
QString MicrophoneBoard::getHWVersion()
{

}
QString MicrophoneBoard::getBoardIp()
{

}
