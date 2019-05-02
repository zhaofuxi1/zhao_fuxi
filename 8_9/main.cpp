//8_9
#include <iostream>

using namespace std;

int main()
{
   long value1=200000 ;
   long value2 ;
   long *longPtr = nullptr;
   longPtr = &value1;
   cout<<"The value of *longPtr is: "<<*longPtr<<endl;

 value2 = *longPtr;
   cout<<"The value of value2 is: "<<value2<<endl;
   cout<<"The address of value1 is: "<<&value1<<endl;
   cout<<"The address stored in vPtr is: "<<longPtr<<endl;
}
