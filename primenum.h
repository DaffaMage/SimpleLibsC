#ifndef PRIMENUM_H_INCLUDED
#define PRIMENUM_H_INCLUDED

/*
** primenum.h is a file made by Daffa the Mage (aka DaffaMage)
** This file is meant to extend C functionality by adding functions related to Prime Number
*/

/*
** API
** isPrime take int and return a boolean in "int" form
** isNotPrime is the same as isPrime, but reversed check
** printPrimeListA/B/C takes some int arguments that will be used as parameter for the printed prime numbers
*/

int isPrime(int x); //check a number if it's prime or not (return 1 when true and 0 when false)
int isNotPrime(int x); //a reversal check of isPrime
void printPrimeListA(int start, int finish);//prints a list of prime numbers from start to end
void printPrimeListB(int start, int totalPrimeNumber);//prints a list of prime numbers from start, with a total of totalPrimeNumber
void printPrimeListC(int finish);//prints prime number from 2 to finish

#endif // PRIMENUM_H_INCLUDED
