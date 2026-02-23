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