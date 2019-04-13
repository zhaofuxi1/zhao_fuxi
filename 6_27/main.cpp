//6.27
#include <iostream>

using namespace std;
double Smallest(double,double,double);
int main()
{
double x,y,z;
cout<<"enter three number: ";
cin>>x>>y>>z;
cout<<"The smallest is: "<<Smallest(x,y,z);


}


double Smallest(double a,double b,double c)
{

    if(a<b&&a<c)
        return a;
    else if(b<a&&b<c)
       return b;
    else
    return c;
}
