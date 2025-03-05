#include <stdio.h>

int main()  
{
    int a{10},n,i;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]); 
    } 
    mergesort(a,l,h);
} 
mergesort(a,l,h)
{
    mid=i+h/2;
    mergesort(a,l,mid);
    mergesort(a,mid,h);
    merge()
}
