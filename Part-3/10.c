#include<stdio.h>
#include<math.h>
//to find percentage of a student from marks in science , mathematics and sanskrit
float percentage(float marks_gained);
int main()
{
    float sci,m,sans,marks_gained;
    printf("Enter your Science marks : \n");
    scanf("%f",&sci);
    printf("Enter your mathematics marks : \n");
    scanf("%f",&m);
    printf("Enter your Sanskrit marks : \n");
    scanf("%f",&sans);
    marks_gained = sci + m + sans ;
    printf("Your percentage : %f",percentage(marks_gained));
    return 0;
}
float percentage(float marks_gained)
{
   float percentage = marks_gained/3;
   return percentage; 
}