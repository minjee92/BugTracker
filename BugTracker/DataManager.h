#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QObject>

/*!
 * \brief The DataManager class
 * \details The class for communicating with server and requesting user data from the server.
 * \author LeeMinjee
 * \date 2022-05-01
 */
class DataManager : public QObject
{
    Q_OBJECT
public:
    explicit DataManager(QObject *parent = nullptr);


signals:

};

#endif // DATAMANAGER_H
