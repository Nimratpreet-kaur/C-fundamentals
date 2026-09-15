//Maximum sum subarray
#include<stdio.h>
#include<limits.h>
int main()
{
    int n,m;
    printf("Enter number of elements of array: ");
    if(scanf("%d",&n) != 1)return 1;
    printf("Enter size of subarray: ");
    if(scanf("%d",&m) !=1)return 1;
    int arr[n];
    int current,i,j,max_subarr_index=0;
    int max= INT_MIN;
    
    for(i=0;i<n;i++)
    {
        printf("Enter element %d of array: ",i+1);
        if(scanf("%d",&arr[i]) != 1)return 1;
    }
    for(i=0;i<=n-m;i++)
    {
        current =0;
        for(j=i;j<=i+m-1;j++)
        {
            current+=arr[j];
        }
        if(current > max)
        {
            max=current;
            max_subarr_index = i;
        }
    }
    printf("Maximum sum is %d from element %d to %d\n",max,(max_subarr_index+1),(max_subarr_index+m));
    return 0;
}