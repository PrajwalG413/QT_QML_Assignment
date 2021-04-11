#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QString>

class MyThread : public QThread
{
public:

    MyThread(QString s, bool b = false);// name and Stop is set as false by default

    void run();// overriding the QThread's run() method

    bool Stop; // variable that mutex protects
private:
    QString name;
};

#endif // MYTHREAD_H
