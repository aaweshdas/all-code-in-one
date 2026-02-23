#include <stdio.h>
void merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[20];
    i = low;
    j = mid + 1;
    k = low;
    while(i <= mid && j <= high)
    {
        if(a[i] >= a[j])
        {
            c[k++] = a[j++];
        }
        else
        {
            c[k++] = a[i++];
        }
    }
    while(i <= mid)
    {
        c[k++] = a[i++];
    }
    while(j <= high)
    {
        c[k++] = a[j++];
    }
    for(i = low; i <= high; i++)
    {
        a[i] = c[i];
    }
}    
int main()
{
    int a[20], i, n, low, high;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements into the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    low = 0;
    high = n-1;
    msortdiv(a, low, high);
    printf("\n array after getting merge sort: ");
    for(i=0; i<n; i++)    {
        printf("\n%d ", a[i]);
    }
    return 0;
}
void msortdiv(int a[], int low, int high)
{
    int mid;
    if(low != high)
    {
        mid = (low + high) / 2;
        msortdiv(a, low, mid);
        msortdiv(a, mid+1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
    int a[20], i, n, low, high;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements into the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    } 
    low = 0;
    high = n-1;
    msortdiv(a, low, high);
    printf("\n array after getting merge sort: ");
    for(i=0; i<n; i++)    {
        printf("\n%d ", a[i]);
    }
    return 0;
}