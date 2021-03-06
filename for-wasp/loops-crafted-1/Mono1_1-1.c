extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Mono1_1-1.c", 3, "reach_error");
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

}

int main(void)
{
  unsigned int x = 0;
  while (x < 100000000)
  {
    if (x < 10000000)
    {
      x++;
    }
    else
    {
      x += 2;
    }

  }

  __VERIFIER_assert(x == 100000001);
}

