#include <iostream>


using namespace std;

int main()
{
    double exponent;
    double a = 0;
    int J = 1000;
    double f = 0;
    int fenmu = 1;
    double p = 0;
    cout<<"��1000Ϊ����";
    cout<<J<< "\nterm\tp\n";


    for( int i = 1;i<=J;i++)
    {
       if(i%2!=0)
        p += 4.0/fenmu ;
        else
            p+= -4.0/fenmu;

        cout<<i<<"\t"<<p<<"\n";
        fenmu += 2;


    }








}
