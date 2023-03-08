#include "microphoneboard.h"

MicrophoneBoard::MicrophoneBoard(
        bool isBurstModeSupport,
        bool hasSDCard,
        bool isTransmitViaCommSupport,
        int maxChannelNumber,
        std::unique_ptr<QList<int>> pSupportedSamplingFreqs,
        std::unique_ptr<QList<int>> pSupportedDownsamplingRate,
        std::unique_ptr<QList<CommunicationType>> pSupportedCommunicationType,
        QString boardFwVersion,
        QString boardHwVersion,
        QString boardIp):
    isBurstModeSupport {isBurstModeSupport},
    maxChannelNumber {maxChannelNumber},
    isTransmitViaCommSupport {isTransmitViaCommSupport},
    hasSDCard {hasSDCard},
    pSupportedSamplingFreqs {std::move(pSupportedSamplingFreqs)},
    pSupportedDownsamplingRate {std::move(pSupportedDownsamplingRate)},
    pSupportedCommunicationType {std::move(pSupportedCommunicationType)},
    boardFwVersion {boardFwVersion},
    boardHwVersion {boardHwVersion},
    boardIp {boardIp}
{

}
