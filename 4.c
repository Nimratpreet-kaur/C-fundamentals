#include<stdio.h>
#include<math.h>
float square(int n);
int main()
{
    int n;
    printf("Enter a number you want to square: ");
    scanf("%d", &n);
    square(n);
    return 0;
}
float square(int n)
{
    printf("%f", pow(n , 2));
    //other way
    //int square = pow(n,2);
   // printf("Square is %d \n", square);
}