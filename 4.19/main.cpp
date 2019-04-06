//4.19
#include <iostream>

using namespace std;




int main()
{


    int counter = 0 ;
    int number = 0;
    int largest;
    int secondlargest;
     cin>>largest;
     cin>>secondlargest;
     if(largest>secondlargest)
{


    while(counter<10)
    {
        cout<<"Integer a number:";
        cin>>number;
        counter=counter+1;
        if(number>largest )
            secondlargest=largest;
            largest = number;
    }
    cout <<"The largest is "<<largest;
    cout<<"The second largest is"<<secondlargest;
}
    else cout<<"false";
    return 0;
}
