#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPalindrome(int n){
int num =n, RevrsNum =0, tmpNum =0;
 while (num !=0)
   {
   tmpNum = num%10;
   RevrsNum = RevrsNum*10 + tmpNum;
   num /=10;
   }
 if (RevrsNum == n)
   {
      return 1;
   }
 else return 0;
 }


int isArmstrong(int x){
   int i,tmpNum,num;
i=0;
tmpNum =x;
while (tmpNum!=0)
   {
      tmpNum= tmpNum/10;
      i++;
   }
tmpNum=0;
num =x;
while (num!=0)
   {
      tmpNum += pow((double)(num%10),(double)i);
       num/= 10; 
   }
if (tmpNum == x)
   {
      return 1;
   }
 else return 0;
 } 
