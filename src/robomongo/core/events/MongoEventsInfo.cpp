#include "robomongo/core/events/MongoEventsInfo.h"

namespace Robomongo
{
    EnsureIndexInfo::EnsureIndexInfo(const MongoCollectionInfo &collection, const std::string &name, const std::string &request,
        bool isUnique, bool isBackGround, bool isDropDuplicates,bool isSparce,int expireAfter,
        const std::string &defaultLanguage,const std::string &languageOverride,const std::string &textWeights) :
        _name(name),
        _collection(collection),
        _request(request),
        _unique(isUnique),
        _backGround(isBackGround),
        _dropDups(isDropDuplicates),
        _sparse(isSparce),
        _ttl(expireAfter),
        _defaultLanguage(defaultLanguage),
        _languageOverride(languageOverride),
        _textWeights(textWeights){}
}