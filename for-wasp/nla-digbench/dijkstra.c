extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "dijkstra.c", 5, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
    }

  }

  return;
}

int main()
{
  int n;
  int p;
  int q;
  int r;
  int h;
  n = __VERIFIER_nondet_int("n");
  p = 0;
  q = 1;
  r = n;
  h = 0;
  while (1)
  {
    if (!(q <= n))
      break;

    q = 4 * q;
  }

  while (1)
  {
    __VERIFIER_assert(r < ((2 * p) + q));
    __VERIFIER_assert(((p * p) + (r * q)) == (n * q));
    __VERIFIER_assert(((((((((h * h) * h) - (((12 * h) * n) * q)) + (((16 * n) * p) * q)) - ((h * q) * q)) - (((4 * p) * q) * q)) + (((12 * h) * q) * r)) - (((16 * p) * q) * r)) == 0);
    __VERIFIER_assert(((((((((((h * h) * n) - (((4 * h) * n) * p)) + ((4 * (n * n)) * q)) - ((n * q) * q)) - ((h * h) * r)) + (((4 * h) * p) * r)) - (((8 * n) * q) * r)) + ((q * q) * r)) + (((4 * q) * r) * r)) == 0);
    __VERIFIER_assert((((((((h * h) * p) - (((4 * h) * n) * q)) + (((4 * n) * p) * q)) - ((p * q) * q)) + (((4 * h) * q) * r)) - (((4 * p) * q) * r)) == 0);
    __VERIFIER_assert((((p * p) - (n * q)) + (q * r)) == 0);
    if (!(q != 1))
      break;

    q = q / 4;
    h = p + q;
    p = p / 2;
    if (r >= h)
    {
      p = p + q;
      r = r - h;
    }

  }

  __VERIFIER_assert(((((((((h * h) * h) - ((12 * h) * n)) + ((16 * n) * p)) + ((12 * h) * r)) - ((16 * p) * r)) - h) - (4 * p)) == 0);
  __VERIFIER_assert((((p * p) - n) + r) == 0);
  __VERIFIER_assert((((((((h * h) * p) - ((4 * h) * n)) + ((4 * n) * p)) + ((4 * h) * r)) - ((4 * p) * r)) - p) == 0);
  return 0;
}
