#ifndef _TRANSLATER_TRANSLATER_LANGUAGE_
#define _TRANSLATER_TRANSLATER_LANGUAGE_

#include <string>
#include <iostream>

#include "language.h"
#include "types.h"
#include "translated_phrase.h"

namespace tps {
class Translater{

public:
    Translater();

    virtual TRANSLATE_RESULT translate(const std::string& phrase, TransletedPhrase& out_phrase);


    void set_src_language(const Language& src);
    void set_dst_language(const Language& src);

protected:
    Language _src_lang;
    Language _dst_lang;
};
}
#endif
