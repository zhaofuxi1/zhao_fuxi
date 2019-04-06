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

    if(a+b>c&&a+c>b&&b+c>a)
        cout<<"可作为三角形三边长";
      else
        cout<<"不可作为三角形三边";
}
