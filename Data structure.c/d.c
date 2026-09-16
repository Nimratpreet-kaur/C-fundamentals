// how to remove duplicate element in sorted array
#include<stdio.h>
int main()
{
    int n,i;
    printf("Number of elements in sorted array: ");
    scanf("%d",&n);
    int arr[n],copy[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    copy[0]=arr[0];
    
    int m=0;
    for(i =1;i<n;i++)
    {
        if(arr[i]!=copy[m])
        {
            copy[m+1]=arr[i];
            m++;
        }
    }
    for(i=0;i<=m;i++)
    {
        printf("%d ",copy[i]);
    }
    return 0;
}