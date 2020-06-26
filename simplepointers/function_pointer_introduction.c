
#include <stdio.h>

int call_func()
{
    int p = 34;
    p = p + 57;
    return p;

}

int main()
{
    int q;
    int (*func_ptr)(void);
    func_ptr = call_func;
    q = (*func_ptr)();
    printf("%d\n",q);
    return 0;
}
