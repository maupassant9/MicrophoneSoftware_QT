/**
 * @file      data.h
 * @brief     Data class for saving received and sent data
 * @author    Dong Xia
 * @version   0.1
 * @date      05/04/2023
 * @warning   Improper use can crash your application
 * @copyright GNU Public License.
 */

#ifndef DATA_H
#define DATA_H

#include <QMutex>
#include <QList>
#include <memory>

class Data
{
public:
/**
 * @name Constructors/destructor
 * @{
 */

/**
 * @brief  Base constructor.
 * @par
 *  None.
 */
    explicit Data();

/**
 * @brief  Base destructor.
 */

/**
 * @}
 */
    bool hasData();

    /** @brief Add the data to the read buffer, called by user of this class */
    void addData(std::unique_ptr<QList<char>> pdata);
    /** @brief get send data from write buffer, called by user of this class */
    std::unique_ptr<QList<char>> getData();
    /** @brief push the data to write buffer, called by aquisiton class */
    void pushData(std::unique_ptr<QList<char>> pdata);
    /** @brief pop the data from read buffer, called by aquisiton class */
    std::unique_ptr<QList<char>> popData();

private:
    /** @brief read mutex lock for read_buffer */
    QMutex read_lock;
    /** @brief write mutex lock for write_buffer */
    QMutex write_lock;

    /** @brief read_buffer for saving datas and commands */
    /** @details the first element in each inner QList<char>
     *  is the :
     *  # channel ID (start from 1): if it is channel
     *  microphone data or
     *  # -1: if it is not an avaliable data or
     *  # 0 if it is a command.
     */
    QList<QList<char>> read_buffer;
    /** @brief write buffer for saving the sent commands */
    QList<QList<char>> write_buffer;

    /** @brief set if there is some data in read_buffer */
    bool flagHasData2Read;
    /** @brief set if there is some data in write_buffer */
    bool flagHasData2Write;


};

#endif // DATA_H
