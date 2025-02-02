#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() 
{
    map<string, ATarget *>::iterator it = targetList.begin();
    map<string, ATarget *>::iterator end = targetList.end();
    while (it != end)
    {
        delete it->second;
        ++it;
    }
}

void    TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        targetList.insert(pair<string, ATarget *>(target->getType(), target->clone()));
}

void    TargetGenerator::forgetTargetType(string const &name)
{
    delete  targetList[name];
    targetList.erase(name);
}

ATarget  *TargetGenerator::createTarget(string const &name)
{
    return targetList[name];
}