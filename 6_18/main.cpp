//6.18
#include <iostream>

using namespace std;


int integerPower(int,int);


int integerPower(int a,int b)
{
    int product =1 ;

    for( int i=1 ;i<=b; i++)
        product *= a;
        return product;
}

int main()
{
    int base;
    int exponent;
    cout<<"Please input the base:";
    cin>>base;
    cout<<"Please input the exponent:";
    cin>>exponent;
    cout<<integerPower(base,exponent);
    return 0;
}

