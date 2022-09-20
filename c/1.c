
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i,limit;
	int a[1000];
    printf("enter array limit");
    fflush( stdout );
    scanf("%d",&limit);
	printf("enter elements in the array");
	fflush( stdout );
	for(i=0;i<=limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter values are:");
	for(i=0;i<=limit;i++)
		{
			printf("%d,",a[i]);



		}
	return EXIT_SUCCESS;
}
