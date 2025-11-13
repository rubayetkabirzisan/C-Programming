//Write a program that takes two integer and display sum
#include<stdio.h>
int main()
{
  int num1,num2,sum;
  float avg;
  printf("Enter two numbers : ");
  scanf("%d %d",&num1,&num2);
  sum = num1 + num2;
  printf("The sum is = %d\n",sum);
  avg=sum/(float)2;// type casting
  printf("The average is = %.2f\n",avg);
return 0;
}
