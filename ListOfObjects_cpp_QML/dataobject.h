#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include <QObject>

class DataObject : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name)

public:
    DataObject(QObject *parent=0);
    DataObject(const QString &name, QObject *parent=0);

    QString name() const;

private:
    QString m_name;
};

#endif // DATAOBJECT_H
