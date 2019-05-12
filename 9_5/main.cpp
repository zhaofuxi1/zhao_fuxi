// Exercise 9.5 Solution: Ex09_05.cpp
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
   Complex a( 3, 9), b( 6, 1 ), c;

   a.printComplex();
   cout << " + ";
   b.printComplex();
   cout << " = ";
   c = a.add( b );
   c.printComplex();

   cout << '\n';
   a.setComplexNumber( 15, 2 );
   b.setComplexNumber( 20, 7 );
   a.printComplex();
   cout << " - ";
   b.printComplex();
   cout << " = ";
   c = a.subtract( b );
   c.printComplex();
   cout << endl;
}
