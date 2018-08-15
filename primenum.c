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

int PRIV_lowerPrime(int x)
{
    int i;
    for(i=x;i>1;i--)
    {
        if(isPrime(i))
            return i;
    }
    return 0;
}

int PRIV_higherPrime(int x)
{
    int i=x;
    while (1)
    {
        if (isPrime(i))
            return i;
        i++;
    }
}

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

int getNearestPrime(int x){
    if (isPrime(x))
    {
        return x;
    }
    else
    {
        int a,b;
        a = PRIV_lowerPrime(x);
        b = PRIV_higherPrime(x);
        if (x-a < b-x)
            return a;
        else
            return b;
    }
};

int nthPrime(int x){
    int i,curPrime,curPrimeNum=0;
    for(i=2;curPrimeNum<x;i++)
    {
        if(isPrime(i))
        {
            curPrime = i;
            curPrimeNum++;
        }
        if (curPrimeNum==x)
        {
            return curPrime;
        }
    }
};
