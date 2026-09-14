#include<stdio.h>
#include<math.h>
// find sum of first n natural numbers.
int sum(int n);
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("Sum of first n natural numbers is : %d \n",sum(n));
    return 0;
}
int sum(int n)
{
    if ( n == 1 )//base case (condition that stops recurtion)
    {
        return 1;
    }
   int sumNm1= sum(n-1);//sunNm1 is sum of n - 1

   int sumN =sumNm1 + n ;
   return sumN;
        
    }
    //iteration has infinite loop while recurtion has stack overflow

