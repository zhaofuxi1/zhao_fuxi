//6.30
#include <iostream>

using namespace std;




int reverseNumber ( int);
int reverseNumber (int n)
{
    int rverse = 0;
    while(n>0)
    {
        rverse *=10;
        rverse+=n%10;
        n/=10;
    }
        return rverse;

}

int number = 0;
int main()
{
   cout<<"please input a number";
   cin>>number;
   cout<<"The reverse is :"<<reverseNumber(number);
}

