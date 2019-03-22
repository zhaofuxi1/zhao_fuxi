#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    double a,b,c,d,A,B,C,D;



    cout<<"The First Account: ";
    cin >> a ;
    cout<<"存款：";
    cin >> b ;
    cout<<"\n取款：";
    cin >> c;

    Account First(a);
    First.credit(b);
    First.debit (c);
    First.getmoney(b);






    cout<<"\nThe Second Account:";
    cin>>A;
    cout<<"存款:";
    cin>>B;
    cout<<"取款:";
    cin>>C;


    Account Second(A);
   Second.credit(B);
    Second.debit (C);
   Second.getmoney(D);




    return 0;


}
