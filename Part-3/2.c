#include <stdio.h>
/*
Write a function to print namaste
 if user is indian
 and bonjour if
 user is french
 */
void printnamaste();
void printbonjour();
int main()
{
    printf("Enter i if you are from india and f if france: ");
    char country;
    scanf("%c", &country);
    if (country == 'f')
    {
        printbonjour();
    }
    else if (country == 'i')
    {
        printnamaste();
    }
    return 0;
}
void printnamaste()
{
    printf("Namaste! \n");
}
void printbonjour()
{
    printf("Bonjour!\n");
}
