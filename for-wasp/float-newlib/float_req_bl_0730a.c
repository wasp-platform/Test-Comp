extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float_req_bl_0730a.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union 
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;
static const float one_sqrt = 1.0;
static const float tiny_sqrt = 1.0e-30;
float __ieee754_sqrtf(float x)
{
  float z;
  __uint32_t r;
  __uint32_t hx;
  __int32_t ix;
  __int32_t s;
  __int32_t q;
  __int32_t m;
  __int32_t t;
  __int32_t i;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    ix = gf_u.word;
  }
  while (0);
  hx = ix & 0x7fffffff;
  if (!(hx < 0x7f800000L))
    return (x * x) + x;

  if (hx == 0)
    return x;

  if (ix < 0)
    return (x - x) / (x - x);

  m = ix >> 23;
  if (hx < 0x00800000L)
  {
    for (i = 0; (ix & 0x00800000L) == 0; i++)
      ix <<= 1;

    m -= i - 1;
  }

  m -= 127;
  ix = (ix & 0x007fffffL) | 0x00800000L;
  if (m & 1)
    ix += ix;

  m >>= 1;
  ix += ix;
  q = (s = 0);
  r = 0x01000000L;
  while (r != 0)
  {
    t = s + r;
    if (t <= ix)
    {
      s = t + r;
      ix -= t;
      q += r;
    }

    ix += ix;
    r >>= 1;
  }

  if (ix != 0)
  {
    z = one_sqrt - tiny_sqrt;
    if (z >= one_sqrt)
    {
      z = one_sqrt + tiny_sqrt;
      if (z > one_sqrt)
        q += 2;
      else
        q += q & 1;

    }

  }

  ix = (q >> 1) + 0x3f000000L;
  ix += m << 23;
  do
  {
    ieee_float_shape_type sf_u;
    sf_u.word = ix;
    z = sf_u.value;
  }
  while (0);
  return z;
}

int isinf_float(float x)
{
  __int32_t ix;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    ix = gf_u.word;
  }
  while (0);
  ix &= 0x7fffffff;
  return ix == 0x7f800000L;
}

int main()
{
  float x = 1.0f / 0.0f;
  float res = __ieee754_sqrtf(x);
  if (!isinf_float(res))
  {
    {
      reach_error();
    }
    return 1;
  }

  return 0;
}

