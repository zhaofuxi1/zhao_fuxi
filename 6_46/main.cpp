//6_46
#include <iostream>

using namespace std;
int pow(int,int);
double exp(int);
int main()
{
    //pow
    int dishu,zhishu;
    cin>>dishu>>zhishu;
    cout<<pow(dishu,zhishu);


    //exp
    int x;
    cin>>x;
    cout<<exp(x);


}


int pow(int a, int b)
{
    int f =1;
    for(int i =1;i<=b;++i)
    f*=a;
    return f;
}

double exp(int c,int d)
{
    int m;
    for(int i =1;i<=d;++i)
        m = m*2.718282;
    return m;
}
