int __return_main;
void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Float_div_bad.i.p+cfa-reducer.c", 4, "reach_error");
}

void __VERIFIER_assert(int cond);
int main();
int main()
{
  float main__x = 1.0;
  float main__x1 = main__x / 1.600000023841858;
  label_27:
  ;

  if (main__x1 != main__x)
  {
    main__x = main__x1;
    main__x1 = main__x / 1.600000023841858;
    goto label_27;
  }
  else
  {
    {
      int __tmp_1;
      __tmp_1 = main__x == 0;
      int __VERIFIER_assert__cond;
      __VERIFIER_assert__cond = __tmp_1;
      if (__VERIFIER_assert__cond == 0)
      {
        {
          reach_error();
        }
        return __return_main;
      }
      else
      {
        return __return_main;
      }

    }
  }

}

