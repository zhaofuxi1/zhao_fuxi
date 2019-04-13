
//6.26
#include<iostream>
#include <iomanip>

using namespace std;

double celsius(int );
double fahrenheit(int );

double fahrenheit(int cTemp)
{
    return static_cast< int > ( 9.0 / 5.0 * cTemp + 32 );
}
double celsius(int fTemp)
{
    return static_cast< int > ( 5.0 / 9.0 * ( fTemp - 32 ) );
}

int main()
{
    cout << "Converting Fahrenheit to Celsius temperatures:" ;
    cout << endl;

    for ( int t = 0; t < 4; t++ )
        cout << setw( 10 ) << "Fahrenheit" << setw( 9 ) << "Celsius ";
    cout << endl;



    for ( int i = 32; i < 77; i++ )
    {
        for ( int j = 0; j <= 135; j += 45 )
            cout << setw( 10 ) << i + j
                 << setw( 8 ) << celsius( i + j ) ;
        cout << endl;
    }

    cout << "Converting Celsius to  Fahrenheit temperatures:" << endl;

    for ( int t = 0; t < 4; t++ )
        cout << setw( 7 ) << "Celsius" << setw( 12 ) << "Fahrenheit ";

    cout << endl;



    for ( int i = 0; i < 25; i++ )
    {
        for ( int j = 0; j <= 75; j += 25 )
            cout << setw( 7 ) << i + j
                 << setw( 11 ) << fahrenheit( i + j ) << ' ';

        cout << endl;
    }


    cout << setw( 64 ) << 100 << setw( 11 ) << fahrenheit( 100 ) << endl;
















}

