/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void)
{
  int i,mark,sum=0;
  float avg;

  for(i=0;i<2;i++)
    {
      printf("enter mark  :");
      scanf("%d",&mark);

      sum+=mark;
    }
  avg=sum/2.0;
  printf("average is :%.2f",avg);

  return 0;
  
}
