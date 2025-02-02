#ifndef ASPELL_HPP
# define ASPELL_HPP

#include "ATarget.hpp"
#include <iostream>
#include <string>

using namespace std;

class ATarget;

class ASpell {
    private:
        string _name;
        string _effects;

    public:
        ASpell();
        ASpell(string name, string effects);
        ASpell(const ASpell &obj);
        ASpell &operator=(const ASpell &obj);
        virtual ~ASpell();
        string getName() const;
        string getEffects() const;
        virtual ASpell *clone() const = 0;
        void    launch(const ATarget &target) const;
};


#endif