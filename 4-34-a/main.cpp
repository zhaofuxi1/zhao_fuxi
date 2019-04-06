//4.34a
#include <iostream>

using namespace std;

int main()
{
    unsigned int a =0;
    int factorial = 1;

    cout<<"输入一个非负整数：";
    cin>>a;

    while(a>0)
        {
        factorial = a*factorial;
        a = a -1;
        }

    cout<<"阶乘结果为："<<factorial;

}
