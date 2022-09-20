#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
float mark;
for(i=0;i<100;i++)
{
  printf("\nenter your mark:");
  scanf("%f",&mark);
   if(mark>=101)
   {
     printf("enter a percentage between 0 to 100 ");
   }
   else if(mark>=90)
   {
     printf("grade A");
   }
   else if(mark>=80)
   {
    printf("grade B");
   }
   else if(mark>=70)
   {
     printf("grade C" );
   }
   else if(mark>=60)
   {
     printf("grade D");
   }
   else if(mark>=50)
   {
     printf("grade E");
   }
   else if(mark<50)
   {
     printf("failed");
   }
}

}
