extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float_req_bl_1011a.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union 
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;
float fabs_float(float x)
{
  __uint32_t ix;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    ix = gf_u.word;
  }
  while (0);
  do
  {
    ieee_float_shape_type sf_u;
    sf_u.word = ix & 0x7fffffff;
    x = sf_u.value;
  }
  while (0);
  return x;
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
  float x = 0.0f;
  float res = fabs_float(x);
  if (!__logand(res == 0.0f, __signbit_float(res) == 0))
  {
    {
      reach_error();
    }
    return 1;
  }

  return 0;
}

