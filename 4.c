#include<stdio.h>
int main()
{
    int a ;
    printf("enterv a number");
    scanf("%d",&a);
    printf("%d",sumofdigits(a));
    return 0;
}
int sumofdigits(int n)
{
    int c;
    if(n==0)
    return 0;
    c=n%10;
    return c+sumofdigits(n/10);
}