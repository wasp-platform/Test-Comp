extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "in-de51.c", 3, "reach_error");
}

extern unsigned int __VERIFIER_nondet_uint(char *);
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

int main()
{
  unsigned int n = __VERIFIER_nondet_uint("n");
  unsigned int x = n;
  unsigned int y = 0;
  unsigned int z;
  while (x > 0)
  {
    x--;
    y++;
  }

  z = y;
  while (z > 0)
  {
    x++;
    z--;
  }

  while (y > 0)
  {
    y--;
    z++;
  }

  while (x > 0)
  {
    x--;
    y++;
  }

  while (z > 0)
  {
    x++;
    z--;
  }

  __VERIFIER_assert(x == n);
  return 0;
}

