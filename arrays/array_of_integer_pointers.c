
#include <stdio.h>
int main()
{
	int numone, numtwo, numthree, count;
	numone = 5; 
	numtwo = 10; 
	numthree = 20;
	int *numarray[3] = {&numone, &numtwo, &numthree};
	for(count = 0; count < 3; count++)
	{
		printf("%d  ",*numarray[count]);

	}
	printf("\n");
	return 0;
}
