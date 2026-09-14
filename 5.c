#include <stdio.h>
#include <math.h>
float area_square(float side);
float area_rec(float l, float b);
float area_circle(float r);
int main()
{
    float r, l, b, side;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of circle : %f \n",area_circle(r));
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    printf("Area of rectangle : %f \n",area_rec(l,b));
    printf("Enter side of square: ");
    scanf("%f",&side);
    printf("Area of square : %f \n",area_square(side));
    return 0;
}
float area_square(float side)
{
    return side*side;
}
float area_rec(float l, float b)
{
    return l*b;
}
float area_circle(float r)
{
    return 3.14 * pow(r, 2);
}
