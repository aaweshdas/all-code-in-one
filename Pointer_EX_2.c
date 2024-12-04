#include <stdio.h>
int main()
{
    int b=10;
    int *a = &b;
    printf("%d %d", *a, b);
    return 0;
}