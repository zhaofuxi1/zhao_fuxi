#include <iostream>
using namespace std;

using namespace std;

int main()

{
    int y=0;
    double m = 0;
    double d = 0;
    double h = 0;
    double f = 0;
    double s = 0;
    double JD = 0;
    double mjd = 0;

    int  DOY= 0;


    cin>>y>>m>>d>>h>>f>>s;
    cout<<y<<"年"<<m<<"月"<<d<<"日"<<h<<"时"<<f<<"分"<<s<<"秒"<<endl;

    if(m<2)
    {
        m = m+12;
        y = y-1;
    }
    else
    {
        y = y;
        m=m;
    }


    cout.setf(ios::fixed,ios::floatfield);

    JD = 365.25*y +30.6001*(m+1) +d +h/24 +f/(24*60) +s/86400 +1720981.5;
    cout<<"儒略日："<<JD;
    mjd = JD-2400000.5;
    cout<<"约化儒略日："<<mjd;

    if (y % 4 == 0 && y % 100 != 0)//闰年
    {
        if (m == 1)
        {
            DOY = d;
        }

        else if (m == 2)
        {
            DOY = 31 + d;
        }

        else if (m == 3)
        {
            DOY = 31 + 29 + d;
        }

        else if (m == 4)
        {
            DOY = 31 * 2 + 29 + d;
        }

        else if (m == 5)
        {
            DOY = 31 * 2 + 29 + 30 + d;
        }

        else if (m == 6)
        {
            DOY = 31 * 3 + 29 + 30 + d;
        }

        else if (m == 7)
        {
            DOY = 31 * 3 + 29 + 30 * 2 + d;
        }

        else if (m == 8)
        {
            DOY = 31 * 4 + 29 + 30 * 2 + d;
        }

        else if (m == 9)
        {
            DOY = 31 * 5 + 29 + 30 * 2 + d;
        }

        else if (m == 10)
        {
            DOY = 31 * 5 + 29 + 30 * 3 + d;
        }

        else if (m == 11)
        {
            DOY = 31 * 6 + 29 + 30 * 3 + d;
        }

        else
        {
            DOY = 31 * 6 + 29 + 30 * 4 + d;
        }
    }

    else//非闰年
    {
        if (m == 1)
        {
            DOY = d;
        }

        else if (m == 2)
        {
            DOY = 31 + d;
        }

        else if (m == 3)
        {
            DOY = 31 + 28 + d;
        }

        else if (m == 4)
        {
            DOY = 31 * 2 + 28 + d;
        }

        else if (m == 5)
        {
            DOY = 31 * 2 + 28 + 30 + d;
        }

        else if (m == 6)
        {
            DOY = 31 * 3 + 28 + 30 + d;
        }

        else if (m == 7)
        {
            DOY = 31 * 3 + 28 + 30 * 2 + d;
        }

        else if (m == 8)
        {
            DOY = 31 * 4 + 28 + 30 * 2 + d;
        }

        else if (m == 9)
        {
            DOY = 31 * 5 + 28 + 30 * 2 + d;
        }

        else if (m == 10)
        {
            DOY = 31 * 5 + 28 + 30 * 3 + d;
        }

        else if (m == 11)
        {
            DOY = 31 * 6 + 28 + 30 * 3 + d;
        }

        else
        {
            DOY = 31 * 6 + 28 + 30 * 4 + d;
        }
    }

    cout << "年积日:" << DOY;











}
