#include <iostream>
#include<array>

using namespace std;

int main()
{
    const size_t row=2;
    const size_t column=3;
    array<array<int,column>,row>t;
    t[1][2]=0;


    t={0,0,0,0,0,0};

    for(int n=1;n<=2;n++)
    {
        for(int m=1;m<=column;m++)
        {
            t[n][m]=0;
        }
    }




     cout<<"please enter number"<<endl;
     for(int n=1;n<=row;n++)
    {
        for(int m=1;m<=column;m++)
        {
            int x;
            cin>>x;
            t[n][m]=x;
        }
    }







      int min=t[1][1];
      for(int n=1;n<=row;n++)
    {
        for(int m=1;m<=column;m++)
        {
            if(t[n][m]<min)
                min=t[n][m];
        }
    }
    cout<<"the min is "<<min<<endl;




    cout<<"the first row is ";
    for(int n=1;n<=column;n++)
    cout<< t[1][n]<<"   ";



    int sum=0;
    for(int m=1;m<=row;m++)
    {sum+=t[m][2];
    }
    cout<< "the second column sum is "<<sum;





    return 0;
}
