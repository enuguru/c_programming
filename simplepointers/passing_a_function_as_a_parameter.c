
#include <stdio.h>

int call_func(void (* new_fptr) (void))
{
    int p = 34;
    p = p + 57;
    (*new_fptr)();
    return p;

}


void another_function()
{
    printf("This is another function\n");
}


int main()
{
    int q;
    void (* func_ptr_two)();
    int (* func_ptr)(void (*) (void));
    func_ptr = call_func;
    func_ptr_two = another_function;
    q = (* func_ptr)(func_ptr_two);
    printf("%d\n",q);
    return 0;
}
