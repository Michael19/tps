#ifndef _TRANSLATER_LANGUAGE_
#define _TRANSLATER_LANGUAGE_

#include <string>

namespace tps
{

enum class LANGUAGES{
    RUSSIAN,
    ENGLISH,
    EMPTY
};

class Language{
public:
    Language(LANGUAGES lang = LANGUAGES::EMPTY);

    LANGUAGES get_lang();

private:
    LANGUAGES _lang;

};
}

#endif
