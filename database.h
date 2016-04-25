#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

class database
{
private:
    QString mHostname;
    QString mUsername;
    QString mPassword;
    int mPort;

    QSqlDatabase mDb;

    bool init();
public:
    database(QString hostname, QString username, QString password, int port);
};

#endif // DATABASE_H

