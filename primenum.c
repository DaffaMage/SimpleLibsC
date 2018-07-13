#include <stdio.h>
#include <stdlib.h>

//CONSTANTS
int IS_TRUE = 1;
int IS_FALSE = 0;

//CODES

int isPrime(int x){
    int i;
    for(i=2;i<x;i++)
    {
        if (x%i==0)
        {
            return IS_FALSE;
        }
    }
    return IS_TRUE;
};

int isNotPrime(int x){
    int i;
    for(i=2;i<x;i++)
    {
        if (x%i==0)
        {
            return IS_TRUE;
        }
    }
    return IS_FALSE;
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
    for(i=start;counter<=totalPrimeNumber;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
            counter++;
        }
    }
};

void printPrimeListC(int finish){
    int i;
    for(i=2;i<=finish;i++)
    {
        if(isPrime(i))
            printf("%d ",i);
    }
};
