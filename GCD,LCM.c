#include<stdio.h>
int main()
{
    int n1,n2,a,b;
    scanf("%d %d",&n1,&n2);
    a=n1;
    b=n2;
    while(n2!=0)
    {
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    int gcd =n1;
    printf("GCD=%d\n",gcd);
    int lcm=(a*b)/gcd;
    printf("LCM=%d",lcm);
  getch();

}
