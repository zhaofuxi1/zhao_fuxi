
#include <iostream>
using namespace std;

int main()
{
    int i;


    bool breakOut = false;


    for ( i = 1; ( i <= 10 ) && ( !breakOut ); i++ )
    {
        if ( i== 7 )
            breakOut = true;
        cout <<i;
    }
    cout << "\n���ڷ���һ��'break'���� ������ǰ�˳� "
        << endl;
}
