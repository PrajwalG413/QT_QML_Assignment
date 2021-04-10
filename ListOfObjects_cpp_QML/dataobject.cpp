#include <QDebug>
#include "dataobject.h"

DataObject::DataObject(QObject *parent)
    : QObject(parent)
{
}

DataObject::DataObject(const QString &name, QObject *parent)
    : QObject(parent), m_name(name)
{
}

QString DataObject::name() const
{
    return m_name; //return names
}
