//4.34a
#include <iostream>

using namespace std;

int main()
{
    unsigned int a =0;
    int factorial = 1;

    cout<<"����һ���Ǹ�������";
    cin>>a;

    while(a>0)
        {
        factorial = a*factorial;
        a = a -1;
        }

    cout<<"�׳˽��Ϊ��"<<factorial;

}
