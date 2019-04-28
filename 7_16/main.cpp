
#include <array>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const long ROLLS = 36000;

    array<int,13> sz = { 0,0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
    int x;
    int y;
    array<int,13>sum = {};

    srand( time( 0 ) );


    for ( long i = 1; i <= ROLLS; i++ )
    {
        x = 1 + rand() % 6;
        y = 1 + rand() % 6;
        sum[ x + y ]++;
    }

    cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
         << "Expected" << setw( 10 ) << "Actual\n" ;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    for ( int j = 2; j < 13; j++ )
        cout << setw( 10 ) << j << setw( 10 ) << sum[ j ]
             << setw( 10 )
             << 100.0 *sz[ j ] / 36 << "%"
             << setw( 9 ) << 100.0 * sum[ j ] / ROLLS << "%\n";
}
