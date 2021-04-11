#include "translator.h"
#include <QApplication>

Translator::Translator(QObject *parent) : QObject(parent)
{

}

void Translator::setTranslation(QString translation)
{
    m_translator.load(":/Internationalization_with_Qt_" + translation, ".");
    qApp->installTranslator(&m_translator);//qApp->A global pointer referring to
                                           //the unique application object
                                           //installTranslator-> Adds the translation file translationFile to
                                           //the list of translation files to be used for translations
    emit languageChanged();
}
