#include <stdio.h>
int main()
{
    int a=10, b=20;
    printf("before swap value : %d \t %d", a,b);
    swap(a,b);
}
swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

}