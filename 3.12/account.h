#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <string>
using namespace std;

class   Account
{
public:
    explicit Account(double);


    void credit(double);
    void debit (double);
    void getmoney (double) ;
private:
    double money;
};



#endif // ACCOUNT_H_INCLUDED
