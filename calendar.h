#ifndef CALENDAR_H_INCLUDED
#define CALENDAR_H_INCLUDED

/*
** calendar.h is a file made by Daffa Abiyyu (aka affaD, previously Daffa the Mage)
** This file is meant to extend C functionality by adding functions related to calendar manipulation
** Currently supports ENG and IDN languages
*/

struct calendar
{
    ///Unwritable data, technically. Sadly C lacks limiter for some reasons
    int date;
    int month;
    int year;
    short int GregorianMode;
};

///Constructor
struct calendar ConstructCalendar(int date,int month, int year, short int isGreg);

///Functions
short int isLeap(struct calendar cal);
void printCal(struct calendar);

#endif // CALENDAR_H_INCLUDED
