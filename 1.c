 #include<stdio.h>
  int sumnatural(int a);
 int main()
 {
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("%d",sumnatural(a));
    return 0;

 }
 int sumnatural(int a)
 {
    int s;
     if(a==1)
     return 1;
     s=a+sumnatural(a-1);
     return s;

 }