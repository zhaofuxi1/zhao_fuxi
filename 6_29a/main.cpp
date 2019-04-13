
#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime( int );

int main()
{
   int count = 1;

   cout << "The prime numbers from 1 to 10000 are:" << endl;
   cout << setw( 6 ) << 2;

   for ( int loop = 3; loop < 10000; loop += 2 )
   {
      if ( isPrime( loop ) )
      {
         cout << setw( 6 ) << loop;
         count++;

         if ( count % 10 == 0 )
            cout << "\n";
      }
   }

   cout << endl << "Total of " << count
      << " prime numbers between 1 and 10000." << endl;
}

bool isPrime( int n )
{

   for ( int loop2 = 2; loop2 <= n / 2; loop2++ )
   {

      if ( n % loop2 == 0 )
         return false;
   }

   return true;
}
