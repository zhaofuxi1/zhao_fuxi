#include <iostream>

using namespace std;

int main()
{
    int A = 0;
    int B = 0;
    cin >> A>>B;
    if(A>B)
        cout << A <<"is large"<<endl;
    if(B>A)
        cout << B <<"is large"<<endl;
    if(A==B)
        cout<<"These numbers are equal";

    return 0;
}
