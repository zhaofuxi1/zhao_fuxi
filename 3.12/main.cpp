#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    double a,b,c,d,A,B,C,D;



    cout<<"The First Account: ";
    cin >> a ;
    cout<<"��";
    cin >> b ;
    cout<<"\nȡ�";
    cin >> c;

    Account First(a);
    First.credit(b);
    First.debit (c);
    First.getmoney(b);






    cout<<"\nThe Second Account:";
    cin>>A;
    cout<<"���:";
    cin>>B;
    cout<<"ȡ��:";
    cin>>C;


    Account Second(A);
   Second.credit(B);
    Second.debit (C);
   Second.getmoney(D);




    return 0;


}
