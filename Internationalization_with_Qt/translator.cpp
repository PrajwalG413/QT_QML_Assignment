#include "translator.h"
#include <QApplication>

Translator::Translator(QObject *parent) : QObject(parent)
{

}

void Translator::setTranslation(QString translation)
{
    m_translator.load(":/Internationalization_with_Qt_" + translation, ".");
    qApp->installTranslator(&m_translator);
    emit languageChanged();
}
