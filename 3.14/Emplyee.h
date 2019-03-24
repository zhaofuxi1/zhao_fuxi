#ifndef EMPLYEE_H_INCLUDED
#define EMPLYEE_H_INCLUDED
#include <string>
using namespace std;

class Employee
{
public:

    explicit Employee (string firstname,string lastname,int monthpay);
    void setfirstName(string );
    string getfirstName();

    void setlastName(string);
    string getlastName();

    void setmonthPay(int);
    int getmonthPay();

    string firstName;
    string lastName;
    int monthPay;
private:
     int money;


};


#endif // EMPLYEE_H_INCLUDED
