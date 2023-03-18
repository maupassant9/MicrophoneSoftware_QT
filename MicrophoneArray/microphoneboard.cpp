#include "microphoneboard.h"

MicrophoneBoard::MicrophoneBoard(
        bool isBurstModeSupport,
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
        uint16_t maxDownsamplingRate) noexcept:
    isBurstModeSupport {isBurstModeSupport},
    maxChannelNumber {maxChannelNumber},
    isTransmitViaCommSupport {isTransmitViaCommSupport},
    hasSDCard {hasSDCard},
    pSupportedSamplingFreqs {std::move(pSupportedSamplingFreqs)},
    pSupportedDownsamplingRate {std::move(pSupportedDownsamplingRate)},
    pSupportedCommunicationType {std::move(pSupportedCommunicationType)},
    boardFwVersion {boardFwVersion},
    boardHwVersion {boardHwVersion},
    boardIp {boardIp},
    maxDownsamplingRate {maxDownsamplingRate},
    maxSamplingFreq {maxSamplingFreq},
    samplingFreqStep {samplingFreqStep}
{

}
