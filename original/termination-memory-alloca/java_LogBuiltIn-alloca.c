#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

int mlog(int x)
{
    int* x_ref = alloca(sizeof(int));
    int* res = alloca(sizeof(int));
    *x_ref = x;
    *res = 0;
    while (*x_ref > 1) {
        *x_ref = (*x_ref)/2;
        (*res)++;
    }
    return *res;
}

int main() {
  int x = __VERIFIER_nondet_int();
  return mlog(x);
}
