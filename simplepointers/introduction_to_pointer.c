
#include <stdio.h>

int main()
{
  int x =90; int *ptr = &x;
  int *y = &x;
  int **z = &y;
  printf("The size of the integer is %lu bytes \n",sizeof(x));
  printf("The size of the pointer is %lu bytes \n",sizeof(ptr));
  printf("The size of y           is %lu bytes \n",sizeof(y));
  printf("The size of *y          is %lu bytes \n",sizeof(*y));
  printf("The size of &y          is %lu bytes \n",sizeof(&y));
  printf("The size of z           is %lu bytes \n",sizeof(z));
  printf("The size of *z          is %lu bytes \n",sizeof(*z));
  printf("The size of **z         is %lu bytes \n",sizeof(**z));
  printf("The size of &z          is %lu bytes \n",sizeof(&z));
  return 0;
}
