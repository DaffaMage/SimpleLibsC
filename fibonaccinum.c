#include <stdio.h>
#include <stdlib.h>

// CODES

int PRIV_Fib(int x)
{
    if (x<=0)
        return 0;
    else if (x==1)
        return 1;
    else
        return PRIV_Fib(x-1)+PRIV_Fib(x-2);
}

void buildFibonacciList(int start, int finish)
{
    int i=1,j=0;
    while(1)
    {
        j = PRIV_Fib(i);
        if (j>=start && j<=finish)
        {
            printf("%d ",j);
        }
        if (j>finish)
        {
            break;
        }
        i++;
    }
}

void buildFibonacciListB(int finish)
{
    buildFibonacciList(1,finish);
}
