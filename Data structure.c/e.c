//deleting  duplicate element by keeping in place
#include<stdio.h>
int main()
{
    int n,comp=0,i;
    printf("Number of elements of array: ");
    if(scanf("%d",&n) !=1)return 1;
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[comp])
        {
            continue;
        }
        else
        {
            comp ++;
            arr[comp]=arr[i];
        }
    }
    printf("Sorted array without duplicate element:\n");
    for(i=0;i<=comp;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}