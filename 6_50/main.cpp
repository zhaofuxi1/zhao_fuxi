//6_50
#include <iostream>

using namespace std;

int inttripleByVakue(int);
void  tripleByReference(int &);


int tripleByValue(int number)
{
    return number*3;
}

void tripleByReference(int &numberRef)
{
    numberRef=numberRef*3;
}



int main()
{
    int count;
    cout << "Enter a value for count: ";
    cin >> count;


    cout << "\nbefor tripleByValue() is: "
         << count << "\nreturned from tripleByValue() is: "
         << tripleByValue( count )
         << "\n (in main) after tripleCallByValue() is: "
         << count;



    cout << "\n\n before call to tripleByReference() is: "
         << count << endl;
    tripleByReference( count );
    cout << "Value of count (in main) after call to "
         << "tripleByReference() is: " << count << endl;

}
