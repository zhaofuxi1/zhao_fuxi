//6_21
#include <iostream>

using namespace std;
bool iseven (int );
bool iseven(int number )

{
  return !(number%2);
}



int main()

{
   int a;
   for(int i = 1;i<=9;i++)
   {
        cout<<"Enter an integer: ";
       cin>>a;
      if(iseven(a))
        cout<<a<<"is an odd\n";
      else
        cout<<a<<"is an even\n";
   }

    return 0;
}
