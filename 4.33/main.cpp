//4.32
#include <iostream>

using namespace std;

int main()
{

    double a = 0;
    double b = 0;
    double c = 0;

    cout<<"�������������߳���";
    cin>>a>>b>>c;

    if(a*a+b*b==c*c)
            cout<<"��ֱ��������";
        else if(a*a+c*c==b*b)
            cout<<"��ֱ��������";
        else if(b*b+c*c==a*a)
            cout<<"��ֱ��������";

        else
            cout<<"����ֱ��������";
}
