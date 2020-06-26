
/* This moves the pointer by whole array */

#include <stdio.h>
int main()
{
	int numarray[3] = {23,9,7};
	int (* ptr)[3] = &numarray;
	printf("%d  ",*(ptr[0]));
	printf("%p  ",ptr[0]);
	printf("%p  ",ptr[1]);
	printf("\n");
	return 0;
}
