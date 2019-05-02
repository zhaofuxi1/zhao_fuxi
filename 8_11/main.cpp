//8.11
#include <iostream>

using namespace std;

int main()
{
   //a
   int z = 1;
   int *number = &z;
   cout<<*number<<endl;

   //b
   double *realPtr;
   long *integerPtr;
   *integerPtr= * realPtr;
 //c
   int*x,y;
   *x=y;

//d
   char s[] ={"this is a character array"};
  for(;*s!='\0';++s)
    cout<<*s<<' ' ;



  //e






    //f
    double a = 19.34;
    double *xPtr =&a;
    cout<<*xPtr<<endl;


}
