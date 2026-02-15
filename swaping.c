#include<stdio.h>
int main()
{
    int a,b,var;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("before swaping a=%d b=%d\n",a,b);
    var=a;
    a=b;
    b=var;
    printf("after swaping a=%d b=%d",a,b);
    return 0;
}