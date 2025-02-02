#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <map>
#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

using namespace std;

class Warlock
{
    private:
        string  _name;
        string  _title;
        Warlock();
        Warlock(const Warlock &obj);
        Warlock &operator=(const Warlock &obj);
        SpellBook   spellBook;

    public:
        Warlock(string name, string title);
        ~Warlock();
        const string    &getName() const;
        const string    &getTitle() const;
        void            setTitle(const string &title);
        void            introduce() const;
        void            learnSpell(ASpell *spell);
        void            forgetSpell(string name);
        void            launchSpell(string name, ATarget &target);
};

#endif