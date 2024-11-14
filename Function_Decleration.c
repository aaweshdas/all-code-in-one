#include <stdio.h>
int a,b,c; // global variables
int main()
{
   // int a,b,c;// local variables
    printf("\nenter the value");
    scanf("%d%d",&a, &b);
    add(); //calling
}


add() //called
{
    c = a + b;
    printf("%d",c);
}