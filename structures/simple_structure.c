
#include <stdio.h>

struct banking
{
	int savings;
	float balance;
};

int main()
{
	struct banking gurusavings;
        gurusavings.savings = 1;
	gurusavings.balance = 30000000.00;
	printf("%d  %f  \n",gurusavings.savings, gurusavings.balance);
	return 0;
}
