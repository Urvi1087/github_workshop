#include<stdio.h>
int main()
{
   float marks, total;
   printf("Enter the marks scored: ");
   scanf("%d", &marks);
   printf("Enter the total marks: ");
   scanf("%d", &total);
   float percentage;
   percentage=(marks/total)*100;
   printf("The percentage is %f", percentage);
}
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  if (num>0)
  {
  printf("The number is positive.");
  }
  if (num<0)
  {
  printf("The number is negative.");
  }
  if (num==0)
  {
  printf("The number is 0: ");
  }
}
