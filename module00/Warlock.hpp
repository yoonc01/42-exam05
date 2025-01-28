#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>

using namespace std;

class Warlock
{
    private:
        string  _name;
        string  _title;
        Warlock();
        Warlock(const Warlock &obj);
        Warlock &operator=(const Warlock &obj);

    public:
        Warlock(string name, string title);
        ~Warlock();
        const string    &getName() const;
        const string    &getTitle() const;
        void            setTitle(const string &title);
        void            introduce() const;
};

#endif