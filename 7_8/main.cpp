#include <iostream>
#include <array>

using namespace std;

int main()
{
//a
    array<char,6> alphabet{'a','b','c','d','e','f'};
    cout<<alphabet[5];
    //b
    array<float,6>grades{0};
    cin>>grades[3];
    cout<<grades[3];

    //c
    array<int,5>values{8,8,8,8,8};
    cout<<"\n"<<values[2];

//d
    int sum=0 ;
    array<float,100>temperatures{};
    for(int i =1; i<=100; ++i)
        temperatures[i]=i;

    for(size_t j = 1; j<=temperatures.size(); ++j)
    {
        sum += temperatures[j];
    }
    cout<<"\n"<<sum;

//e
    array<double,11>a;
    array<double,34>b;
    for(int i =1; i<=11; ++i)
        b[i]=a[i];




    //f


    array<double,99>w;
    double max1=w[3],min1=w[3];
    for(int n=0; n<=99; ++n)
    {
        if(w[n]>=max1)
            max1=w[n];

    }
    for(int c=0; c<=98; c++)
    {
        if(w[c]<=min1)
            min1=w[c];
    }

    cout<<"The biggest:"<<max1;
    cout<<"The smallest:"<<min1;



}
