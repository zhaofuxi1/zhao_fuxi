#include"Date.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date(int month,int day, int year)
{
    setmonth(month);
    setday(day);
    setyear(year);
}

void Date::setmonth(int month1)
{
    if(month>12)
        month = 1;
    else
        month = month1;
}
int Date::getmonth()
{
    return month;
}



void Date:: setday(int day1)
{
  day = day1;
}

int Date ::getday()
{
    return day;
}


void Date::setyear(int year1)
{
   year = year1;
}

int Date::getyear()
{
    return year;
}


void Date::displayMessage()
{
    cout<<month<<"/"<<day<<"/"<<year;
}
