#ifndef _TRANSLATOR_TRANSLATORS_ONLINE_TRANSLATOR_H_
#define _TRANSLATOR_TRANSLATORS_ONLINE_TRANSLATOR_H_

#include <memory>

#include "../translator.h"
#include "types_translators.h"

namespace tps{

/**
 * @brief The OnlineTranslatorFabrica class
 * фабрика для онлайн переводчиков
 */
class OnlineTranslatorFabrica{

public:
    OnlineTranslatorFabrica();

    static std::shared_ptr<Translater> create(TYPES_TRANSLATOR t);

private:


};
}

#endif
