
#include <iostream>
#include "checkingAccount.h"
using namespace std;


CheckingAccount::CheckingAccount( double initialBalance, double fee )
   : Account( initialBalance )
{
   transactionFee = ( fee < 0.0 ) ? 0.0 : fee;
}


void CheckingAccount::credit( double amount )
{
   Account::credit( amount );
   chargeFee();
}


bool CheckingAccount::debit( double amount )
{
   bool success = Account::debit( amount );

   if ( success )
   {
      chargeFee();
      return true;
   }
   else
      return false;
}


void CheckingAccount::chargeFee()
{
   Account::setBalance( getBalance() - transactionFee );
   cout << "$" << transactionFee << " transaction fee charged." << endl;
}
