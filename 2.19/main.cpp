#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int Sum = 0;
    int Average = 0;
    int Product = 0;
    cout<<"Input three different integers:";
    cin>>a>>b>>c;
    Sum = a+b+c;
    Average = (a+b+c)/3;
    Product = a*b*c;
    cout<<"Sum is"<<Sum<<"\nAverage is"<<Average<<"\nProduct is"<<Product;

    if(a<b&&a<c)
        cout<<"\nSmallest is "<<a;
    if(b<c&&b<a)
        cout<<"\nSmallest is "<<b;
    if(c<a&&c<b)
        cout<<"\nSmallest is "<<c;


    if(a>b&&a>c)
        cout<<"\nLargest is "<<a;
    if(b>a&&b>c)
        cout<<"\nLargest is "<<b;
    if(c>b&&c>a)
        cout<<"\nLargest is "<<c;




    return 0;
}
