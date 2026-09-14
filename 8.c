#include<stdio.h>
#include<math.h>
// factorial of n ;
int fac(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial is  %d \n ",fac(n));
}
int fac(int n)
{
    if ( n == 0 )
    {
        return 1;
    }
    int facNm1 = fac(n-1);
    int facN = facNm1 * n ;
    return facN;
}