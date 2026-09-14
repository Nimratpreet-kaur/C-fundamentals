// function to print n terms of the fibonacci sequence
#include <stdio.h>
#include <math.h>
int fib(int n);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("Fibonacci number %d is %d",n ,fib(n));
    return 0;
}
int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}