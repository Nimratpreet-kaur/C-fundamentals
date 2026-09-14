#include <stdio.h>
void sum(int a, int b);
void printTable(int n);
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);
    sum(a, b);
    int n;
    printf("Enter a number you want to write table of : ");
    scanf("%d", &n);
    printTable(n); // actual parameter/argument
    return 0;
}
void sum(int a, int b)
{
    printf("sum is %d \n", a + b);
}
void printTable(int n) // formal parameter/parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
}
/*
argument = value passed in function call 
parameter = values in function declararion and definition
argument = used to send value
parameter = to recieve value
argument = actual parameter 
parameter = formal parameter
*/