#include <iostream>
#include"Emplyee.h"

using namespace std;

int main()
{
    Employee a("FX","Z",10000);
    cout<<"Employee1:"<<a.getlastName()<<a.getfirstName()<< a.monthPay*12<<endl;
    Employee b("YS","Z",9999999);
    cout<<"\nEmployee2:"<<"/n"<<b.getlastName()<<b.getfirstName()<< b.monthPay*12<<endl;


    cout<<"\n      Increase salary:";

    Employee a1("FX","Z",10000);
    cout<<"\nEmployee1:"<<a1.getlastName()<<a1.getfirstName()<<a1.monthPay *12*1.1;
    Employee b1("YS","Z",9999999);
    cout<<"\nEmployee2:"<<b1.getlastName()<<b1.getfirstName()<<b1.monthPay*12*1.1;



}
