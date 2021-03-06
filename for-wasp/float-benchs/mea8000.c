extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "mea8000.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
extern unsigned char __VERIFIER_nondet_uchar(char *);
extern double __VERIFIER_nondet_double(char *);
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
      abort();
    }

  }

  return;
}

const double M_PI = 3.141592653589793238;
double cos(double a)
{
  double x = __VERIFIER_nondet_double("x");
  assume_abort_if_not(__logand(x >= (-1.1), x <= 1.1));
  return x;
}

double exp(double a)
{
  double x = __VERIFIER_nondet_double("x");
  assume_abort_if_not(x >= 0.);
  if (a <= 0.)
  {
    assume_abort_if_not(x <= 1.);
  }

  return x;
}

int rand()
{
  int x = __VERIFIER_nondet_int("x");
  return x;
}

void write_signed16(int val)
{
  __VERIFIER_assert(__logand(val >= 0, val <= 65535));
}

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;
typedef signed char INT8;
typedef signed short INT16;
typedef signed int INT32;
enum mea8000_state
{
  MEA8000_STOPPED,
  MEA8000_WAIT_FIRST,
  MEA8000_STARTED,
  MEA8000_SLOWING
};
struct filter_t
{
  double fm;
  double last_fm;
  double bw;
  double last_bw;
  double output;
  double last_output;
};
void device_start();
void device_reset();
int accept_byte();
void update_req();
void init_tables();
double interp(double org, double dst);
double filter_step(int i, double input);
double noise_gen();
double freq_gen();
int compute_sample();
void shift_frame();
void decode_frame();
void start_frame();
void stop_frame();
enum mea8000_state m_state;
UINT8 m_buf[4];
UINT8 m_bufpos;
UINT8 m_cont;
UINT8 m_roe;
UINT16 m_framelength;
UINT16 m_framepos;
UINT16 m_framelog;
INT16 m_lastsample;
INT16 m_sample;
UINT32 m_phi;
struct filter_t m_f[4];
UINT16 m_last_ampl;
UINT16 m_ampl;
UINT16 m_last_pitch;
UINT16 m_pitch;
UINT8 m_noise;
int m_cos_table[3600];
int m_exp_table[3600];
int m_exp2_table[3600];
int m_noise_table[8192];
int timer_enabled = 0;
static const int fm1_table[32] = {150, 162, 174, 188, 202, 217, 233, 250, 267, 286, 305, 325, 346, 368, 391, 415, 440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 830, 880, 932, 988, 1047};
static const int fm2_table[32] = {440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 830, 880, 932, 988, 1047, 1100, 1179, 1254, 1337, 1428, 1528, 1639, 1761, 1897, 2047, 2214, 2400, 2609, 2842, 3105, 3400};
static const int fm3_table[8] = {1179, 1337, 1528, 1761, 2047, 2400, 2842, 3400};
static const int fm4_table[1] = {3500};
static const int bw_table[4] = {726, 309, 125, 50};
static const int ampl_table[16] = {0, 8, 11, 16, 22, 31, 44, 62, 88, 125, 177, 250, 354, 500, 707, 1000};
static const int pi_table[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1};
void device_start()
{
  init_tables();
}

void device_reset()
{
  m_phi = 0;
  m_cont = 0;
  m_roe = 0;
  m_state = MEA8000_STOPPED;
  update_req();
  for (int i = 0; i < 4; i++)
  {
    m_f[i].last_output = 0;
    m_f[i].output = 0;
  }

  timer_enabled = 0;
}

int accept_byte()
{
  return __logor(__logor(m_state == MEA8000_STOPPED, m_state == MEA8000_WAIT_FIRST), __logand(m_state == MEA8000_STARTED, m_bufpos < 4));
}

void update_req()
{
}

void init_tables()
{
  for (int i = 0; i < 3600; i++)
  {
    double f = ((double) i) / 8096;
    m_cos_table[i] = (2. * cos((2. * M_PI) * f)) * 512;
    m_exp_table[i] = exp((-M_PI) * f) * 512;
    m_exp2_table[i] = exp(((-2) * M_PI) * f) * 512;
  }

  for (int i = 0; i < 8192; i++)
    m_noise_table[i] = (rand() % (2 * 512)) - 512;

}

double interp(double org, double dst)
{
  __VERIFIER_assert(m_framelength != 0);
  return org + (((dst - org) * m_framepos) / m_framelength);
}

double filter_step(int i, double input)
{
  double fm = interp(m_f[i].last_fm, m_f[i].fm);
  double bw = interp(m_f[i].last_bw, m_f[i].bw);
  double b = 2. * cos(((2. * M_PI) * fm) / 8096);
  double c = -exp(((-M_PI) * bw) / 8096);
  double next_output = input - (c * ((b * m_f[i].output) + (c * m_f[i].last_output)));
  m_f[i].last_output = m_f[i].output;
  m_f[i].output = next_output;
  return next_output;
}

double noise_gen()
{
  m_phi++;
  return ((double) m_noise_table[m_phi % 8192]) / 512;
}

