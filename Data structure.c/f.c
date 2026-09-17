//linear search
#include<stdio.h>
int main()
{
    int i,comp;
    int position;
    int arr[]= {12,23,2,3,14,56,33,78,66,45};
    comp=3;//number you wish to find;
    int find=-1;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==comp)
        {
            find=1;
            position = i+1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(find=1)
    {
        printf("Number %d found on position %d",comp,position);
    }
    else{
        printf("Number not Found");
    }
    return 0;
}