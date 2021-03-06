extern void abort(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float6.c", 4, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
int main()
{
  if (!(1.0 != 2.0))
  {
    reach_error();
    abort();
  }

  if (!(1.0 == 1.0))
  {
    reach_error();
    abort();
  }

  if (!(1.0 < 2.0))
  {
    reach_error();
    abort();
  }

  if (!(!((-1.0) < (-2.0))))
  {
    reach_error();
    abort();
  }

  if (!(2.0 > 1.0))
  {
    reach_error();
    abort();
  }

  if (!(!((-2.0) > (-1.0))))
  {
    reach_error();
    abort();
  }

  if (!(!(2.0 < 2.0)))
  {
    reach_error();
    abort();
  }

  if (!(!((-2.0) < (-2.0))))
  {
    reach_error();
    abort();
  }

  if (!(!(2.0 > 2.0)))
  {
    reach_error();
    abort();
  }

  if (!(!((-2.0) > (-2.0))))
  {
    reach_error();
    abort();
  }

  if (!(2.0 <= 2.0))
  {
    reach_error();
    abort();
  }

  if (!((-2.0) <= (-2.0)))
  {
    reach_error();
    abort();
  }

  if (!(2.0 >= 2.0))
  {
    reach_error();
    abort();
  }

  if (!((-2.0) >= (-2.0)))
  {
    reach_error();
    abort();
  }

  if (!(1.0 <= 2.0))
  {
    reach_error();
    abort();
  }

  if (!(!((-1.0) <= (-2.0))))
  {
    reach_error();
    abort();
  }

  if (!(2.0 >= 1.0))
  {
    reach_error();
    abort();
  }

  if (!(!((-2.0) >= (-1.0))))
  {
    reach_error();
    abort();
  }

  float a = __VERIFIER_nondet_float("a");
  float b = __VERIFIER_nondet_float("b");
  if (!__logand(a == 1, b == 2))
  {
    abort();
  }

  if (!(a != b))
  {
    reach_error();
    abort();
  }

  if (!(a == a))
  {
    reach_error();
    abort();
  }

  if (!(a < b))
  {
    reach_error();
    abort();
  }

  if (!(!((-a) < (-b))))
  {
    reach_error();
    abort();
  }

  if (!(b > a))
  {
    reach_error();
    abort();
  }

  if (!(!((-b) > (-a))))
  {
    reach_error();
    abort();
  }

  if (!(!(b < b)))
  {
    reach_error();
    abort();
  }

  if (!(!((-b) < (-b))))
  {
    reach_error();
    abort();
  }

  if (!(!(b > b)))
  {
    reach_error();
    abort();
  }

  if (!(!((-b) > (-b))))
  {
    reach_error();
    abort();
  }

  if (!(b <= b))
  {
    reach_error();
    abort();
  }

  if (!((-b) <= (-b)))
  {
    reach_error();
    abort();
  }

  if (!(b >= b))
  {
    reach_error();
    abort();
  }

  if (!((-b) >= (-b)))
  {
    reach_error();
    abort();
  }

  if (!(a <= b))
  {
    reach_error();
    abort();
  }

  if (!(!((-a) <= (-b))))
  {
    reach_error();
    abort();
  }

  if (!(b >= a))
  {
    reach_error();
    abort();
  }

  if (!(!((-b) >= (-a))))
  {
    reach_error();
    abort();
  }

}

