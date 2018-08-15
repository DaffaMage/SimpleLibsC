#ifndef FIBONACCINUM_H_INCLUDED
#define FIBONACCINUM_H_INCLUDED

/*
** fibonaccinum.h is a file made by Daffa the Mage (aka DaffaMage)
** This file is meant to extend C functionality by adding functions related to Fibonacci Number
*/

/*
** API
** buildFibonacciList takes 2 integers, one as start and other as finish
** --> generates numbers between 2 points
*/

void buildFibonacciList(int start, int finish);

/*
** PRIVATE FUNCTIONS
*/

int PRIV_Fib(int x);

#endif // FIBONACCINUM_H_INCLUDED
