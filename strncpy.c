#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str1[10], str2[10];
    scanf("%s %s %d", &str1, &str2, &n);

    // strncpy to take the last three char from the str2
    printf("the copy of string is %s", strncpy(str1,str2,n));
}