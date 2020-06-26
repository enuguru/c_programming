
/* This moves the address by one element in the array */

#include <stdio.h>
int main()
{
	int count; 
	int numarray[3] = {23,9,7};
	int *ptr = numarray;
	for(count = 0; count < 3; count++)
	{
		printf("%d  ",*(ptr+count));

	}
	printf("\n");
	return 0;
}
