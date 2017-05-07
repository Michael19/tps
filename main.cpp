#include <memory>

#include "language.h"
#include "translator.h"
#include "translated_phrase.h"

#include "translators/online_translator.h"

using namespace std;
using namespace tps;

bool test_1(){
    std::shared_ptr<Translater> translter_eng2rus = OnlineTranslatorFabrica::create(TYPES_TRANSLATOR::TEST);

    translter_eng2rus->set_dst_language(Language(LANGUAGES::RUSSIAN));
    translter_eng2rus->set_src_language(Language(LANGUAGES::ENGLISH));

    TransletedPhrase result_phrase;

   TRANSLATE_RESULT out_err =  translter_eng2rus->translate("SOME_TEST", result_phrase);

    if(out_err == TRANSLATE_RESULT::SUCCESS && "TEST_IS_GOOD"){
        return true;
    }

    return false;
}

int main(int argc, char *argv[])
{


    cout << "test_1" << test_1() << endl;
    return 0;
}
