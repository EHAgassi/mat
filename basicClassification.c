#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define FALSE 0;
#define TRUE 1;

int factorial(int n);


int isPrime(int num){
int i;
 for (i = 2; i<num;i++)
    {
        if (num%i==0)
        {
        return FALSE;
        }
    }
        return TRUE;  
}

int isStrong(int x){
    int tmpNum, rmndr,sum;
    tmpNum = x;

    while (tmpNum !=0)
    {
        rmndr =0;
        rmndr = tmpNum%10;
        sum += factorial((double)rmndr);
        tmpNum /= 10;
    }

    if (sum == x)
    {
        return TRUE;
    }
    else return FALSE;
    


}
 int factorial(int n){
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n ;
 }
