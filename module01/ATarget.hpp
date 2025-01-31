#ifndef ATARGET_HPP
# define ATARGET_HPP

#include "ASpell.hpp"
#include <iostream>
#include <string>

using namespace std;

class ASpell;

class ATarget {
    private:
        string _type;

    public:
        ATarget();
        ATarget(string type);
        ATarget(const ATarget &obj);
        ATarget &operator=(const ATarget &obj);
        virtual ~ATarget();
        string getType() const;
        virtual ATarget *clone() const = 0;
        void    getHitBySpell(const ASpell& spell) const;
};

#endif