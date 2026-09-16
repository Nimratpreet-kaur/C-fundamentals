//sliding window technique(find max sum of subarray)
#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n,w,current ,max,max_start_index;
    max=INT_MIN;
    printf("Enter the number of elements of array: ");
    if(scanf("%d",&n) !=1) return 1;
    printf("Enter size of subarray: ");
    if(scanf("%d",&w) !=1) return 1;
    int a[n];
    for(i = 0;i<n;i++)
    {
        printf("Enter element %d of array: ",i+1);
        scanf("%d",&a[i]);
    }
    current =0;
    for(int i=0;i<w;i++)
    {
        current += a[i];
    }
    max=current;
    for(i=1;i<=n-w;i++)
    {
        current = current -a[i-1] + a[i+w-1];
        if(current >max)
        {
            max=current;
            max_start_index=i;
        }
    }
    printf("Maximum sum is %d and from element %d to %d",max,(max_start_index+1),(max_start_index +w));
    return 0;
}
