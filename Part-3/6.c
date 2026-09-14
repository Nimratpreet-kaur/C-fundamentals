#include <stdio.h>
// recursion
void printHW(int count);
int main()
{
    printHW(5);
    return 0;
}
void printHW(int count) // recursion function

{
    if (count == 0)
    {
        return;
    }
    else
    {
        printf("Hello World \n");
        printHW(count - 1);
    }
}