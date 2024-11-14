#include <stdio.h>
int main()
{
    int a=2;
    int b=3, c;
    printf("\nbefore swping value =%d , b=%d", a,b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swping value =%d , b=%d", a,b);
    return 0;
}
/* #include <stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter the value a\n");
    scanf("%d",&a);
    printf("Please enter the value b\n");
    scanf("%d",&b);
    printf("\nbefore swping value =%d , b=%d", a,b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swping value =%d , b=%d", a,b);
    return 0;
}*/