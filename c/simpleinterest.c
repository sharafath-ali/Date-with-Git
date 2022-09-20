#include<stdio.h>
#include<stdlib.h>
int main()
{
  int P;
  float R,N,SI;
  printf("enter principal\n" );
  scanf("%d",&P);
  printf("enter interest rate\n");
  scanf("%f",&R);
  printf("enter number of years \n" );
  scanf("%f",&N );
  SI=(P*R*N)/100;
  printf("based on your inputs simple interest =%f",SI);

}
