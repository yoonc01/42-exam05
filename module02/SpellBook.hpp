#ifndef SPELLBOOK
# define SPELLBOOK

#include "ASpell.hpp"
#include <iostream>
#include <string>
#include <map>

using namespace std;

class SpellBook
{
    private:
        map<string, ASpell *>   spellBook;
        SpellBook(const SpellBook &obj);
        SpellBook &operator=(const SpellBook &obj);
    public:
        SpellBook();
        ~SpellBook();

        void    learnSpell(ASpell *spell);
        void    forgetSpell(string const &name);
        ASpell  *createSpell(string const &name);
};

#endif