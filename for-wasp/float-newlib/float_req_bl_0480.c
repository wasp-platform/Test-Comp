extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float_req_bl_0480.c", 3, "reach_error");
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

static const float one_acos = 1.0000000000e+00;
static const float pi = 3.1415925026e+00;
static const float pio2_hi_acos = 1.5707962513e+00;
static const float pio2_lo_acos = 7.5497894159e-08;
static const float pS0_acos = 1.6666667163e-01;
static const float pS1_acos = -3.2556581497e-01;
static const float pS2_acos = 2.0121252537e-01;
static const float pS3_acos = -4.0055535734e-02;
static const float pS4_acos = 7.9153501429e-04;
static const float pS5_acos = 3.4793309169e-05;
static const float qS1_acos = -2.4033949375e+00;
static const float qS2_acos = 2.0209457874e+00;
static const float qS3_acos = -6.8828397989e-01;
static const float qS4_acos = 7.7038154006e-02;
float __ieee754_acosf(float x)
{
  float z;
  float p;
  float q;
  float r;
  float w;
  float s;
  float c;
  float df;
  __int32_t hx;
  __int32_t ix;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    hx = gf_u.word;
  }
  while (0);
  ix = hx & 0x7fffffff;
  if (ix == 0x3f800000)
  {
    if (hx > 0)
      return 0.0;
    else
      return pi + (((float) 2.0) * pio2_lo_acos);

  }
  else
    if (ix > 0x3f800000)
  {
    return (x - x) / (x - x);
  }


  if (ix < 0x3f000000)
  {
    if (ix <= 0x23000000)
      return pio2_hi_acos + pio2_lo_acos;

    z = x * x;
    p = z * (pS0_acos + (z * (pS1_acos + (z * (pS2_acos + (z * (pS3_acos + (z * (pS4_acos + (z * pS5_acos))))))))));
    q = one_acos + (z * (qS1_acos + (z * (qS2_acos + (z * (qS3_acos + (z * qS4_acos)))))));
    r = p / q;
    return pio2_hi_acos - (x - (pio2_lo_acos - (x * r)));
  }
  else
    if (hx < 0)
  {
    z = (one_acos + x) * ((float) 0.5);
    p = z * (pS0_acos + (z * (pS1_acos + (z * (pS2_acos + (z * (pS3_acos + (z * (pS4_acos + (z * pS5_acos))))))))));
    q = one_acos + (z * (qS1_acos + (z * (qS2_acos + (z * (qS3_acos + (z * qS4_acos)))))));
    s = __ieee754_sqrtf(z);
    r = p / q;
    w = (r * s) - pio2_lo_acos;
    return pi - (((float) 2.0) * (s + w));
  }
  else
  {
    __int32_t idf;
    z = (one_acos - x) * ((float) 0.5);
    s = __ieee754_sqrtf(z);
    df = s;
    do
    {
      ieee_float_shape_type gf_u;
      gf_u.value = df;
      idf = gf_u.word;
    }
    while (0);
    do
    {
      ieee_float_shape_type sf_u;
      sf_u.word = idf & 0xfffff000;
      df = sf_u.value;
    }
    while (0);
    c = (z - (df * df)) / (s + df);
    p = z * (pS0_acos + (z * (pS1_acos + (z * (pS2_acos + (z * (pS3_acos + (z * (pS4_acos + (z * pS5_acos))))))))));
    q = one_acos + (z * (qS1_acos + (z * (qS2_acos + (z * (qS3_acos + (z * qS4_acos)))))));
    r = p / q;
    w = (r * s) + c;
    return ((float) 2.0) * (df + w);
  }


}

int __signbit_float(float x)
{
  __uint32_t w;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    w = gf_u.word;
  }
  while (0);
  return (w & 0x80000000) != 0;
}

int main()
{
  float x = 1.0f;
  float res = __ieee754_acosf(x);
  if (!__logand(res == 0.0f, __signbit_float(res) == 0))
  {
    {
      reach_error();
    }
    return 1;
  }

  return 0;
}

