#ifndef APPCORE_H
#define APPCORE_H

#include <QObject>


class AppCore : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(int counter READ counter WRITE setCounter NOTIFY counterChanged)//we are using Q_PROPERTY, now counter is
                                                                               //accessable in qml

    explicit AppCore(QObject *parent = nullptr);

    int counter() const;

signals:
    void counterChanged(int counter);

public slots:
    void setCounter(int counter);

private:
    int m_counter = 0;
};

#endif // APPCORE_H
