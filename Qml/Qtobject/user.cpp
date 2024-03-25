#include "User.h"

User::User(const QString &name)
    : m_name(name)
{
}

User::~User()
{
    qDebug("User %s destroyed", qPrintable(m_name));
}
