#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <iostream>
#include <string>
#include <map>

using namespace std;

class TargetGenerator
{
    private:
        map<string, ATarget *>   targetList;
        TargetGenerator(const TargetGenerator &obj);
        TargetGenerator &operator=(const TargetGenerator &obj);
    public:
        TargetGenerator();
        ~TargetGenerator();

        void    learnTargetType(ATarget *target);
        void    forgetTargetType(string const &type);
        ATarget *createTarget(string const &type);
};

#endif