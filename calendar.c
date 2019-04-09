#include <stdio.h>
#include <stdlib.h>
#include "calendar.h"

// CODES
short int isLeap(struct calendar cal)
{
    short int leap;
    if (cal.GregorianMode && ((cal.year%4==0 && cal.year%100!=0) || cal.year%400==0))
    {
        leap = 1;
    }
    else if (!cal.GregorianMode && cal.year%4==0)
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    return leap;
}

struct calendar ConstructCalendar(int date,int month, int year, short int isGreg)
{
    struct calendar a;
    a.date = date;
    a.month = month;
    a.year = year;
    a.GregorianMode = isGreg;
    return a;
};
