//5.6
#include <iostream>

using namespace std;

int main()
{
   double average = 0;

   int sum = 0;
   int number = 0;
   unsigned int i =0;



   for( i = 0; number != 9999; ++i)
   {
        cin>>number;


        sum =sum+number;

   }


    average = (sum-9999)/(i-1);
    cout<<"平均数是："<<average;
}
