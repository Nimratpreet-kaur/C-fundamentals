// binary search
#include <stdio.h>
int main()
{
    int arr[] = {1, 3, 4, 5, 8, 9, 10, 14, 16, 23, 33, 40};
    int n = 12;
    int E = 11;
    int S = 0;
    int search;
    int found = 0;
    printf("Enter number you want to search:");
    scanf("%d", &search);
    while (S <= E)
    {
        int mid = (S + E) / 2;
        if (arr[mid] < search)
        {
            S = mid + 1;
        }
        else if (arr[mid] > search)
        {
            E = mid - 1;
        }
        else if (arr[mid] == search)
        {
            found = 1;
            printf("Element %d found on position %d", search, mid+1);
            break;
        }
    }

    if (!found)
    {
        printf("Number not found");
    }
    return 0;
}