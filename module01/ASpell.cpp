#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(string name, string effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell &obj) : _name(obj.getName()), _effects(obj.getEffects()) {}

ASpell &ASpell::operator=(const ASpell &obj)
{
    if (this != &obj)
    {
        _name = obj.getName();
        _effects = obj.getEffects();
    }
    return (*this);
}

ASpell::~ASpell() {}

string  ASpell::getName() const
{
    return (_name);
}

string ASpell::getEffects() const
{
    return (_effects);
}

void    ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}