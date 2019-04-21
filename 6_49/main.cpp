//6_49
#include <iostream>

using namespace std;

inline double circleArea(double a)
{
    return 3.1415926*a*a;
}
int main()
{
   int r ;
   cout<<"input the r: ";
   cin>>r;
   cout<<"Th circle area is: "<<circleArea(r);
}
