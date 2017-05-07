#include "translated_phrase.h"


namespace tps {

TransletedPhrase::TransletedPhrase():
    _phrase("")
{

}

void TransletedPhrase::set_translate(const std::__cxx11::string &phrase)
{
    _phrase = phrase;
}

}
