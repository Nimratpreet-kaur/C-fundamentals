#include<stdio.h>
#include<math.h>
//write a function to conver celsius to fahrenheit
float conCtoF(float c);//convert celsius to fahrenheit
int main()
{
    int c;
    printf("Enter temperature in degree celsius : \n");
    scanf("%d",&c);
    printf("Temperature in fahrenheit is %f \n",conCtoF(c));
    return 0;
}
float conCtoF(float c )
{
    float f = (c*9/5) + 32;
    return f;
}