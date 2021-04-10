#ifndef APPCORE_H
#define APPCORE_H

#include <QObject>


class AppCore : public QObject
{
    Q_OBJECT
public:
    explicit AppCore(QObject *parent = nullptr);

signals:
    void sendToQml(int count);// Signal to transmit data to interface qml-interface

public slots:
    void receiveFromQml(); // The slot for the receiving of data from the QML-interface
//Q_INVOKABLE void receiveFromQml(); //Uncomment to work using Q_INVOKABLE Macro
private:
    int m_counter = 0;// Counter
};

#endif // APPCORE_H
