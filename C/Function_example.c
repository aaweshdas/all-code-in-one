#include <stdio.h>
// funtion decleration 
int sum(int a,int b);
int main()
{
  
    int a,b;
    printf("enter the number:");
    scanf("%d %d", &a, &b);
    printf("The sub is :%d", sum(a,b)); // function calling 
}
// function defination 
int sum(int a, int b)
{
    int c;
    c=a+b;
}   