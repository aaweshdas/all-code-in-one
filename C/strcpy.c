#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10], str2[10];
    scanf("%s %s", &str1, &str2);
    // strcpy to display the str2 in str1
    printf("the copy of string is %s\n", strcpy(str1,str2));
}