//2nd largest number in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of elements in array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    int max1,max2;
    if(a[0]>a[1])
    {
        max1=a[0];
        max2=a[1];
    }
    else
    {
        max1=a[1];
        max2=a[0];
    }
    for(int i=2;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
        {
            max2=a[i];
        }
    }
    printf("Maximum number : %d\n2nd Maximum number:%d\n",max1,max2);
    return 0;
}