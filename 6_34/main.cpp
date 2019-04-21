//6_34
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;




bool isanwser(int a,int b)
{
    if(a==b)
        return true;
    else
        return false;
}




int main()
{
    int anwser;
    int number;

    srand(static_cast<unsigned int>(time(0)));
    cout<<"I have a number between 1 and 1000.";
    cout<<"\nCan you guess my number?";
    cout<<"\nPlease type your first guess.";
    anwser = rand()%1000+1;


    cin >>number;

    if(isanwser(number,anwser))
        cout<<"Excellent! You guessed the number!";



    while(!isanwser(number,anwser))

        if(number<anwser)
        {
            cout<<"Too low. Try again.";
            cin>>number;
            if(isanwser(number,anwser))
                cout<<"NB!!!";

        }
        else
        {
            cout<<"Too high. Tty again.";
            cin>>number;
            if(isanwser(number,anwser))
                cout<<"NB!!!";

        }
}

