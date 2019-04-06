
#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int J ;
    int factorial=1;
    double e=1.0;
    cout<<"JING  DU  IS: ";
    cin>>J;
    while(i<J)
    {

        factorial=factorial*i;


        e+=1.0/factorial;

        i++;
    }

    cout<<"e is :"<<e<<endl;
    return 0;
}

