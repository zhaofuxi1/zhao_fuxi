//5.8
#include <iostream>

using namespace std;

int main()
{
    int a  = 0;
    unsigned i = 1;
    int number = 0;
    int smallest ;
    cout<<"输入一个数规定数目：";
    cin>>a;

    cin>>smallest;

    for(i=1;i<=a-1;++i)
    {
        cin>>number;

        if(smallest<number)
       {
       }
        else
        {
            smallest = number;

        }

    }
        cout<<smallest;
}

