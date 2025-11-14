#include<stdio.h>
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
