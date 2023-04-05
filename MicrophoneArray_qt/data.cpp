/**
 *  @file      data.cpp
 *  @brief     Data class shared by CommInterface class and Aquisiton class.
 *  @details   Data class used to store the data received by communication
 *             interface and data to be sent by aquisition. Both the
 *             communication interface and the aquisition uses this class.
 *  @author    Dong Xia
 *  @version   0.1
 *  @date      05/04/2023
 *  @warning   Improper use can crash your application
 *  @copyright GNU Public License.
 *  @note
 *  @todo
 */

#include "data.h"
/**
 * @details
 * Constructor to initialize all the variables.
 * @par Parameters
 *	None.
 *
 * @todo
 *
 */
Data::Data() :
    read_lock {},
    write_lock {},
    read_buffer {},
    write_buffer {},
    flagHasData2Read {false},
    flagHasData2Write {false}
{

}


/**
 * @details
 * Add data from Communication interface into the
 * read_buffer. The serialized data from interface
 * is seperate by protocol, as such each element
 * in read_buffer is one protocol data.
 * After at least one protocol data is present in read_buffer
 * the flagHasData2Read is set.
 *
 * @param ls List for data received by communication interface
 * @return
 *  None.
 *
 * @todo
 *
 */
void Data::addData(std::unique_ptr<QList<char>> pdata)
{

}


/**
 * @details
 * Get the data from this class from write_buffer,
 * called by communication interface. flagHasData2Write
 * is clear if all the data is fetched.
 * @par Parameters
 *	None.
 * @retval nullptr if no avaliable data
 * @retval unique_ptr<QList<char>> that point to data
 *
 * @todo
 *
 */
std::unique_ptr<QList<char>> Data::getData()
{

    return nullptr;
}


/**
 * @details
 * Push the data into write_buffer, called by Aquistion.
 * The data pushed is command or data that need to sent
 * to the microphone board.T he head and tail of the
 * protocol data is removed and added into write buffer.
 * flagHasData2Write is set when call this function.
 * @param unique_ptr<QList<char>> that point to serialized data
 * @return
 *  None.
 *
 * @todo
 *
 */
void Data::pushData(std::unique_ptr<QList<char>> pdata)
{
    flagHasData2Write = true;
}

/**
 * @details
 * pop the data from this class from read_buffer,
 * called by aquisition interface. flagHasData2Read
 * is clear if all the data is fetched.
 * @par Parameters
 *	None.
 * @retval nullptr if no avaliable data
 * @retval unique_ptr<QList<char>> that point to protocol
 * seperated data without head and tails
 *
 * @todo
 *
 */
std::unique_ptr<QList<char>> Data::popData()
{

    return nullptr;
}
