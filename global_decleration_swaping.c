#include <stdio.h>
int main()
{
   swap(); // calling
}

swap() //called
{
 int a,b,c;
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf(" the new numbers are%d %d",a,b);
}
