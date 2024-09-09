#include <stdio.h>

int main()
{
    int i=0,j=0;
    j=i++ + ++i;
    printf("%d\n",j);
    printf("%d",i);
}  