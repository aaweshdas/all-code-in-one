#include <Stdio.h>
int main()
{
    int p,t,r,S;
     printf("Please enter the Value of p and t and r = ");
     scanf("%d %d %d", &p , &t ,&r);
     printf("Simple Interest %d", S =(p * t * r) / 100);
     return 0;
}
/*
#include <stdio.h>

int main() {
    int p, t, r;
    printf("Please enter the values of p, t, and r: ");
    scanf("%d %d %d", &p, &t, &r);
    int S = (p * t * r) / 100;
    printf("Simple Interest: %d\n", S);
    return 0;
}
*/