#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float per;
    printf("enter number of chem:");
    scanf("%d",&a);
    printf("enter number of phy:");
    scanf("%d",&b);
    printf("enter number of math:");
    scanf("%d",&c);
    printf("enter number of eng:");
    scanf("%d",&d);
    printf("enter number of computers:");
    scanf("%d",&e);
    per=(a+b+c+d+e)/5;
    printf("the percentage of sum of 5 sub=%.2f",per);
    if(per>=90 && per<100)
        printf("grade is A");
    else if(per>=80 && per<90)
        printf("grade is B");
    else if(per>=60 && per<80)
        printf("grade is C");
    else
        printf("grade is D");
    return 0;
}