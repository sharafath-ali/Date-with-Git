#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int j,i,len;
  char str[100];
  for(j=0;j<100;j++)
  {
    int temp=0;
  printf("\nenter a string ");
  scanf("%s",str);
  printf("%s\n",str);
  len = strlen(str);
  for(i=0;i<len;i++)
  {
    if(str[i]!=str[len-i-1])
    {
      temp=1;
      break;
    }
  }
  if(temp==0)
  {
    printf(" String is a palindrome" );
  }
  else
  {
     printf("String is not a palindrome");
  }
}
}
