#include<stdio.h>
#include<stdlib.h>
int main()
{
  float mark;
  printf("enter your mark: ");
  scanf("%f",&mark);
  if(mark>=50 && mark<101)
  {
    printf("passed");
  }
  else if(mark<101)
  {
    printf("failed");
  }

  if(mark>100)
  {
    printf("enter a mark between 0 to 100");
  }
}
