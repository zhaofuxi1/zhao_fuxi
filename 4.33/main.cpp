//4.32
#include <iostream>

using namespace std;

int main()
{

    double a = 0;
    double b = 0;
    double c = 0;

    cout<<"输入三角形三边长：";
    cin>>a>>b>>c;

    if(a*a+b*b==c*c)
            cout<<"是直角三角形";
        else if(a*a+c*c==b*b)
            cout<<"是直角三角形";
        else if(b*b+c*c==a*a)
            cout<<"是直角三角形";

        else
            cout<<"不是直角三角形";
}