double freq_gen()
{
  int pitch = interp(m_last_pitch, m_pitch);
  m_phi += pitch;
  return (((double) (m_phi % 8096)) / (8096 / 2.)) - 1.;
}

int compute_sample()
{
  double out;
  double ampl = interp(8. * m_last_ampl, 8. * m_ampl);
  if (m_noise)
    out = noise_gen();
  else
    out = freq_gen();

  out *= ampl;
  for (int i = 0; i < 4; i++)
  {
    out = filter_step(i, out);
  }

  if (out > 32767)
    out = 32767;

  if (out < (-32767))
    out = -32767;

  return out;
}

void shift_frame()
{
  m_last_pitch = m_pitch;
  for (int i = 0; i < 4; i++)
  {
    m_f[i].last_bw = m_f[i].bw;
    m_f[i].last_fm = m_f[i].fm;
  }

  m_last_ampl = m_ampl;
}

void decode_frame()
{
  int fd = (m_buf[3] >> 5) & 3;
  int pi = pi_table[m_buf[3] & 0x1f] << fd;
  m_noise = (m_buf[3] & 0x1f) == 16;
  m_pitch = m_last_pitch + pi;
  m_f[0].bw = bw_table[m_buf[0] >> 6];
  m_f[1].bw = bw_table[(m_buf[0] >> 4) & 3];
  m_f[2].bw = bw_table[(m_buf[0] >> 2) & 3];
  m_f[3].bw = bw_table[m_buf[0] & 3];
  m_f[3].fm = fm4_table[0];
  m_f[2].fm = fm3_table[m_buf[1] >> 5];
  m_f[1].fm = fm2_table[m_buf[1] & 0x1f];
  m_f[0].fm = fm1_table[m_buf[2] >> 3];
  m_ampl = ampl_table[((m_buf[2] & 7) << 1) | (m_buf[3] >> 7)];
  m_framelog = (fd + 6) + 3;
  m_framelength = 1 << m_framelog;
  m_bufpos = 0;
}

void start_frame()
{
  m_framepos = 0;
  timer_enabled = 1;
}

void stop_frame()
{
  m_state = MEA8000_STOPPED;
  write_signed16(0x8000);
  timer_enabled = 0;
}

void timer_expire()
{
  int pos = m_framepos % 8;
  if (!pos)
  {
    m_lastsample = m_sample;
    m_sample = compute_sample();
    write_signed16(0x8000 + m_lastsample);
  }
  else
  {
    int sample = m_lastsample + ((pos * (m_sample - m_lastsample)) / 8);
    write_signed16(0x8000 + sample);
  }

  m_framepos++;
  if (m_framepos >= m_framelength)
  {
    shift_frame();
    if (m_bufpos == 4)
    {
      decode_frame();
      start_frame();
    }
    else
      if (m_cont)
    {
      start_frame();
    }
    else
      if (m_state == MEA8000_STARTED)
    {
      m_ampl = 0;
      start_frame();
      m_state = MEA8000_SLOWING;
    }
    else
      if (m_state == MEA8000_SLOWING)
    {
      stop_frame();
    }




    update_req();
  }
  else
  {
  }

}

UINT8 stubread(int offset)
{
  switch (offset)
  {
    case 0:

    case 1:
      return accept_byte() << 7;

  }

  return 0;
}

void stubwrite(int offset, UINT8 data)
{
  switch (offset)
  {
    case 0:
      if (m_state == MEA8000_STOPPED)
    {
      m_pitch = 2 * data;
      m_state = MEA8000_WAIT_FIRST;
      m_bufpos = 0;
    }
    else
      if (m_bufpos == 4)
    {
    }
    else
    {
      m_buf[m_bufpos] = data;
      m_bufpos++;
      if (__logand(m_bufpos == 4, m_state == MEA8000_WAIT_FIRST))
      {
        int old_pitch = m_pitch;
        m_last_pitch = old_pitch;
        decode_frame();
        shift_frame();
        m_last_pitch = old_pitch;
        m_ampl = 0;
        start_frame();
        m_state = MEA8000_STARTED;
      }

    }


      update_req();
      break;

    case 1:
    {
      int stop = (data >> 4) & 1;
      if (data & 8)
        m_cont = (data >> 2) & 1;

      if (data & 2)
        m_roe = data & 1;

      if (stop)
        stop_frame();

      update_req();
      break;
    }

  }

}

int main()
{
  int arg0;
  unsigned char arg1;
  device_start();
  while (1)
  {
    switch (__VERIFIER_nondet_int("switch_1"))
    {
      case 0:
        stubread(__VERIFIER_nondet_int("stubread_2"));
        break;

      case 1:
        arg0 = __VERIFIER_nondet_int("arg0");
        arg1 = __VERIFIER_nondet_uchar("arg1");
        stubwrite(arg0, arg1);
        break;

      case 2:
        if (timer_enabled)
        timer_expire();

        break;

      case 3:
        device_reset();
        break;

    }

  }

  return 0;
}

