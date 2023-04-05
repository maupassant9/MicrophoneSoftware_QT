/**
 * @file      commwarnable.h
 * @brief     Communication Interface Warnnable class.
 * @author    Dong Xia
 * @version   0.1
 * @date      05/04/2023
 * @warning   Improper use can crash your application
 * @copyright GNU Public License.
 */
#ifndef COMMWARNABLE_H
#define COMMWARNABLE_H


#include <QObject>
#include <QSemaphore>



class CommWarnable : public QObject
{
    Q_OBJECT
public:

    /**
     * @name Constructors/destructor
     * @{
     */

    /**
     * @brief  Base constructor.
     * @param [in] implementation Reference to the implementation class.
     */

    explicit CommWarnable();
    /**
     * @}
     */

    /** \brief check if data is received by communication interface */
    virtual bool hasData();
    /** \brief Add the data to the  */
    virtual void addData(QList<int> datas);
    /** \brief warn function called by communication interface to warn the class */
    virtual void warn();
private:
    QSemaphore semaFlag;


};


#endif // COMMWARNABLE_H
