extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "min-3-n-u.c", 3, "reach_error");
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

int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int j;
  int k;
  int m = 1000;
  int n = 1500;
  int p = 1800;
  int A[m][n][p];
  int min;
  i = 0;
  j = 0;
  k = 0;
  while (i < m)
  {
    j = 0;
    k = 0;
    while (j < n)
    {
      k = 0;
      while (k < p)
      {
        A[i][j][k] = __VERIFIER_nondet_int("A[i][j][k]");
        k = k + 1;
      }

      j = j + 1;
    }

    i = i + 1;
  }

  i = 0;
  j = 0;
  k = 0;
  min = A[0][0][0];
  while (i < m)
  {
    j = 0;
    k = 0;
    while (j < n)
    {
      k = 0;
      while (k < p)
      {
        if (A[i][j][k] < min)
        {
          min = A[i][j][k];
        }

        k = k + 1;
      }

      j = j + 1;
    }

    i = i + 1;
  }

  i = 0;
  j = 0;
  k = 0;
  while (i < m)
  {
    j = 0;
    k = 0;
    while (j < n)
    {
      k = 0;
      while (k < p)
      {
        __VERIFIER_assert(A[i][j][k] >= min);
        k = k + 1;
      }

      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

