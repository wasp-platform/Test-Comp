#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

int f(int x, int y)
{
    int* x_ref = alloca(sizeof(int));
    int* y_ref = alloca(sizeof(int));
    int* flag = alloca(sizeof(int));
    int* c = alloca(sizeof(int));
    *x_ref = x;
    *y_ref = y;
    *flag = 1;
    *c = 0;
    while (*flag) {
        *flag = ((*x_ref)++ < *y_ref);
        *c = *c + 1;
    }
    return *c;
}

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  return f(x,y);
}
