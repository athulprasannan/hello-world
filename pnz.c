#include<stdio.h>
int main()
{
 long long int a;
 scanf("%lld",&a);
 if(a==0)
 printf("number is zero");
 else if(a>0)
 printf("number is positive");
 else if(a<0)
 printf("number is negative");
 return 0;
} 
