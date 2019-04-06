#include <iostream>

using namespace std;

int main()
{
    int product = 1;
    unsigned i = 1;
    for(i==1; i<15 ;++i)

    if(i%2!=0)
    product = i*product;
    else
    {
        i = i+1;
        product = i*product;
    }


  cout<<"³Ë»ý:"<<product;
    return 0;
}
