extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "copy-3-n-u.c", 3, "reach_error");
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
  int B[m][n][p];
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
        B[i][j][k] = __VERIFIER_nondet_int("B[i][j][k]");
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
        A[i][j][k] = B[i][j][k];
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
        __VERIFIER_assert(A[i][j][k] == B[i][j][k]);
        k = k + 1;
      }

      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

