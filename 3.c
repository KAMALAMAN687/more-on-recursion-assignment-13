#include<stdio.h>
int square(int a);
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("%d",square(a));
    return 0;
}
int square(int a)
{
    if (a==1)
    return 1;
    return a*a+square(a-1);
}