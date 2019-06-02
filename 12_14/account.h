#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED


#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( double );
   void setBalance( double );
   double getBalance();
    virtual void credit( double );
   virtual bool debit( double );
private:
   double balance;
};

#endif


