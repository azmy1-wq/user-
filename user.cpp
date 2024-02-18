#include "user.h"

user::user()
{

nometprenom="";
motdepasse="";
Email="";

}
void user::setnometprenom(QString n){nometprenom=n;}
void user::setEmail(QString n){Email=n;}
void user::setmotdepasse(QString n){motdepasse=n;}


QString user ::get_nometprenom(){return nometprenom;}
QString user ::get_motdepasse(){return motdepasse;}
QString user ::get_Email(){return Email;}
