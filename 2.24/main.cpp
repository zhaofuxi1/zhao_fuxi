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
        cout<<A<<"是偶数";
    if(b!=0)
        cout<<A<<"是奇数";

    return 0;
}
