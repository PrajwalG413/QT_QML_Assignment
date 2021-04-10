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

    void languageChanged();

public:

    Q_INVOKABLE void setTranslation(QString translation);

private:
    QTranslator m_translator;
};

#endif // TRANSLATOR_H
