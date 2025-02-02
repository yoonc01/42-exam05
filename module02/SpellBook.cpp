#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook()
{
    map<string, ASpell *>::iterator it = spellBook.begin();
    map<string, ASpell *>::iterator end = spellBook.end();
    while (it != end)
    {
        delete it->second;
        ++it;
    }
}

void    SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        spellBook.insert(pair<string, ASpell *>(spell->getName(), spell->clone()));
}

void    SpellBook::forgetSpell(string const &name)
{
    //spellBook[name]이 없으면 null(nullptr) 반환
    //delete null은 c++에서 no-op임
    delete spellBook[name];
    spellBook.erase(name);
}

ASpell  *SpellBook::createSpell(string const &name)
{
    return spellBook[name];
}