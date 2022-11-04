#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("%d",oddnatural(a));
    return 0;

}
int oddnatural(int a)
{
    if (a==1)
    return 1;
    return (2*a-1)+oddnatural(a-1);

}
