void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
void reach_error(void)
{
  assert(0);
}

extern int __VERIFIER_nondet_int(char *);
extern _Bool __VERIFIER_nondet_bool(char *);
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    reach_error();
  }

}

int main()
{
  int j = __VERIFIER_nondet_int("j");
  int k = __VERIFIER_nondet_int("k");
  int n = __VERIFIER_nondet_int("n");
  if (!__logand(__logand(j == 0, k == n), n > 0))
    return 0;

  while (__logand(j < n, n > 0))
  {
    j++;
    k--;
  }

  __VERIFIER_assert(k == 0);
  return 0;
}
