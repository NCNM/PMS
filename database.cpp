#include "database.h"

database::database(QString hostname, QString username, QString password, int port)
{
    mHostname = hostname;
    mUsername = username;
    mPassword = password;
    mPort = port;
}

bool database::init()
{
    mDb = QSqlDatabase::addDatabase("QMYSQL");
    mDb.setHostName(mHostname);
    mDb.setDatabaseName("PMS");
    mDb.setPort(mPort);
    mDb.setUserName(mUsername);
    mDb.setPassword(mPassword);

    return 1;
}

