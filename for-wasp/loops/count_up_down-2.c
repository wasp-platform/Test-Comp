extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "count_up_down-2.c", 3, "reach_error");
}

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

unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  unsigned int n = __VERIFIER_nondet_uint("n");
  unsigned int x = n;
  unsigned int y = 0;
  while (x > 0)
  {
    x--;
    y++;
  }

  __VERIFIER_assert(y != n);
}

