//8.8
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    //a
    int SIZE = 5 ;
    unsigned int values[SIZE]={2,4,6,8,10};
    //b
    unsigned int *vPtr=&values[2];
    cout<<&values<<"\n";
    cout<<*vPtr<<"\n";
    //c
    for(int i =0;i<5 ; i++)
{
    cout<<values[i]<<' '<<endl;
}
//d
vPtr = values ;
vPtr = &values[0];

//e
 cout<<fixed<<showpoint<<setprecision(1);
 for(size_t i = 0 ; i<5;++i)
   {
       cout<<*(vPtr+i)<<' ';
   }
    cout<<endl;
//f
cout<<fixed<<showpoint<<setprecision(1);
 for(size_t i = 0 ; i<5;++i)
{
    cout<<*(values+i)<<' ';
}
 cout<<endl;


  //g
 cout<<fixed<<showpoint<<setprecision(1);
 for(size_t i = 0 ; i<5;++i)
cout<<vPtr[i]<<' ';

//h
cout<<
values[4]
<<*(values+4)
<<vPtr[4]
<<*(vPtr+4);
//i
//���õ�ַ�� 1002500+3*8=1002524�������ַ��ŵ�����8.
//j
//values[4]�ĵ�ַ��1002500+4*8=1002532.ִ��֮��vPtr�ĵ�ַ��1002532��4*8=1002500 �ڸĵ�ַ��ŵ���Ϊ2



    return 0;
}
