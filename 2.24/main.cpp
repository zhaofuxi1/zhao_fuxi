#include <iostream>

using namespace std;

int main()
{
    int A = 0;
    int b = 0;

    cout<<"input a integer";
    cin>>A;
    b = A % 2;
    if(b==0)
        cout<<A<<"��ż��";
    if(b!=0)
        cout<<A<<"������";

    return 0;
}
