#include <stdio.h>
#include <stdlib.h>

//CONSTANTS
const int PN_IS_TRUE = 1;
const int PN_IS_FALSE = 0;

//CODES

int isPrime(int x){
    int i;
    if (x < 2)
    {
        return PN_IS_FALSE;
    }
    for(i=2;i<x;i++)
    {
        if (x%i==0)
        {
            return PN_IS_FALSE;
        }
    }
    return PN_IS_TRUE;
};

int isNotPrime(int x){
    int i;
    if (x < 2)
    {
        return PN_IS_TRUE;
    }
    for(i=2;i<x;i++)
    {
        if (x%i==0)
        {
            return PN_IS_TRUE;
        }
    }
    return PN_IS_FALSE;
};

void printPrimeListA(int start, int finish){
    int i;
    for(i=start;i<=finish;i++)
    {
        if(isPrime(i))
            printf("%d ",i);
    }
};

void printPrimeListB(int start, int totalPrimeNumber){
    int i,counter=0;
    for(i=start;counter<totalPrimeNumber;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
            counter++;
        }
    }
};

void printPrimeListC(int finish){
    printPrimeListA(1,finish);
};
