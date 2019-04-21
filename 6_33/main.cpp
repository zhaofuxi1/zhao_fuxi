 //6.33
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int counter1 = 0;
    int counter2 = 0;
    unsigned int seed = 0;
    cout << "Ebter seed:";
    cin>>seed;
    srand(seed);
    for(int i =1;i<=100;++i)
    {
      if(rand()%2)
         {
            counter1++;
         }

            else
                counter2++;
    }
    cout<<"正面次数 "<<counter1<<"反面次数 "<<counter2;
}
