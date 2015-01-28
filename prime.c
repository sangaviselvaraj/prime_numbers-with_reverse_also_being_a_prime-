#include<stdio.h>
void main()
{
  int i,j;

    for(i=1;i<=1015;i++)
    {
        if(isprime(i)&&(isprime(reverse(i))))
        {
            printf("%d \n",i);
        }
    }
}

int isprime(int m)
{
int i;
    for(i=2;i<=m/2;i++)
    {
       if(m%i==0)
       return 0;
    }
    return 1;
}

int reverse(int n)
{

    int rev;
    int digit;
    rev=0;
    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        rev=digit+10*rev;
    }
    return rev;
}

