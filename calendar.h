#ifndef CALENDAR_H_INCLUDED
#define CALENDAR_H_INCLUDED

/*
** calendar.h is a file made by Daffa Abiyyu (aka affaD, previously Daffa the Mage)
** This file is meant to extend C functionality by adding functions related to calendar manipulation
** Currently supports ENG and IDN languages
*/

struct calendar
{
    ///Private data, technically. Sadly C lacks private for stupid reasons
    int date;
    int month;
    int year;
    short int GregorianMode;
};

///Constructor
struct calendar ConstructCalendar(int date,int month, int year, short int isGreg);

///Functions
short int isLeap(struct calendar cal);

#endif // CALENDAR_H_INCLUDED
