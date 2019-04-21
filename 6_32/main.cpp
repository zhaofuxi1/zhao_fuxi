
//6.32

#include <iostream>

using namespace std;


int qualityPoints(int);
int qualityPoints(int g)
{
    if(g>=90)
        return 4;
    else if(g>=80&&g<=89)
        return 3;
    else if(g>=70&&g<=79)
        return 2;
    else if(g>=60&&g<=69)
        return 1;
    else
        return 0;
}
int main()
{
   int average;
   cout<<"input the average: ";
   cin>>average;
   cout<<qualityPoints(average);
}
