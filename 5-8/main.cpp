//5.8
#include <iostream>

using namespace std;

int main()
{
    int a  = 0;
    unsigned i = 1;
    int number = 0;
    int smallest ;
    cout<<"����һ�����涨��Ŀ��";
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

