#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num,i,temp;
  printf("enter a number");
  scanf("%d",&num);
  for(i=1;i<=10;i++)
  {
    temp=i*num;
    printf("%d x %d = %d\n",i,num,temp);
  }
}
