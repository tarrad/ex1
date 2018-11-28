#include <stdio.h>

int main(void)
{
	int userNumber = 0;
	int follNumber = 0;
	printf("\n pliz clik a number:\n");
	follNumber = scanf("%d", &userNumber);
	
	if(userNumber>=0)
	{
		printf ("the foll number is:%d\n",userNumber);
	}
	else
	{
		printf("the foll number is:%d \n", userNumber*-1);
	}


	
	return(0);

	
}