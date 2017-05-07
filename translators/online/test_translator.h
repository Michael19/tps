#ifndef _TRANSLATOR_TRANSLATORS_ONLINE_TEST_TRANSLATOR_H_
#define _TRANSLATOR_TRANSLATORS_ONLINE_TEST_TRANSLATOR_H_

#include <string>
#include <map>

#include "../../language.h"
#include "../../translator.h"

namespace tps
{

const std::map<LANGUAGES, std::string> languages_name = {
    {LANGUAGES::RUSSIAN, "rus"},
    {LANGUAGES::ENGLISH, "eng"}

};

class TestTranslator : public Translater{
public:
    TestTranslator();

    virtual ~TestTranslator();

    TRANSLATE_RESULT translate(const std::string& phrase, TransletedPhrase& out_phrase);

};
}

#endif
