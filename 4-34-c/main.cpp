#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int J = 0;
    int x;
    int factorial=1;
    double e =1.0;
    double exponent = 1.0;
    cout<<"����η��� ";
    cin>>x;

    cout<<"���뾫�ȣ�";
    cin>>J;
    while(i<J)
    {
       exponent*=x;
       factorial=factorial*i;
        e+=exponent/factorial;
        i=i+1;


    }

    cout<<e;
    return 0;
}

