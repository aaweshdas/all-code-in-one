#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter the value a = %d\n");
    scanf("%d",&a);
    printf("Please enter the value b = %d\n");
    scanf("%d",&b);
    printf("\nbefore swping value =%d , b=%d", a,b);
    a=c;
    b=a;
    c=b;
    printf("\nafter swping value =%d , b=%d", a,b);
    return 0;
}
