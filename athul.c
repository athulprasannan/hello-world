#include<stdio.h>
void main()
{
 long long int a;
 scand("%lld",&a);
 if(a==0)
 printf("number is zero");
 else if(a>0)
 printf("number is positive");
 else if(a<0)
 printf("number is negative");
} 
