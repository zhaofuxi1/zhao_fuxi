#include "account.h"
#include <iostream>
#include <string>

using namespace std;

 Account::Account( double m)
 {
    money = m;

 }
 void  Account::credit( double m)
 {
     if(m >= 0)
        money = money +m;
     if(m < 0)
        cout<<"�����Ч";
 }
 void  Account::debit (double m)
 {
     if(money >= m)
        money = money - m;
     if(money <   m)
        cout<<"Debit amount exceeded account balance";
 }
 void  Account::getmoney (double m)
 {
     cout<<"�����:"<<money;
 }

