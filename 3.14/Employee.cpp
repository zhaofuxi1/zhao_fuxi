#include "Emplyee.h"
#include <string>

using namespace std;

Employee:: Employee(string firstname,string lastname,int monthpay)
{
    setfirstName( firstname);
    setlastName (lastname);
    setmonthPay ( monthpay);
}
void Employee::setfirstName(string firstname)
{
    firstName = firstname;
}
string Employee::getfirstName()
{
    return firstName;
}


void Employee::setlastName(string lastname)
{
    lastName = lastname;
}
string Employee::getlastName()
{
    return lastName;
}



void Employee::setmonthPay(int money)
{
    if(money<0)
        monthPay = 0;
    if(money>=0)
        monthPay = money;
}
int Employee::getmonthPay()
{
    return money;
}

