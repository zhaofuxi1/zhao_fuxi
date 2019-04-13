//6_20
#include <iostream>

using namespace std;
string multiple(int,int);
string multiple(int number1,int number2)
{
  if(number2%number1==0)
  return  "True";
  else
  return  "False";

}

int main()
{
    int a ;
    int b ;
    cout<<"Input the first number: ";
    cin>>a;
    cout<<"Input the second number: ";
    cin>>b;
    cout<< multiple( a, b);
    return 0;
}
