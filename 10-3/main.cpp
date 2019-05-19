#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED

#include <iostream>
#include <string>

class PhoneNumber
{
    friend std::ostream &operator<<( std::ostream &,const Phonenumber & );
    friend std::istream &operator<<( std::istream &,const PhoneNumber &);
private:
    std::string areaCode;
    std::string exchange;
    std::string line;
};
#endif
