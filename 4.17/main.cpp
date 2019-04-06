//4.17
#include <iostream>

using namespace std;

int main()
{
    int counter = 0 ;
    int number = 0;
    int largest;
    cin>>largest;

    while(counter<10)
    {
        cout<<"Integer a number:";
        cin>>number;
        counter=counter+1;
        if(number>largest )
            largest = number;
        else
            largest = largest;
    }
    cout <<"The largest is "<<largest;
}
