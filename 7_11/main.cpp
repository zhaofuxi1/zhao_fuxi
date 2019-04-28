#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//a
    array<int,10> counter{};
//b
    array<int,15>bonus{0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i =1; i<=15; ++i)
        bonus[i]+=1;
//c
    array<double,12>monthlyTemperatures;
    for(int i =1; i<=12; ++i)
        cin>>monthlyTemperatures[i];
    //d
    int j =1;
    array<int,5>bestScores{1,2,3,4,5};
    for(int j = 1; j<=5; ++j)
        cout<<bestScores[j]<<endl;



}
