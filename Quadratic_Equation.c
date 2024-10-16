#include <stdio.h>
#include <math.h> 

int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter the a,b,c value: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
    printf("Roots are real and Equal. \n");
    r1=r2=(-b)/(2*a);
    printf("Root1=%.2f,Root2=%.2f",r1,r2);
    }
    else if(d>0)
    {
        printf("Root are real and Distinct .\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Root1=%.2f,Root2=%.2f",r1,r2);
    }
    else {
        printf("\nRoots are Imaginary");
    }
    return 0;
}