#include "appcore.h"

AppCore::AppCore(QObject* parent) : QObject(parent)
{

}

int AppCore::counter() const
{
    return m_counter;
}

void AppCore::setCounter(int counter)
{
    if (m_counter == counter)//check if counter is actually increased or not
        return;

    m_counter = counter;
    emit counterChanged(m_counter);//emit changed counter value
}
