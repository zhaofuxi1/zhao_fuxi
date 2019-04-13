//6.19
#include <iostream>
#include<math.h>

using namespace std;

double hypotenuse(double,double);
double hypotenuse(double a,double b)
{
    double c;

     c=sqrt(a*a+b*b);
    return c ;
}





int main()
{
    double edge1;
    double edge2;
     for(int i=1;i<=3;i++)

    {
        cout<<"\nPlease input the first edge: ";
    cin>> edge1;
    cout<<"\nPlease input the second edge: ";
    cin>>edge2;
    cout<<"\nThe bevel edge is: "<<hypotenuse(edge1,edge2);
    }

    return 0;
}

