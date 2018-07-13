#ifndef PRIMENUM_H_INCLUDED
#define PRIMENUM_H_INCLUDED


int isPrime(int x); //check a number if it's prime or not (return 1 when true and 0 when false)
int isNotPrime(int x); //a reversal check of isPrime (NOT EFFICIENT)
void printPrimeListA(int start, int finish);//prints a list of prime numbers from start to end
void printPrimeListB(int start, int totalPrimeNumber);//prints a list of prime numbers from start, with a total of totalPrimeNumber
void printPrimeListC(int finish);//prints prime number from 2 to finish

#endif // PRIMENUM_H_INCLUDED
