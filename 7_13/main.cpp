#include <iostream>
#include <array>
using namespace std;

int main()
{
   array<int,20>a{};


   int subscript = 0;
   int duplicate;
   int value;

   cout << "Enter 20 integers between 10 and 100:\n";


   for ( int i = 0; i < 20; ++i )
   {
      duplicate = 0;
      cin >> value;


      if ( value >= 10 && value <= 100 )
      {
            for ( int j = 0; j <subscript; j++ )
         {
            if ( value == a[ j ] )
            {
               duplicate = 1;
               break;
            }
         }

         if ( !duplicate )
         {
            a[ subscript++ ] = value;

         }
         else
            cout << "Duplicate number.\n";
      }
      else
         cout << "Invalid number.\n";
   }
   cout << "\nThe nonduplicate values are:\n";


   for ( int i = 0; i < 20; i++ )
      cout << a[ i ] <<" ";


}
