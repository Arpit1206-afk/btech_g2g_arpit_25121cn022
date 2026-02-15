#include<stdio.h>

int main ()
{
    float Area,C,r;
 
    printf("enter radius of circle:");
    scanf("%f", &r);

       Area=3.14*r*r;
       C=2*3.14*r;    

    printf("area of circle:%f\n", Area);
    printf("circufarence of circle:%f", C);
    return 0;
}