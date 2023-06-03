
#include <stdio.h>

int main()
{
  int x =90; 
  int *ptr = &x;
  printf("The size of the integer is %lu bytes \n",sizeof(x));
  printf("The size of the pointer is %lu bytes \n",sizeof(ptr));
  return 0;
}
