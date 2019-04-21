
//6.35
bool isanwser(int a,int b)
{
  if(a==b)
        return true;
  else
        return false;
}




int main()
{
    int counter;
    int anwser;
    int number;
    srand(static_cast<unsigned int>(time(0)));
    cout<<"I have a number between 1 and 1000.";
    cout<<"\nCan you guess my number?";
    cout<<"\nPlease type your first guess.";
    anwser = rand()%1000+1;
    cout<<anwser;
    cin >>number;

        if(isanwser(number,anwser))
        cout<<"Excellent! You guessed the number!";
        while(!isanwser(number,anwser))

        if(number<anwser)
        {
            cout<<"Too low. Try again.";
            cin>>number;
            ++counter;
            if(isanwser(number,anwser))
               {
                   cout<<"NB!!!";
                  if(counter<10)
                    cout<<"Either you know the secret or you get lucky!";
                  if(counter==10)
                    cout<<"Ahah! You know the secret!";
                  if(counter>10)
                    cout<<"You should be able to do better!";

               }
        }
        else
        {
            cout<<"Too high. Tty again.";
            cin>>number;
            ++counter;
             if(isanwser(number,anwser))
                {
                    cout<<"NB!!!";
                if(counter<10)
                    cout<<"Either you know the secret or you get lucky!";
                if(counter==10)
                    cout<<"Ahah! You know the secret!";

                }

        }
}
