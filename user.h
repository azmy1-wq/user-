#ifndef USER_H
#define USER_H
#include<QString>

class user
{
public:
    void setnometprenom (QString n);
    void setmotdepasse(QString n);
    void setEmail(QString n);
    QString get_nometprenom();
    QString get_motdepasse();
    QString get_Email();

    user();
private:
     QString nometprenom ,motdepasse ,Email;
};

#endif // USER_H
