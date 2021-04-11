#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QObject>
#include <QTranslator>

class Translator : public QObject
{
    Q_OBJECT

public:
    explicit Translator(QObject *parent = 0);

signals:

    void languageChanged();//to emit signal

public:

    Q_INVOKABLE void setTranslation(QString translation);//invokable from meta object system

private:
    QTranslator m_translator;
};

#endif // TRANSLATOR_H
