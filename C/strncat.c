#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str1[10], str2[10];
    scanf("%s %s %d", &str1, &str2, &n);
    printf("\n%s", strncat(str2,str1,n));
}