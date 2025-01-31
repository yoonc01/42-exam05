#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(string type) : _type(type) {}

ATarget::ATarget(const ATarget& obj) : _type(obj.getType()) {}

ATarget &ATarget::operator=(const ATarget& obj)
{
    if (this != &obj)
    {
        _type = obj.getType();
    }
    return (*this);
}

ATarget::~ATarget() {}

string  ATarget::getType() const
{
    return (_type);
}

void    ATarget::getHitBySpell(const ASpell &spell) const
{
    cout << _type << " has been " << spell.getEffects() << "!" << endl;
}