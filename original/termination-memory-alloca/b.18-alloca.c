#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

int test_fun(int x, int y)
{
    int* x_ref = alloca(sizeof(int));
    int* y_ref = alloca(sizeof(int));
    *x_ref = x;
    *y_ref = y;
    while ((*x_ref > 0) && (*y_ref > 0)) {
        if (*x_ref > *y_ref) {
            while (*x_ref > 0) {
                *x_ref = *x_ref - 1;
            }
        } else {
            while (*y_ref > 0) {
                *y_ref = *y_ref - 1;
            }
        }
    }

    // do not underflow in INT_MIN + INT_MIN
    if (*x_ref < 0 && *y_ref < 0)
        return 0;

    return *x_ref + *y_ref;
}

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  return test_fun(x,y);
}
