#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <string>
using namespace std;
class Date
{
public:
     explicit Date(int month,int day, int year);
     void setmonth(int);
     int getmonth();

     void setday(int);
     int getday();

     void setyear(int);
     int getyear();

     void displayMessage();
private:
     int month;
     int day;
     int year;



};

#endif // DATE_H_INCLUDED
