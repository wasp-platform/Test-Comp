extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "gcd_1.c", 3, "reach_error");
}

extern char __VERIFIER_nondet_char(char *);
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
}

signed char gcd_test(signed char a, signed char b)
{
  signed char t;
  if (a < 0)
    a = -a;

  if (b < 0)
    b = -b;

  while (b != 0)
  {
    t = b;
    b = a % b;
    a = t;
  }

  return a;
}

int main()
{
  signed char x = __VERIFIER_nondet_char("x");
  signed char y = __VERIFIER_nondet_char("y");
  signed char g;
  if (__logand(y > 0, (x % y) == 0))
  {
    g = gcd_test(x, y);
    __VERIFIER_assert(g == y);
  }

  return 0;
}

