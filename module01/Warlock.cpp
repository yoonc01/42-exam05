#include "Warlock.hpp"

Warlock::Warlock(string name, string title) : _name(name), _title(title)
{
    cout << _name << ": This looks like another boring day." << endl;
}

Warlock::~Warlock()
{
    map<string, ASpell *>::iterator it = spellBook.begin();
    map<string, ASpell *>::iterator end = spellBook.end();
    while (it != end)
    {
        delete it->second;
        ++it;
    }
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
    if (spell)
        spellBook.insert(pair<string, ASpell *>(spell->getName(), spell->clone()));
}

void            Warlock::forgetSpell(string name)
{
    delete spellBook[name];
    spellBook.erase(name);
}

void            Warlock::launchSpell(string name, ATarget &target)
{
    ASpell *spell = spellBook[name];
    if (spell)
        spell->launch(target);
}