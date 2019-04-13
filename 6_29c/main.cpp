
#include <iostream>
#include <iomanip>
#include <cmath>
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
            count++;
            cout << setw( 6 ) << loop;

            if ( count % 10 == 0 )
                cout << '\n';
        }
    }

    cout << endl << "Total of " << count
         << " prime numbers between 1 and 10000." << endl;
}

bool isPrime( int n )
{

    for ( int i = 2; i <= static_cast< int > ( sqrt( static_cast< double > ( n ) ) );
            i++ )
    {

        if ( n % i == 0 )
            return false;
    }
    return true;
}
