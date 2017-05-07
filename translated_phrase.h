#ifndef _TRANSLATER_TRANSLATER_PHRASE_
#define _TRANSLATER_TRANSLATER_PHRASE_

#include <string>


namespace tps {
class TransletedPhrase {
public:
    TransletedPhrase();

    void set_translate(const std::string& phrase);

private:
    std::string _phrase;
};
}
#endif
