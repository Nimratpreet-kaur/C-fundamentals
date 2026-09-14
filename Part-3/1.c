#include<stdio.h>
// declaration / prototype
void printhello();
void printbye();
int main()
{
    //function call
    printhello();
    printbye();
    return 0;
}
// funltion defination
void printhello()
{
    printf("Hello! \n");
}
void printbye()
{
    printf("Good Bye!\n");
}