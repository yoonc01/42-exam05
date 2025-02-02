#include "Warlock.hpp"

Warlock::Warlock(string name, string title) : _name(name), _title(title)
{
    cout << _name << ": This looks like another boring day." << endl;
}

Warlock::~Warlock()
{
    cout << _name << ": My job here is done!" << endl;
}

const string &Warlock::getName() const
{
    return (_name);
}

const string &Warlock::getTitle() const
{
    return (_title);
}

void         Warlock::setTitle(const string &title)
{
    _title = title;
}

void         Warlock::introduce() const
{
    cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
}

void            Warlock::learnSpell(ASpell *spell)
{
    spellBook.learnSpell(spell);
}

void            Warlock::forgetSpell(string name)
{
    spellBook.forgetSpell(name);
}

void            Warlock::launchSpell(string name, ATarget &target)
{
    ASpell *spell = spellBook.createSpell(name);
    if (spell)
        spell->launch(target);
}