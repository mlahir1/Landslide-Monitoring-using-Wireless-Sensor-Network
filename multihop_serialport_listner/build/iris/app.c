#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/avr/4.9.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.9.2/../../../../avr/include/stdint.h" 3
typedef signed int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef signed int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef signed int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef signed int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.9.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 117 "/usr/lib/gcc/avr/4.9.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0xb7420010, const void *arg_0xb74201a8, size_t arg_0xb7420340);



extern void *memset(void *arg_0xb741d350, int arg_0xb741d4a8, size_t arg_0xb741d640);
# 71 "/usr/lib/gcc/avr/4.9.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0xb740b730, const void *arg_0xb740b8c8);
# 25 "../../tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 244 "/usr/lib/gcc/avr/4.9.2/../../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 51 "../../tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 90 "../../tos/chips/atm1281/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 110
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 120
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 155
#line 147
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;










#line 158
typedef struct __nesc_unnamed4249 {

  uint8_t srw00 : 1;
  uint8_t srw01 : 1;
  uint8_t srw10 : 1;
  uint8_t srw11 : 1;
  uint8_t srl : 3;
  uint8_t sre : 1;
} Atm128_XMCRA_t;







#line 169
typedef struct __nesc_unnamed4250 {

  uint8_t xmm : 3;
  uint8_t resv1 : 4;
  uint8_t xmbk : 1;
} Atm128_XMCRB_t;







typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 82 "../../tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4251 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_1_1 = 2, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4252 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4253 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 133
typedef struct __nesc_unnamed4254 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4255 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4256 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4260 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 189
typedef struct __nesc_unnamed4261 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 200
typedef struct __nesc_unnamed4262 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "../../tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4264 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4265 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4266 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 81 "../../tos/chips/atm1281/timer/Atm128Timer.h"
enum __nesc_unnamed4267 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4268 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4269 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4270 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4271 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4272 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};


enum __nesc_unnamed4273 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 168
#line 156
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t wgm00 : 1;
    uint8_t wgm01 : 1;
    uint8_t resv1 : 2;
    uint8_t com0b0 : 1;
    uint8_t com0b1 : 1;
    uint8_t com0a0 : 1;
    uint8_t com0a1 : 1;
  } bits;
} Atm128_TCCR0A_t;
#line 183
#line 171
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t cs00 : 1;
    uint8_t cs01 : 1;
    uint8_t cs02 : 2;
    uint8_t wgm02 : 1;
    uint8_t resv1 : 2;
    uint8_t foc0b : 1;
    uint8_t foc0a : 1;
  } bits;
} Atm128_TCCR0B_t;
#line 195
#line 186
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 207
#line 198
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 223
#line 210
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t tcr2bub : 1;
    uint8_t tcr2aub : 1;
    uint8_t ocr2bub : 1;
    uint8_t ocr2aub : 1;
    uint8_t tcn2ub : 1;
    uint8_t as2 : 1;
    uint8_t exclk : 1;
    uint8_t resv1 : 1;
  } bits;
} Atm128_ASSR_t;
#line 236
#line 226
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 249
#line 239
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 261
#line 252
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 273
#line 264
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 286
#line 277
typedef union __nesc_unnamed4292 {

  uint8_t flat;
  struct __nesc_unnamed4293 {
    uint8_t wgm01 : 2;
    uint8_t comc : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 299
#line 289
typedef union __nesc_unnamed4294 {

  uint8_t flat;
  struct __nesc_unnamed4295 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;
#line 311
#line 302
typedef union __nesc_unnamed4296 {

  uint8_t flat;
  struct __nesc_unnamed4297 {
    uint8_t resv1 : 5;
    uint8_t focc : 1;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 326
#line 314
typedef union __nesc_unnamed4298 {

  uint8_t flat;
  struct __nesc_unnamed4299 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t ociec : 1;
    uint8_t resv1 : 1;
    uint8_t icie : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIMSK_t;
#line 341
#line 329
typedef union __nesc_unnamed4300 {

  uint8_t flat;
  struct __nesc_unnamed4301 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t ocfc : 1;
    uint8_t resv1 : 1;
    uint8_t icf : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIFR_t;
#line 353
#line 344
typedef union __nesc_unnamed4302 {

  uint8_t flat;
  struct __nesc_unnamed4303 {
    uint8_t psrsync : 1;
    uint8_t psrasy : 1;
    uint8_t resv1 : 5;
    uint8_t tsm : 1;
  } bits;
} Atm128_GTCCR_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;
typedef uint8_t Atm128_TCNT4H_t;
typedef uint8_t Atm128_TCNT4L_t;
typedef uint8_t Atm128_TCNT5H_t;
typedef uint8_t Atm128_TCNT5L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_OCR4AH_t;
typedef uint8_t Atm128_OCR4AL_t;
typedef uint8_t Atm128_OCR4BH_t;
typedef uint8_t Atm128_OCR4BL_t;
typedef uint8_t Atm128_OCR4CH_t;
typedef uint8_t Atm128_OCR4CL_t;


typedef uint8_t Atm128_OCR5AH_t;
typedef uint8_t Atm128_OCR5AL_t;
typedef uint8_t Atm128_OCR5BH_t;
typedef uint8_t Atm128_OCR5BL_t;
typedef uint8_t Atm128_OCR5CH_t;
typedef uint8_t Atm128_OCR5CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
typedef uint8_t Atm128_ICR4H_t;
typedef uint8_t Atm128_ICR4L_t;
typedef uint8_t Atm128_ICR5H_t;
typedef uint8_t Atm128_ICR5L_t;
# 85 "../../tos/platforms/iris/MicaTimer.h"
typedef struct __nesc_unnamed4304 {
} 
#line 85
T64khz;
typedef struct __nesc_unnamed4305 {
} 
#line 86
T128khz;
typedef struct __nesc_unnamed4306 {
} 
#line 87
T2mhz;
typedef struct __nesc_unnamed4307 {
} 
#line 88
T4mhz;
#line 158
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4308 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4309 {
  PLATFORM_MHZ = 8
};
# 62 "../../tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4310 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4311 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4312 {
  PLATFORM_BAUDRATE = 57600L
};
# 19 "MultihopOscilloscope.h"
enum __nesc_unnamed4313 {


  NREADINGS = 5, 

  DEFAULT_INTERVAL = 1024, 
  AM_OSCILLOSCOPE = 0x93
};







#line 28
typedef nx_struct oscilloscope {
  nx_uint16_t version;
  nx_uint16_t interval;
  nx_uint16_t id;
  nx_uint16_t count;
  nx_uint16_t readings[NREADINGS];
} __attribute__((packed)) oscilloscope_t;
# 6 "../../tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4314 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4315 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 41 "../../tos/chips/rf230/RF230DriverLayer.h"
#line 38
typedef nx_struct rf230_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rf230_header_t;









#line 43
typedef struct rf230_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } __attribute((packed))  ;
} __attribute((packed))  rf230_metadata_t;

enum rf230_registers_enum {

  RF230_TRX_STATUS = 0x01, 
  RF230_TRX_STATE = 0x02, 
  RF230_TRX_CTRL_0 = 0x03, 
  RF230_PHY_TX_PWR = 0x05, 
  RF230_PHY_RSSI = 0x06, 
  RF230_PHY_ED_LEVEL = 0x07, 
  RF230_PHY_CC_CCA = 0x08, 
  RF230_CCA_THRES = 0x09, 
  RF230_IRQ_MASK = 0x0E, 
  RF230_IRQ_STATUS = 0x0F, 
  RF230_VREG_CTRL = 0x10, 
  RF230_BATMON = 0x11, 
  RF230_XOSC_CTRL = 0x12, 
  RF230_PLL_CF = 0x1A, 
  RF230_PLL_DCU = 0x1B, 
  RF230_PART_NUM = 0x1C, 
  RF230_VERSION_NUM = 0x1D, 
  RF230_MAN_ID_0 = 0x1E, 
  RF230_MAN_ID_1 = 0x1F, 
  RF230_SHORT_ADDR_0 = 0x20, 
  RF230_SHORT_ADDR_1 = 0x21, 
  RF230_PAN_ID_0 = 0x22, 
  RF230_PAN_ID_1 = 0x23, 
  RF230_IEEE_ADDR_0 = 0x24, 
  RF230_IEEE_ADDR_1 = 0x25, 
  RF230_IEEE_ADDR_2 = 0x26, 
  RF230_IEEE_ADDR_3 = 0x27, 
  RF230_IEEE_ADDR_4 = 0x28, 
  RF230_IEEE_ADDR_5 = 0x29, 
  RF230_IEEE_ADDR_6 = 0x2A, 
  RF230_IEEE_ADDR_7 = 0x2B, 
  RF230_XAH_CTRL = 0x2C, 
  RF230_CSMA_SEED_0 = 0x2D, 
  RF230_CSMA_SEED_1 = 0x2E
};

enum rf230_trx_register_enums {

  RF230_CCA_DONE = 1 << 7, 
  RF230_CCA_STATUS = 1 << 6, 
  RF230_TRX_STATUS_MASK = 0x1F, 
  RF230_P_ON = 0, 
  RF230_BUSY_RX = 1, 
  RF230_BUSY_TX = 2, 
  RF230_RX_ON = 6, 
  RF230_TRX_OFF = 8, 
  RF230_PLL_ON = 9, 
  RF230_SLEEP = 15, 
  RF230_BUSY_RX_AACK = 17, 
  RF230_BUSR_TX_ARET = 18, 
  RF230_RX_AACK_ON = 22, 
  RF230_TX_ARET_ON = 25, 
  RF230_RX_ON_NOCLK = 28, 
  RF230_AACK_ON_NOCLK = 29, 
  RF230_BUSY_RX_AACK_NOCLK = 30, 
  RF230_STATE_TRANSITION_IN_PROGRESS = 31, 
  RF230_TRAC_STATUS_MASK = 0xE0, 
  RF230_TRAC_SUCCESS = 0, 
  RF230_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RF230_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF230_TRAC_NO_ACK = 5 << 5, 
  RF230_TRAC_INVALID = 7 << 5, 
  RF230_TRX_CMD_MASK = 0x1F, 
  RF230_NOP = 0, 
  RF230_TX_START = 2, 
  RF230_FORCE_TRX_OFF = 3
};

enum rf230_phy_register_enums {

  RF230_TX_AUTO_CRC_ON = 1 << 7, 
  RF230_TX_PWR_MASK = 0x0F, 
  RF230_RSSI_MASK = 0x1F, 
  RF230_CCA_REQUEST = 1 << 7, 
  RF230_CCA_MODE_0 = 0 << 5, 
  RF230_CCA_MODE_1 = 1 << 5, 
  RF230_CCA_MODE_2 = 2 << 5, 
  RF230_CCA_MODE_3 = 3 << 5, 
  RF230_CHANNEL_MASK = 0x1F, 
  RF230_CCA_CS_THRES_SHIFT = 4, 
  RF230_CCA_ED_THRES_SHIFT = 0
};

enum rf230_irq_register_enums {

  RF230_IRQ_BAT_LOW = 1 << 7, 
  RF230_IRQ_TRX_UR = 1 << 6, 
  RF230_IRQ_TRX_END = 1 << 3, 
  RF230_IRQ_RX_START = 1 << 2, 
  RF230_IRQ_PLL_UNLOCK = 1 << 1, 
  RF230_IRQ_PLL_LOCK = 1 << 0
};

enum rf230_control_register_enums {

  RF230_AVREG_EXT = 1 << 7, 
  RF230_AVDD_OK = 1 << 6, 
  RF230_DVREG_EXT = 1 << 3, 
  RF230_DVDD_OK = 1 << 2, 
  RF230_BATMON_OK = 1 << 5, 
  RF230_BATMON_VHR = 1 << 4, 
  RF230_BATMON_VTH_MASK = 0x0F, 
  RF230_XTAL_MODE_OFF = 0 << 4, 
  RF230_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF230_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf230_pll_register_enums {

  RF230_PLL_CF_START = 1 << 7, 
  RF230_PLL_DCU_START = 1 << 7
};

enum rf230_spi_command_enums {

  RF230_CMD_REGISTER_READ = 0x80, 
  RF230_CMD_REGISTER_WRITE = 0xC0, 
  RF230_CMD_REGISTER_MASK = 0x3F, 
  RF230_CMD_FRAME_READ = 0x20, 
  RF230_CMD_FRAME_WRITE = 0x60, 
  RF230_CMD_SRAM_READ = 0x00, 
  RF230_CMD_SRAM_WRITE = 0x40
};
# 251 "/usr/lib/gcc/avr/4.9.2/../../../../avr/include/util/crc16.h" 3
#line 250
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data);
# 42 "../../tos/platforms/iris/chips/rf230/RadioConfig.h"
enum __nesc_unnamed4316 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};
#line 82
static __inline uint16_t RF230_CRCBYTE_COMMAND(uint16_t crc, uint8_t data);







typedef TOne TRadio;
typedef uint16_t tradio_size;
# 45 "../../tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "../../tos/types/IeeeEui64.h"
enum __nesc_unnamed4317 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "../../tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4318 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4319 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4320 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4321 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 43 "../../tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "../../tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} __attribute((packed))  flags_metadata_t;
# 41 "../../tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} __attribute((packed))  timestamp_metadata_t;
# 41 "../../tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} __attribute((packed))  lpl_metadata_t;
# 42 "../../tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} __attribute((packed))  link_metadata_t;
# 60 "../../tos/chips/rf230/RF230Radio.h"
#line 48
typedef nx_struct rf230packet_header_t {

  rf230_header_t rf230;

  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 

rf230packet_header_t;




#line 62
typedef nx_struct rf230packet_footer_t {
} __attribute__((packed)) 

rf230packet_footer_t;
#line 78
#line 67
typedef struct rf230packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rf230_metadata_t rf230;
} __attribute((packed))  rf230packet_metadata_t;
# 83 "../../tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4322 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4323 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4324 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 43 "../../tos/platforms/iris/platform_message.h"
#line 40
typedef union message_header {
  rf230packet_header_t rf230;
  serial_header_t serial;
} message_header_t;



#line 45
typedef union message_footer {
  rf230packet_footer_t rf230;
} message_footer_t;



#line 49
typedef union message_metadata {
  rf230packet_metadata_t rf230;
} message_metadata_t;
# 19 "../../tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 42 "../../tos/lib/net/ctp/Collection.h"
enum __nesc_unnamed4325 {
  AM_COLLECTION_DATA = 20, 
  AM_COLLECTION_CONTROL = 21, 
  AM_COLLECTION_DEBUG = 22
};

typedef uint8_t collection_id_t;
typedef nx_uint8_t nx_collection_id_t;
# 43 "../../tos/types/Leds.h"
enum __nesc_unnamed4326 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 54 "../../tos/sensorboards/mts300/mts300.h"
enum __nesc_unnamed4327 {

  TOS_MIC_POT_ADDR = 0x2D, 
  TOS_MAG_POT_ADDR = 0x2C
};
# 33 "../../tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 51 "../../tos/lib/net/ctp/Ctp.h"
enum __nesc_unnamed4328 {

  AM_CTP_ROUTING = 0x70, 
  AM_CTP_DATA = 0x71, 
  AM_CTP_DEBUG = 0x72, 


  CTP_OPT_PULL = 0x80, 
  CTP_OPT_ECN = 0x40, 
  CTP_OPT_ALL = 0xff
};

typedef nx_uint8_t nx_ctp_options_t;
typedef uint8_t ctp_options_t;









#line 66
typedef nx_struct __nesc_unnamed4329 {
  nx_ctp_options_t options;
  nx_uint8_t thl;
  nx_uint16_t etx;
  nx_am_addr_t origin;
  nx_uint8_t originSeqNo;
  nx_collection_id_t type;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_data_header_t;






#line 76
typedef nx_struct __nesc_unnamed4330 {
  nx_ctp_options_t options;
  nx_am_addr_t parent;
  nx_uint16_t etx;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_routing_header_t;
# 45 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
# 41 "../../tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4331 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4332 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4333 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4334 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4335 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 60 "../../tos/lib/net/ctp/CtpForwardingEngine.h"
enum __nesc_unnamed4336 {

  FORWARD_PACKET_TIME = 7
};




enum __nesc_unnamed4337 {
  SENDDONE_OK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_OK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_FAIL_OFFSET = FORWARD_PACKET_TIME << 2, 
  SENDDONE_FAIL_WINDOW = SENDDONE_FAIL_OFFSET, 
  LOOPY_OFFSET = FORWARD_PACKET_TIME << 2, 
  LOOPY_WINDOW = LOOPY_OFFSET, 
  CONGESTED_WAIT_OFFSET = FORWARD_PACKET_TIME << 2, 
  CONGESTED_WAIT_WINDOW = CONGESTED_WAIT_OFFSET, 
  NO_ROUTE_RETRY = 10000
};








enum __nesc_unnamed4338 {
  MAX_RETRIES = 30
};
#line 104
#line 100
typedef struct __nesc_unnamed4339 {
  message_t * msg;
  uint8_t client;
  uint8_t retries;
} fe_queue_entry_t;
# 7 "../../tos/lib/net/ctp/CtpDebugMsg.h"
enum __nesc_unnamed4340 {
  NET_C_DEBUG_STARTED = 0xDE, 

  NET_C_FE_MSG_POOL_EMPTY = 0x10, 
  NET_C_FE_SEND_QUEUE_FULL = 0x11, 
  NET_C_FE_NO_ROUTE = 0x12, 
  NET_C_FE_SUBSEND_OFF = 0x13, 
  NET_C_FE_SUBSEND_BUSY = 0x14, 
  NET_C_FE_BAD_SENDDONE = 0x15, 
  NET_C_FE_QENTRY_POOL_EMPTY = 0x16, 
  NET_C_FE_SUBSEND_SIZE = 0x17, 
  NET_C_FE_LOOP_DETECTED = 0x18, 
  NET_C_FE_SEND_BUSY = 0x19, 

  NET_C_FE_SENDQUEUE_EMPTY = 0x50, 
  NET_C_FE_PUT_MSGPOOL_ERR = 0x51, 
  NET_C_FE_PUT_QEPOOL_ERR = 0x52, 
  NET_C_FE_GET_MSGPOOL_ERR = 0x53, 
  NET_C_FE_GET_QEPOOL_ERR = 0x54, 
  NET_C_FE_QUEUE_SIZE = 0x55, 

  NET_C_FE_SENT_MSG = 0x20, 
  NET_C_FE_RCV_MSG = 0x21, 
  NET_C_FE_FWD_MSG = 0x22, 
  NET_C_FE_DST_MSG = 0x23, 
  NET_C_FE_SENDDONE_FAIL = 0x24, 
  NET_C_FE_SENDDONE_WAITACK = 0x25, 
  NET_C_FE_SENDDONE_FAIL_ACK_SEND = 0x26, 
  NET_C_FE_SENDDONE_FAIL_ACK_FWD = 0x27, 
  NET_C_FE_DUPLICATE_CACHE = 0x28, 
  NET_C_FE_DUPLICATE_QUEUE = 0x29, 
  NET_C_FE_DUPLICATE_CACHE_AT_SEND = 0x2A, 
  NET_C_FE_CONGESTION_SENDWAIT = 0x2B, 
  NET_C_FE_CONGESTION_BEGIN = 0x2C, 
  NET_C_FE_CONGESTION_END = 0x2D, 



  NET_C_FE_CONGESTED = 0x2E, 

  NET_C_TREE_NO_ROUTE = 0x30, 
  NET_C_TREE_NEW_PARENT = 0x31, 
  NET_C_TREE_ROUTE_INFO = 0x32, 
  NET_C_TREE_SENT_BEACON = 0x33, 
  NET_C_TREE_RCV_BEACON = 0x34, 

  NET_C_DBG_1 = 0x40, 
  NET_C_DBG_2 = 0x41, 
  NET_C_DBG_3 = 0x42
};
#line 79
#line 58
typedef nx_struct CollectionDebugMsg {
  nx_uint8_t type;
  nx_union __nesc_unnamed4341 {
    nx_uint16_t arg;
    nx_struct __nesc_unnamed4342 {
      nx_uint16_t msg_uid;
      nx_am_addr_t origin;
      nx_am_addr_t other_node;
    } __attribute__((packed)) msg;
    nx_struct __nesc_unnamed4343 {
      nx_am_addr_t parent;
      nx_uint8_t hopcount;
      nx_uint16_t metric;
    } __attribute__((packed)) route_info;
    nx_struct __nesc_unnamed4344 {
      nx_uint16_t a;
      nx_uint16_t b;
      nx_uint16_t c;
    } __attribute__((packed)) dbg;
  } __attribute__((packed)) data;
  nx_uint16_t seqno;
} __attribute__((packed)) CollectionDebugMsg;
# 46 "../../tos/lib/net/4bitle/./LinkEstimator.h"
enum __nesc_unnamed4345 {


  NUM_ENTRIES_FLAG = 15
};
#line 62
#line 59
typedef nx_struct linkest_header {
  nx_uint8_t flags;
  nx_uint8_t seq;
} __attribute__((packed)) linkest_header_t;







#line 67
typedef nx_struct neighbor_stat_entry {
  nx_am_addr_t ll_addr;
  nx_uint8_t inquality;
} __attribute__((packed)) neighbor_stat_entry_t;




#line 73
typedef nx_struct linkest_footer {
  neighbor_stat_entry_t neighborList[1];
} __attribute__((packed)) linkest_footer_t;



enum __nesc_unnamed4346 {
  VALID_ENTRY = 0x1, 


  MATURE_ENTRY = 0x2, 


  INIT_ENTRY = 0x4, 


  PINNED_ENTRY = 0x8
};
#line 119
#line 94
typedef struct neighbor_table_entry {

  am_addr_t ll_addr;

  uint8_t lastseq;


  uint8_t rcvcnt;

  uint8_t failcnt;

  uint8_t flags;


  uint8_t inquality;


  uint16_t etx;



  uint8_t data_success;


  uint8_t data_total;
} neighbor_table_entry_t;
# 4 "../../tos/lib/net/ctp/TreeRouting.h"
enum __nesc_unnamed4347 {
  AM_TREE_ROUTING_CONTROL = 0xCE, 
  BEACON_INTERVAL = 8192, 
  INVALID_ADDR = 0xFFFF, 
  ETX_THRESHOLD = 50, 
  PARENT_SWITCH_THRESHOLD = 15, 
  MAX_METRIC = 0xFFFF
};







#line 14
typedef struct __nesc_unnamed4348 {
  am_addr_t parent;
  uint16_t etx;
  bool haveHeard;
  bool congested;
} route_info_t;




#line 21
typedef struct __nesc_unnamed4349 {
  am_addr_t neighbor;
  route_info_t info;
} routing_table_entry;

static __inline void routeInfoInit(route_info_t *ri);
# 50 "../../tos/chips/atm128/crc.h"
const uint16_t __attribute((__progmem__)) crcTable[256] = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "../../tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4350 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4351 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4352 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4353 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4354 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4355 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4356 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4357 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
typedef message_t MultihopOscilloscopeC__UARTMessagePool__t;
typedef uint16_t MultihopOscilloscopeC__Read__val_t;
typedef message_t *MultihopOscilloscopeC__UARTQueue__t;
typedef TMilli MultihopOscilloscopeC__Timer__precision_tag;
enum HilTimerMilliC____nesc_unnamed4358 {
  HilTimerMilliC__TIMER_COUNT = 5U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm1281Timer2AsyncP__Compare__size_type;
typedef uint8_t HplAtm1281Timer2AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum /*MultihopOscilloscopeAppC.Sensor*/AccelXC__0____nesc_unnamed4359 {
  AccelXC__0__ID = 0U
};
typedef TMilli AccelP__Timer__precision_tag;
typedef uint16_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__width_t;
typedef /*AccelReadP.MultiplexX*/ArbitratedReadC__0__width_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__val_t;
typedef /*AccelReadP.MultiplexX*/ArbitratedReadC__0__width_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__val_t;
typedef uint16_t /*AccelReadP.MultiplexY*/ArbitratedReadC__1__width_t;
typedef /*AccelReadP.MultiplexY*/ArbitratedReadC__1__width_t /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Read__val_t;
typedef /*AccelReadP.MultiplexY*/ArbitratedReadC__1__width_t /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Service__val_t;
typedef TMicro AdcP__BusyWait__precision_tag;
typedef uint16_t AdcP__BusyWait__size_type;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__val_t;
enum /*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0____nesc_unnamed4360 {
  AdcReadClientC__0__ID = 0U, AdcReadClientC__0__HAL_ID = 0U
};
enum CtpP____nesc_unnamed4361 {
  CtpP__CLIENT_COUNT = 1U, CtpP__FORWARD_COUNT = 12, CtpP__TREE_ROUTING_TABLE_SIZE = 10, CtpP__QUEUE_SIZE = CtpP__CLIENT_COUNT + CtpP__FORWARD_COUNT, CtpP__CACHE_SIZE = 4
};
typedef TRadio RF230RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230RadioP__PacketTimeStamp__size_type;
typedef TRadio /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef TMicro RF230DriverLayerP__BusyWait__precision_tag;
typedef uint16_t RF230DriverLayerP__BusyWait__size_type;
typedef uint8_t RF230DriverLayerP__PacketRSSI__value_type;
typedef TRadio RF230DriverLayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230DriverLayerP__PacketTimeStamp__size_type;
typedef TRadio RF230DriverLayerP__LocalTime__precision_tag;
typedef uint8_t RF230DriverLayerP__PacketTransmitPower__value_type;
typedef uint8_t RF230DriverLayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RF230DriverLayerP__PacketLinkQuality__value_type;
typedef uint16_t HplRF230P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer1P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*HplRF230C.AlarmC*/AlarmOne16C__0____nesc_unnamed4362 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMicro /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef message_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t;
typedef TMilli /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__precision_tag;
typedef fe_queue_entry_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t;
typedef fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t;
typedef message_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t;
typedef message_t /*CtpP.MessagePoolP*/PoolC__0__pool_t;
typedef /*CtpP.MessagePoolP*/PoolC__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t;
typedef /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t;
typedef fe_queue_entry_t /*CtpP.QEntryPoolP*/PoolC__1__pool_t;
typedef /*CtpP.QEntryPoolP*/PoolC__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t;
typedef /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t;
typedef fe_queue_entry_t */*CtpP.SendQueueP*/QueueC__0__queue_t;
typedef /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__t;
typedef message_t */*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t;
enum AMQueueP____nesc_unnamed4363 {
  AMQueueP__NUM_CLIENTS = 2U
};
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__precision_tag;
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__precision_tag;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer3P__Capture__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__size_type;
enum SerialAMQueueP____nesc_unnamed4364 {
  SerialAMQueueP__NUM_CLIENTS = 2U
};
typedef message_t /*MultihopOscilloscopeAppC.UARTMessagePoolP*/PoolC__2__pool_t;
typedef /*MultihopOscilloscopeAppC.UARTMessagePoolP*/PoolC__2__pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t;
typedef /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__t;
typedef message_t */*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t;
typedef /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__t;
typedef message_t /*MultihopOscilloscopeAppC.DebugMessagePool*/PoolC__3__pool_t;
typedef /*MultihopOscilloscopeAppC.DebugMessagePool*/PoolC__3__pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t;
typedef /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__t;
typedef message_t */*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t;
typedef /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__t;
typedef message_t *UARTDebugSenderP__SendQueue__t;
typedef message_t UARTDebugSenderP__MessagePool__t;
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 42 "../../tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "../../tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
#line 53
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0xb733a010);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0xb733a010);
# 57 "../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "../../tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "../../tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 60 "../../tos/interfaces/Boot.nc"
static void MultihopOscilloscopeC__Boot__booted(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void MultihopOscilloscopeC__SerialControl__startDone(error_t error);
#line 138
static void MultihopOscilloscopeC__SerialControl__stopDone(error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void MultihopOscilloscopeC__uartSendTask__runTask(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



MultihopOscilloscopeC__Snoop__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 113 "../../tos/interfaces/SplitControl.nc"
static void MultihopOscilloscopeC__RadioControl__startDone(error_t error);
#line 138
static void MultihopOscilloscopeC__RadioControl__stopDone(error_t error);
# 100 "../../tos/interfaces/Send.nc"
static void MultihopOscilloscopeC__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 63 "../../tos/interfaces/Read.nc"
static void MultihopOscilloscopeC__Read__readDone(error_t result, MultihopOscilloscopeC__Read__val_t val);
# 110 "../../tos/interfaces/AMSend.nc"
static void MultihopOscilloscopeC__SerialSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



MultihopOscilloscopeC__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "../../tos/lib/timer/Timer.nc"
static void MultihopOscilloscopeC__Timer__fired(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );




static void LedsP__Leds__led1On(void );










static void LedsP__Leds__led1Toggle(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 89 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 82
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t control);
#line 81
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t control);
# 62 "../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
# 68 "../../tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 48 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm1281Timer2AsyncP__Compare__size_type HplAtm1281Timer2AsyncP__Compare__get(void );





static void HplAtm1281Timer2AsyncP__Compare__set(HplAtm1281Timer2AsyncP__Compare__size_type t);










static void HplAtm1281Timer2AsyncP__Compare__start(void );
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1281Timer2AsyncP__Timer__timer_size HplAtm1281Timer2AsyncP__Timer__get(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0xb70819f0);
# 92 "../../tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0xb70819f0);
# 64 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0xb70819f0, 
# 64 "../../tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0xb70819f0, 
# 73 "../../tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0xb70819f0);
# 82 "../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t AccelP__SplitControl__start(void );
#line 130
static error_t AccelP__SplitControl__stop(void );
# 32 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AccelP__ConfigX__getRefVoltage(void );
#line 25
static uint8_t AccelP__ConfigX__getChannel(void );
#line 39
static uint8_t AccelP__ConfigX__getPrescaler(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void AccelP__stopDone__runTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void AccelP__Timer__fired(void );
# 20 "../../tos/platforms/mica/MicaBusAdc.nc"
static uint8_t MicaBusP__Adc3__getChannel(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );
#line 48
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );
#line 48
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );
#line 48
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
#line 48
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Interrupt__default__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Atm128Interrupt__fired(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Interrupt__default__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Atm128Interrupt__fired(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Interrupt__default__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Atm128Interrupt__fired(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Interrupt__default__fired(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f907b0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f8fc18);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f8fc18);
# 56 "../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );








static bool /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__isOwner(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f91d70);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f91d70);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error);
# 62 "../../tos/lib/power/PowerDownCleanup.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void );
# 73 "../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void );









static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void );
# 55 "../../tos/interfaces/Read.nc"
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__read(
# 24 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f48ea0);
# 63 "../../tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__default__readDone(
# 24 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f48ea0, 
# 63 "../../tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__default__read(
# 26 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f45f20);
# 63 "../../tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__readDone(
# 26 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f45f20, 
# 63 "../../tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__val_t val);
# 102 "../../tos/interfaces/Resource.nc"
static void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__granted(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);
# 55 "../../tos/interfaces/Read.nc"
static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Service__default__read(
# 26 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f45f20);
# 102 "../../tos/interfaces/Resource.nc"
static void /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Resource__granted(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);
# 62 "../../tos/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 119 "../../tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 70 "../../tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 156 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 95 "../../tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 53 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );








static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 64
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void );
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void );
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
# 55 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f907b0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f8fc18);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f8fc18);
# 56 "../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f91d70);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f91d70);
# 102 "../../tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f91d70);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 62 "../../tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 55 "../../tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 48 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6ebb508);
# 66 "../../tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6eb94a8, 
# 66 "../../tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6eb89c0);
# 25 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6eb89c0);
# 39 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6eb89c0);
# 81 "../../tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 66 "../../tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 55 "../../tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__read(
# 24 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f48ea0);
# 63 "../../tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__default__readDone(
# 24 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f48ea0, 
# 63 "../../tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__readDone(
# 26 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f45f20, 
# 63 "../../tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__val_t val);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__default__release(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__default__request(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);
# 102 "../../tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__granted(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);
# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule(void );
#line 72
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__suspend(void );






static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__resume(void );
# 52 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_group_t RF230RadioP__ActiveMessageConfig__group(message_t *msg);










static error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 46
static am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg);
#line 40
static am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);








static void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);
#line 43
static void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230RadioP__RadioAlarm__fired(void );
# 46 "../../tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void );
#line 40
static uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg);
#line 52
static uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg);






static uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void );





static bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg);
# 86 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void RF230RadioP__SoftwareAckConfig__reportChannelError(void );
#line 80
static void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);






static bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void );





static void RF230RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);
#line 75
static bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 52 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RF230RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);
# 46 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0xb6d8e480);
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0xb6d8e480, 
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);




static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0xb6d8e480);
# 45 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0xb6d8e480);
# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0xb6d8e480);
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );
# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 59 "../../tos/interfaces/SendNotifier.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(
# 48 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6a780, 
# 59 "../../tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
#line 94
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(
# 45 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6b088, 
# 80 "../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(
# 45 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6b088);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6a108, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(
# 46 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6ba48, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(
# 51 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6ae80, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 177 "../../tos/interfaces/AMPacket.nc"
static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(
#line 173
message_t * amsg);
#line 88
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
#line 187
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);







static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(
# 52 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d69600, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 55 "../../tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "../../tos/interfaces/Resource.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cee948);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cee948);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6ced5c0);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6ced5c0);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 97 "../../tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 102 "../../tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "../../tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);
# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubReceive__receive(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 131 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 94
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 162
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);










static ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 146
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 185
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 105
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 80 "../../tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0xb6c0e948, 
# 46 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0xb6c0e948, 
# 51 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "../../tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "../../tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "../../tos/lib/rfxlink/util/RadioState.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 48 "../../tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );
#line 56
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 52 "../../tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );
#line 56
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );
# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 70 "../../tos/interfaces/PacketTimeStamp.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 78
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0xb6af7a68, 
# 55 "../../tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0xb6af7a68, 
# 40 "../../tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);









static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0xb6af7a68, 
# 50 "../../tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 52 "../../tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverLayerP__RadioCCA__default__done(error_t error);
# 51 "../../tos/lib/rfxlink/util/PacketField.nc"
static void RF230DriverLayerP__PacketRSSI__clear(message_t *msg);





static void RF230DriverLayerP__PacketRSSI__set(message_t *msg, RF230DriverLayerP__PacketRSSI__value_type value);
# 62 "../../tos/interfaces/Init.nc"
static error_t RF230DriverLayerP__SoftwareInit__init(void );
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverLayerP__RadioAlarm__fired(void );
# 56 "../../tos/lib/rfxlink/util/RadioState.nc"
static error_t RF230DriverLayerP__RadioState__turnOn(void );
# 46 "../../tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketTransmitPower__value_type RF230DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 40
static bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void );
#line 54
static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void RF230DriverLayerP__releaseSpi__runTask(void );
# 46 "../../tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketTimeSyncOffset__value_type RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);
# 62 "../../tos/interfaces/Init.nc"
static error_t RF230DriverLayerP__PlatformInit__init(void );
# 102 "../../tos/interfaces/Resource.nc"
static void RF230DriverLayerP__SpiResource__granted(void );
# 46 "../../tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketLinkQuality__value_type RF230DriverLayerP__PacketLinkQuality__get(message_t *msg);










static void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, RF230DriverLayerP__PacketLinkQuality__value_type value);
# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg);
# 61 "../../tos/interfaces/GpioCapture.nc"
static void RF230DriverLayerP__IRQ__captured(uint16_t time);
# 47 "../../tos/interfaces/LinkPacketMetadata.nc"
static bool RF230DriverLayerP__LinkPacketMetadata__highChannelQuality(
#line 44
message_t * msg);
# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverLayerP__Tasklet__run(void );
# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__captured(HplRF230P__Capture__size_type t);
# 62 "../../tos/interfaces/Init.nc"
static error_t HplRF230P__PlatformInit__init(void );
# 66 "../../tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__disable(void );
#line 53
static error_t HplRF230P__IRQ__captureRisingEdge(void );
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void Atm128SpiP__ResourceConfigure__unconfigure(
# 95 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0xb6a0cae8);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void Atm128SpiP__ResourceConfigure__configure(
# 95 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0xb6a0cae8);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 82 "../../tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 45 "../../tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "../../tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 62 "../../tos/interfaces/FastSpiByte.nc"
static void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t Atm128SpiP__FastSpiByte__splitRead(void );
#line 81
static uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
# 89 "../../tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 141
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);




static bool HplAtm128SpiP__SPI__isInterruptPending(void );
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cee948);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cee948);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 97 "../../tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 102 "../../tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 128 "../../tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );
# 91 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );
#line 83
static void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__reset(void );
#line 54
static void HplAtm1281Timer1P__CompareA__set(HplAtm1281Timer1P__CompareA__size_type t);










static void HplAtm1281Timer1P__CompareA__start(void );


static void HplAtm1281Timer1P__CompareA__stop(void );
# 88 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__setEdge(bool up);
#line 47
static HplAtm1281Timer1P__Capture__size_type HplAtm1281Timer1P__Capture__get(void );
#line 64
static void HplAtm1281Timer1P__Capture__reset(void );


static void HplAtm1281Timer1P__Capture__start(void );


static void HplAtm1281Timer1P__Capture__stop(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__default__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__default__fired(void );
# 87 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm1281Timer1P__Timer__test(void );
#line 61
static HplAtm1281Timer1P__Timer__timer_size HplAtm1281Timer1P__Timer__get(void );
#line 104
static void HplAtm1281Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer1P__Timer__set(HplAtm1281Timer1P__Timer__timer_size t);










static void HplAtm1281Timer1P__Timer__start(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 103
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 66
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);






static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 61 "../../tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 43 "../../tos/lib/net/CollectionPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg);
# 72 "../../tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
# 31 "../../tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(
# 114 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0xb68a56d8, 
# 20 "../../tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void );
#line 94
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(
# 113 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0xb68a5030, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(
# 111 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0xb68a8ee0, 
# 67 "../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(
# 111 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0xb68a8ee0, 
# 122 "../../tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(
# 111 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0xb68a8ee0);
# 100 "../../tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(
# 111 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0xb68a8ee0, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 83 "../../tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t error);
#line 138
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(
# 112 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0xb68a7930, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 7 "../../tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void );
# 51 "../../tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void );
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void );
# 52 "../../tos/lib/net/ctp/CtpPacket.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt);





static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t etx);
#line 49
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t option);







static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg);


static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg);
#line 46
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t option);







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg);








static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg);





static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2);
#line 66
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg);
#line 55
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 46 "../../tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__default__fetch(
# 146 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0xb6892780);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t * 


/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 61
static bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void );
#line 89
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(
#line 85
/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void );
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t * 


/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 61
static bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void );
#line 89
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(
#line 85
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void );
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
/*CtpP.SendQueueP*/QueueC__0__Queue__t  

/*CtpP.SendQueueP*/QueueC__0__Queue__head(void );
#line 97
static error_t /*CtpP.SendQueueP*/QueueC__0__Queue__enqueue(
#line 93
/*CtpP.SendQueueP*/QueueC__0__Queue__t  newVal);
#line 108
static 
#line 106
/*CtpP.SendQueueP*/QueueC__0__Queue__t  

/*CtpP.SendQueueP*/QueueC__0__Queue__element(uint8_t idx);
#line 72
static uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__maxSize(void );
#line 88
static 
#line 86
/*CtpP.SendQueueP*/QueueC__0__Queue__t  

/*CtpP.SendQueueP*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*CtpP.SendQueueP*/QueueC__0__Queue__empty(void );
#line 65
static uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__size(void );
# 51 "../../tos/interfaces/Cache.nc"
static void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t item);







static bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t item);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "../../tos/lib/net/4bitle/LinkEstimator.nc"
static error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor);
#line 55
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor);










static error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor);
#line 52
static error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 69
static error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 58
static error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
#line 49
static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(uint16_t neighbor);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


LinkEstimatorP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t LinkEstimatorP__Packet__maxPayloadLength(void );
# 110 "../../tos/interfaces/AMSend.nc"
static void LinkEstimatorP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
#line 80
static error_t LinkEstimatorP__Send__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

LinkEstimatorP__Send__getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t LinkEstimatorP__Send__maxPayloadLength(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t LinkEstimatorP__Init__init(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t LinkEstimatorP__StdControl__start(void );
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void );
# 100 "../../tos/interfaces/Send.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0xb67093b0, 
# 103 "../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0xb670a958, 
# 67 "../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0xb670a958);
# 100 "../../tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0xb670a958, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 43 "../../tos/lib/net/RootControl.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void );
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void );
# 72 "../../tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
# 46 "../../tos/lib/net/ctp/CtpRoutingPacket.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t * msg, ctp_options_t opt);
# 113 "../../tos/interfaces/SplitControl.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error);
#line 138
static void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error);
# 83 "../../tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void );
#line 71
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void );
#line 64
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 78
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );









static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void );
# 110 "../../tos/interfaces/AMSend.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 83 "../../tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void );
#line 83
static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void );
# 51 "../../tos/lib/net/ctp/CompareBit.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CompareBit__shouldInsert(message_t * msg, void * payload, uint8_t len);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void );
# 49 "../../tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void );
#line 48
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void );
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 46 "../../tos/lib/net/CollectionId.nc"
static collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP__0__CollectionId__fetch(void );
# 100 "../../tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb65f53a8, 
# 80 "../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(
# 47 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb65f53a8, 
# 132 "../../tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 94
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb65f5d68, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "../../tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "../../tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "../../tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6537c50, 
# 67 "../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6537c50, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6537610, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6534768, 
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6534768);
# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6534768, 
# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "../../tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "../../tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "../../tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "../../tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "../../tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "../../tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "../../tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 83 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareA__default__fired(void );
# 47 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm1281Timer3P__Capture__size_type HplAtm1281Timer3P__Capture__get(void );
#line 60
static void HplAtm1281Timer3P__Capture__default__captured(HplAtm1281Timer3P__Capture__size_type t);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareB__default__fired(void );
#line 58
static void HplAtm1281Timer3P__CompareC__default__fired(void );
# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer3P__Timer__set(HplAtm1281Timer3P__Timer__timer_size t);










static void HplAtm1281Timer3P__Timer__start(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
#line 70
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void );
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0xb67093b0, 
# 103 "../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0xb670a958, 
# 67 "../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0xb670a958, 
# 122 "../../tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0xb670a958, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__t * 


/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__get(void );
#line 89
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__put(
#line 85
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__t * newVal);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Init__init(void );
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__t  

/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__head(void );
#line 97
static error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__enqueue(
#line 93
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__t  newVal);
#line 72
static uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__maxSize(void );
#line 88
static 
#line 86
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__t  

/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__empty(void );
#line 65
static uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__size(void );
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__t * 


/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__get(void );
#line 61
static bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__empty(void );
#line 89
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__put(
#line 85
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__t * newVal);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Init__init(void );
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__t  

/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__head(void );
#line 97
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__enqueue(
#line 93
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__t  newVal);
#line 72
static uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__maxSize(void );
#line 88
static 
#line 86
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__t  

/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__dequeue(void );
#line 50
static bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__empty(void );
#line 65
static uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__size(void );
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 61 "../../tos/lib/net/CollectionDebug.nc"
static error_t UARTDebugSenderP__CollectionDebug__logEvent(uint8_t type);
#line 73
static error_t UARTDebugSenderP__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);





static error_t UARTDebugSenderP__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 67
static error_t UARTDebugSenderP__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 60 "../../tos/interfaces/Boot.nc"
static void UARTDebugSenderP__Boot__booted(void );
# 110 "../../tos/interfaces/AMSend.nc"
static void UARTDebugSenderP__UARTSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void UARTDebugSenderP__sendTask__runTask(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "../../tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "../../tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "../../tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
# 67 "../../tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4365 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 137
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
#line 154
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "../../tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "../../tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "../../tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "../../tos/system/RealMainP.nc"
int main(void )   ;
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0xb733a010);
# 76 "../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4366 {

  SchedulerBasicP__NUM_TASKS = 31U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 99 "../../tos/chips/atm1281/McuSleepC.nc"
const uint8_t __attribute((__progmem__)) McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 147
static inline void McuSleepC__McuSleep__sleep(void );
#line 161
static inline void McuSleepC__McuPowerState__update(void );
# 41 "../../tos/lib/net/RootControl.nc"
static error_t MultihopOscilloscopeC__RootControl__setRoot(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t MultihopOscilloscopeC__SerialControl__start(void );
# 78 "../../tos/interfaces/AMPacket.nc"
static am_addr_t MultihopOscilloscopeC__RadioAMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void MultihopOscilloscopeC__RadioAMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t MultihopOscilloscopeC__uartSendTask__postTask(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t MultihopOscilloscopeC__RadioControl__start(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t MultihopOscilloscopeC__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

MultihopOscilloscopeC__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t MultihopOscilloscopeC__Send__maxPayloadLength(void );
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
MultihopOscilloscopeC__UARTMessagePool__t * 


MultihopOscilloscopeC__UARTMessagePool__get(void );
#line 89
static error_t MultihopOscilloscopeC__UARTMessagePool__put(
#line 85
MultihopOscilloscopeC__UARTMessagePool__t * newVal);
# 55 "../../tos/interfaces/Read.nc"
static error_t MultihopOscilloscopeC__Read__read(void );
# 80 "../../tos/interfaces/AMSend.nc"
static error_t MultihopOscilloscopeC__SerialSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

MultihopOscilloscopeC__SerialSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t MultihopOscilloscopeC__RoutingControl__start(void );
# 67 "../../tos/interfaces/Leds.nc"
static void MultihopOscilloscopeC__Leds__led0Toggle(void );




static void MultihopOscilloscopeC__Leds__led1On(void );










static void MultihopOscilloscopeC__Leds__led1Toggle(void );
#line 100
static void MultihopOscilloscopeC__Leds__led2Toggle(void );
#line 56
static void MultihopOscilloscopeC__Leds__led0On(void );
#line 89
static void MultihopOscilloscopeC__Leds__led2On(void );
# 97 "../../tos/interfaces/Queue.nc"
static error_t MultihopOscilloscopeC__UARTQueue__enqueue(
#line 93
MultihopOscilloscopeC__UARTQueue__t  newVal);
#line 88
static 
#line 86
MultihopOscilloscopeC__UARTQueue__t  

MultihopOscilloscopeC__UARTQueue__dequeue(void );
#line 50
static bool MultihopOscilloscopeC__UARTQueue__empty(void );
# 92 "../../tos/lib/timer/Timer.nc"
static bool MultihopOscilloscopeC__Timer__isRunning(void );
#line 64
static void MultihopOscilloscopeC__Timer__startPeriodic(uint32_t dt);
#line 78
static void MultihopOscilloscopeC__Timer__stop(void );
# 51 "MultihopOscilloscopeC.nc"
enum MultihopOscilloscopeC____nesc_unnamed4367 {
#line 51
  MultihopOscilloscopeC__uartSendTask = 0U
};
#line 51
typedef int MultihopOscilloscopeC____nesc_sillytask_uartSendTask[MultihopOscilloscopeC__uartSendTask];
static void MultihopOscilloscopeC__startTimer(void );
static void MultihopOscilloscopeC__fatal_problem(void );
inline static void MultihopOscilloscopeC__report_problem(void );
inline static void MultihopOscilloscopeC__report_sent(void );
inline static void MultihopOscilloscopeC__report_received(void );

uint8_t MultihopOscilloscopeC__uartlen;
message_t MultihopOscilloscopeC__sendbuf;
message_t MultihopOscilloscopeC__uartbuf;
bool MultihopOscilloscopeC__sendbusy = FALSE;
#line 61
bool MultihopOscilloscopeC__uartbusy = FALSE;


oscilloscope_t MultihopOscilloscopeC__local;

uint8_t MultihopOscilloscopeC__reading;






bool MultihopOscilloscopeC__suppress_count_change;





static inline void MultihopOscilloscopeC__Boot__booted(void );
#line 92
static inline void MultihopOscilloscopeC__RadioControl__startDone(error_t error);










static inline void MultihopOscilloscopeC__SerialControl__startDone(error_t error);










static void MultihopOscilloscopeC__startTimer(void );





static inline void MultihopOscilloscopeC__RadioControl__stopDone(error_t error);
static inline void MultihopOscilloscopeC__SerialControl__stopDone(error_t error);






static message_t *
MultihopOscilloscopeC__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 178
static inline void MultihopOscilloscopeC__uartSendTask__runTask(void );







static void MultihopOscilloscopeC__SerialSend__sendDone(message_t *msg, error_t error);
#line 208
static inline message_t *
MultihopOscilloscopeC__Snoop__receive(message_t *msg, void *payload, uint8_t len);
#line 235
static inline void MultihopOscilloscopeC__Timer__fired(void );
#line 263
static inline void MultihopOscilloscopeC__Send__sendDone(message_t *msg, error_t error);








static inline void MultihopOscilloscopeC__Read__readDone(error_t result, uint16_t data);










static void MultihopOscilloscopeC__fatal_problem(void );






inline static void MultihopOscilloscopeC__report_problem(void );
inline static void MultihopOscilloscopeC__report_sent(void );
inline static void MultihopOscilloscopeC__report_received(void );
# 42 "../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );
static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );









static inline void LedsP__Leds__led0Toggle(void );




static inline void LedsP__Leds__led1On(void );









static inline void LedsP__Leds__led1Toggle(void );




static inline void LedsP__Leds__led2On(void );









static inline void LedsP__Leds__led2Toggle(void );
# 89 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 82
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control);
#line 81
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control);
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void );
# 68 "../../tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void );
# 48 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void );
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void );
# 73 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0;
#line 74
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0____nesc_unnamed4368 {
  Atm1281AlarmAsyncP__0__MINDT = 2, 
  Atm1281AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
#line 112
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n);
#line 128
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );
#line 187
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
#line 199
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
#line 242
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer2AsyncP__Compare__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer2AsyncP__Timer__overflow(void );
# 99 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void );
#line 131
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x);





static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x);
#line 154
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 181
static inline void HplAtm1281Timer2AsyncP__Compare__start(void );









static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void );


static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void );
#line 219
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
#line 242
void __vector_13(void ) __attribute((signal))   ;







void __vector_15(void ) __attribute((signal))   ;
#line 266
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 278
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4369 {
#line 74
  AlarmToTimerC__0__fired = 1U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0xb70819f0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4370 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 2U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4371 {

  VirtualizeTimerC__0__NUM_TIMERS = 5, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4372 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void AccelP__SplitControl__startDone(error_t error);
#line 138
static void AccelP__SplitControl__stopDone(error_t error);
# 20 "../../tos/platforms/mica/MicaBusAdc.nc"
static uint8_t AccelP__AccelAdcX__getChannel(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t AccelP__stopDone__postTask(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void AccelP__AccelPin__makeOutput(void );
#line 40
static void AccelP__AccelPin__set(void );
static void AccelP__AccelPin__clr(void );
# 73 "../../tos/lib/timer/Timer.nc"
static void AccelP__Timer__startOneShot(uint32_t dt);
# 67 "../../tos/sensorboards/mts300/AccelP.nc"
enum AccelP____nesc_unnamed4373 {
#line 67
  AccelP__stopDone = 3U
};
#line 67
typedef int AccelP____nesc_sillytask_stopDone[AccelP__stopDone];
#line 30
static inline uint8_t AccelP__ConfigX__getChannel(void );



static inline uint8_t AccelP__ConfigX__getRefVoltage(void );



static inline uint8_t AccelP__ConfigX__getPrescaler(void );
#line 54
static error_t AccelP__SplitControl__start(void );








static inline void AccelP__Timer__fired(void );



static inline void AccelP__stopDone__runTask(void );




static inline error_t AccelP__SplitControl__stop(void );
# 32 "../../tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc3__getChannel(void );
# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP__IntSig6__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig1__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig4__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig7__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig2__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig5__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig0__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig3__fired(void );
# 55 "../../tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void );
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void );
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void );
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void );
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void );
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void );
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void );
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void );
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Interrupt__fired(void );
# 38 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );



static inline void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Interrupt__default__fired(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Interrupt__fired(void );
# 38 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Atm128Interrupt__fired(void );



static inline void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Interrupt__default__fired(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Interrupt__fired(void );
# 38 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Atm128Interrupt__fired(void );



static inline void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Interrupt__default__fired(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Interrupt__fired(void );
# 38 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Atm128Interrupt__fired(void );



static inline void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Interrupt__default__fired(void );
# 49 "../../tos/system/RoundRobinResourceQueueC.nc"
enum /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4374 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f907b0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f8fc18);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f8fc18);
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "../../tos/interfaces/Resource.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f91d70);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "../../tos/system/ArbiterP.nc"
enum /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4375 {
#line 75
  ArbiterP__0__grantedTask = 4U
};
#line 75
typedef int /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4376 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4377 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4378 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static inline error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 184
static inline bool /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__isOwner(void );





static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 204
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start(void );
#line 130
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop(void );
# 62 "../../tos/lib/power/PowerDownCleanup.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask(void );
# 56 "../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release(void );








static bool /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start(void );









static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop(void );
# 73 "../../tos/lib/power/PowerManagerP.nc"
enum /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0____nesc_unnamed4379 {
#line 73
  PowerManagerP__0__startTask = 5U
};
#line 73
typedef int /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0____nesc_sillytask_startTask[/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask];




enum /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0____nesc_unnamed4380 {
#line 78
  PowerManagerP__0__stopTask = 6U
};
#line 78
typedef int /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0____nesc_sillytask_stopTask[/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask];
#line 70
bool /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopping = FALSE;
bool /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__requested = FALSE;

static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void );




static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void );





static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void );







static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error);




static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error);










static inline error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void );







static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "../../tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__readDone(
# 24 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f48ea0, 
# 63 "../../tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__read(
# 26 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f45f20);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__release(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__request(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);



static inline error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__read(uint8_t client);



static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__granted(uint8_t client);



static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__0__width_t data);








static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__0__width_t data);
static inline error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__default__read(uint8_t client);
# 55 "../../tos/interfaces/Read.nc"
static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Service__read(
# 26 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f45f20);








static inline void /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Resource__granted(uint8_t client);
#line 49
static inline error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Service__default__read(uint8_t client);
# 119 "../../tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 81 "../../tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 53 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );








static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
# 53 "../../tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 71 "../../tos/chips/atm1281/adc/Atm128AdcP.nc"
#line 67
struct Atm128AdcP____nesc_unnamed4381 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP__f;
#line 71
#line 67
struct Atm128AdcP____nesc_unnamed4381 



Atm128AdcP__nextF;

static inline error_t Atm128AdcP__Init__init(void );
#line 93
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);



static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 172
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 196
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 230
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 156 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 52 "../../tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 53 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );



static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 83
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 116
void __vector_29(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 49 "../../tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1____nesc_unnamed4382 {
  RoundRobinResourceQueueC__1__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__1__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(
# 55 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f907b0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f8fc18);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f8fc18);
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 73 "../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
# 102 "../../tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0xb6f91d70);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "../../tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4383 {
#line 75
  ArbiterP__1__grantedTask = 7U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4384 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4385 {
#line 68
  ArbiterP__1__default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4386 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;



static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
#line 111
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 190
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "../../tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "../../tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 69 "../../tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 66 "../../tos/lib/timer/BusyWait.nc"
static void AdcP__BusyWait__wait(AdcP__BusyWait__size_type dt);
# 63 "../../tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6ebb508, 
# 63 "../../tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "../../tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6eb94a8, 
# 66 "../../tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6eb89c0);
# 25 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6eb89c0);
# 39 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "../../tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0xb6eb89c0);
# 70 "../../tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 104 "../../tos/chips/atm1281/adc/AdcP.nc"
enum AdcP____nesc_unnamed4387 {
#line 104
  AdcP__acquiredData = 8U
};
#line 104
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 58
enum AdcP____nesc_unnamed4388 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP__Read__read(uint8_t c);







static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 144
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 40 "../../tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 63 "../../tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__readDone(
# 24 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f48ea0, 
# 63 "../../tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__read(
# 26 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f45f20);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__release(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__request(
# 27 "../../tos/system/ArbitratedReadC.nc"
uint8_t arg_0xb6f44df0);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__width_t data);




static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__default__request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__width_t data);
# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__run(void );
# 76 "../../tos/lib/rfxlink/util/TaskletC.nc"
uint8_t /*RF230RadioC.TaskletC*/TaskletC__0__state;

static void /*RF230RadioC.TaskletC*/TaskletC__0__doit(void );
#line 98
static __inline void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__suspend(void );




static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__resume(void );
#line 116
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule(void );
# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size RF230RadioP__RadioAlarm__getNow(void );
# 131 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t RF230RadioP__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool RF230RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void RF230RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void RF230RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void RF230RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool RF230RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 94
static bool RF230RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool RF230RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 146
static void RF230RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void RF230RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 105
static void RF230RadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool RF230RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 73 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg);




static inline uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void );




static inline uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg);




static inline uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void );





static inline bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg);






static inline bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);




static inline void RF230RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);




static inline bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);








static inline uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void );




static inline void RF230RadioP__SoftwareAckConfig__reportChannelError(void );








static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RF230RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);




static inline am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);




static inline am_group_t RF230RadioP__ActiveMessageConfig__group(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);




static inline error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 244
static inline uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 285
static inline void RF230RadioP__RadioAlarm__fired(void );
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0xb6d8e480);
# 109 "../../tos/lib/timer/Alarm.nc"
static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);






static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void );
# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 66 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4389 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
#line 88
static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);








static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id);
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg);
# 59 "../../tos/interfaces/SendNotifier.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(
# 48 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6a780, 
# 59 "../../tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6b088, 
# 103 "../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6a108, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(message_t *msg);










static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg);
#line 46
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg);
#line 40
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);








static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp);
# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void );
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6ba48, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(
# 51 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d6ae80, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(
# 52 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0xb6d69600, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);






static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 98
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 112
static __inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(am_id_t id);









static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg);





static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 143
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );




static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );




static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);






static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr);




static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type);




static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp);










static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 265
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );




static void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len);
# 63 "../../tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 94
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 120
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
#line 97
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void );
#line 88
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void );
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "../../tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;

static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
#line 68
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "../../tos/system/FcfsResourceQueueC.nc"
enum /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4390 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cee948);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cee948);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6ced5c0);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6ced5c0);
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "../../tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 68 "../../tos/system/SimpleArbiterP.nc"
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4391 {
#line 68
  SimpleArbiterP__0__grantedTask = 9U
};
#line 68
typedef int /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4392 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4393 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;



static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 83
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 149
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );








static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 185 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "../../tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 91 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 145
enum /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4394 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 214
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Receive__receive(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 59 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4395 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 94
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);






static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);










static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);








static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);







static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 160
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);




static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);






static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 284
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 317
static inline message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubReceive__receive(message_t *msg);
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "../../tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);










static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 116
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 80 "../../tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t idx);
# 49 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[5];
uint8_t NeighborhoodP__ages[5];
uint8_t NeighborhoodP__flags[5];
uint8_t NeighborhoodP__time;
uint8_t NeighborhoodP__last;

static inline error_t NeighborhoodP__Init__init(void );
#line 94
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 113 "../../tos/interfaces/SplitControl.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 56 "../../tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "../../tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4396 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 10U
};
#line 144
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4397 {
#line 189
  MessageBufferLayerP__0__sendTask = 11U
};
#line 189
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4398 {
#line 322
  MessageBufferLayerP__0__deliverTask = 12U
};
#line 322
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4399 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 144
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4400 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 291
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4401 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "../../tos/interfaces/Random.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4402 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 13U
};
#line 78
typedef int /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state;
enum /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4403 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg;
uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier;

static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );





uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 110
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 155
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);







static inline bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 52 "../../tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg);
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout);




static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void );
#line 45
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void );
# 55 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg);
#line 40
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg);









static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg);
# 86 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void );
#line 80
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg);






static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg);






static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void );





static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack);
#line 75
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg);
# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg);
# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error);
# 60 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
uint8_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state;
enum /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0____nesc_unnamed4404 {

  SoftwareAckLayerC__0__STATE_READY = 0, 
  SoftwareAckLayerC__0__STATE_DATA_SEND = 1, 
  SoftwareAckLayerC__0__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerC__0__STATE_ACK_SEND = 3
};

message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg;
message_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg;

static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );





static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
#line 97
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
#line 124
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );









static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
#line 147
static inline message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 181
static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg);
#line 195
static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg);
# 55 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 50
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);
#line 77
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static inline bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);
#line 90
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 52 "../../tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverLayerP__RadioCCA__done(error_t error);
# 66 "../../tos/lib/timer/BusyWait.nc"
static void RF230DriverLayerP__BusyWait__wait(RF230DriverLayerP__BusyWait__size_type dt);
# 55 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static void RF230DriverLayerP__RSSIFlag__clear(message_t *msg);
#line 50
static void RF230DriverLayerP__RSSIFlag__set(message_t *msg);
# 70 "../../tos/interfaces/PacketTimeStamp.nc"
static void RF230DriverLayerP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void RF230DriverLayerP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RF230DriverLayerP__PacketTimeStamp__size_type value);
# 46 "../../tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__RSTN__makeOutput(void );
#line 40
static void RF230DriverLayerP__RSTN__set(void );
static void RF230DriverLayerP__RSTN__clr(void );
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverLayerP__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool RF230DriverLayerP__RadioAlarm__isFree(void );
#line 65
static tradio_size RF230DriverLayerP__RadioAlarm__getNow(void );
# 69 "../../tos/lib/rfxlink/util/RadioState.nc"
static void RF230DriverLayerP__RadioState__done(void );
# 61 "../../tos/lib/timer/LocalTime.nc"
static uint32_t RF230DriverLayerP__LocalTime__get(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__SLP_TR__makeOutput(void );
#line 40
static void RF230DriverLayerP__SLP_TR__set(void );
static void RF230DriverLayerP__SLP_TR__clr(void );
# 46 "../../tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230DriverLayerP__Config__maxPayloadLength(void );
#line 40
static uint8_t RF230DriverLayerP__Config__headerLength(message_t *msg);
#line 52
static uint8_t RF230DriverLayerP__Config__metadataLength(message_t *msg);






static uint8_t RF230DriverLayerP__Config__headerPreloadLength(void );





static bool RF230DriverLayerP__Config__requiresRssiCca(message_t *msg);
# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RF230DriverLayerP__RadioReceive__receive(message_t *msg);
#line 46
static bool RF230DriverLayerP__RadioReceive__header(message_t *msg);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t RF230DriverLayerP__releaseSpi__postTask(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t RF230DriverLayerP__SpiResource__release(void );
#line 97
static error_t RF230DriverLayerP__SpiResource__immediateRequest(void );
#line 88
static error_t RF230DriverLayerP__SpiResource__request(void );
#line 128
static bool RF230DriverLayerP__SpiResource__isOwner(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__SELN__makeOutput(void );
#line 40
static void RF230DriverLayerP__SELN__set(void );
static void RF230DriverLayerP__SELN__clr(void );
# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void RF230DriverLayerP__RadioSend__ready(void );
#line 56
static void RF230DriverLayerP__RadioSend__sendDone(error_t error);
# 66 "../../tos/interfaces/GpioCapture.nc"
static void RF230DriverLayerP__IRQ__disable(void );
#line 53
static error_t RF230DriverLayerP__IRQ__captureRisingEdge(void );
# 62 "../../tos/interfaces/FastSpiByte.nc"
static void RF230DriverLayerP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t RF230DriverLayerP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t RF230DriverLayerP__FastSpiByte__splitRead(void );
#line 81
static uint8_t RF230DriverLayerP__FastSpiByte__write(uint8_t data);
# 40 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static bool RF230DriverLayerP__TimeSyncFlag__get(message_t *msg);
#line 55
static void RF230DriverLayerP__TransmitPowerFlag__clear(message_t *msg);
#line 40
static bool RF230DriverLayerP__TransmitPowerFlag__get(message_t *msg);
# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverLayerP__Tasklet__schedule(void );
# 856 "../../tos/chips/rf230/RF230DriverLayerP.nc"
enum RF230DriverLayerP____nesc_unnamed4405 {
#line 856
  RF230DriverLayerP__releaseSpi = 14U
};
#line 856
typedef int RF230DriverLayerP____nesc_sillytask_releaseSpi[RF230DriverLayerP__releaseSpi];
#line 96
static inline rf230_header_t *RF230DriverLayerP__getHeader(message_t *msg);




static void *RF230DriverLayerP__getPayload(message_t *msg);




static rf230_metadata_t *RF230DriverLayerP__getMeta(message_t *msg);






uint8_t RF230DriverLayerP__state;
enum RF230DriverLayerP____nesc_unnamed4406 {

  RF230DriverLayerP__STATE_P_ON = 0, 
  RF230DriverLayerP__STATE_SLEEP = 1, 
  RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RF230DriverLayerP__STATE_TRX_OFF = 3, 
  RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RF230DriverLayerP__STATE_RX_ON = 5, 
  RF230DriverLayerP__STATE_BUSY_TX_2_RX_ON = 6
};

uint8_t RF230DriverLayerP__cmd;
enum RF230DriverLayerP____nesc_unnamed4407 {

  RF230DriverLayerP__CMD_NONE = 0, 
  RF230DriverLayerP__CMD_TURNOFF = 1, 
  RF230DriverLayerP__CMD_STANDBY = 2, 
  RF230DriverLayerP__CMD_TURNON = 3, 
  RF230DriverLayerP__CMD_TRANSMIT = 4, 
  RF230DriverLayerP__CMD_RECEIVE = 5, 
  RF230DriverLayerP__CMD_CCA = 6, 
  RF230DriverLayerP__CMD_CHANNEL = 7, 
  RF230DriverLayerP__CMD_SIGNAL_DONE = 8, 
  RF230DriverLayerP__CMD_DOWNLOAD = 9
};

bool RF230DriverLayerP__radioIrq;

uint8_t RF230DriverLayerP__txPower;
uint8_t RF230DriverLayerP__channel;

message_t *RF230DriverLayerP__rxMsg;
message_t RF230DriverLayerP__rxMsgBuffer;

uint16_t RF230DriverLayerP__capturedTime;

uint8_t RF230DriverLayerP__rssiClear;
uint8_t RF230DriverLayerP__rssiBusy;



static __inline void RF230DriverLayerP__writeRegister(uint8_t reg, uint8_t value);
#line 167
static __inline uint8_t RF230DriverLayerP__readRegister(uint8_t reg);
#line 183
enum RF230DriverLayerP____nesc_unnamed4408 {

  RF230DriverLayerP__SLEEP_WAKEUP_TIME = (uint16_t )(880 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverLayerP__CCA_REQUEST_TIME = (uint16_t )(140 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 

  RF230DriverLayerP__TX_SFD_DELAY = (uint16_t )(176 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverLayerP__RX_SFD_DELAY = (uint16_t )(8 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL)
};

static inline void RF230DriverLayerP__RadioAlarm__fired(void );
#line 218
static inline error_t RF230DriverLayerP__PlatformInit__init(void );
#line 236
static inline error_t RF230DriverLayerP__SoftwareInit__init(void );





static inline void RF230DriverLayerP__initRadio(void );
#line 270
static inline void RF230DriverLayerP__SpiResource__granted(void );
#line 282
static bool RF230DriverLayerP__isSpiAcquired(void );
#line 319
static __inline void RF230DriverLayerP__changeChannel(void );
#line 337
static __inline void RF230DriverLayerP__changeState(void );
#line 419
static inline error_t RF230DriverLayerP__RadioState__turnOn(void );
#line 436
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg);
#line 608
static inline void RF230DriverLayerP__RadioCCA__default__done(error_t error);



static __inline void RF230DriverLayerP__downloadMessage(void );
#line 697
static inline void RF230DriverLayerP__IRQ__captured(uint16_t time);
#line 710
static inline void RF230DriverLayerP__serviceRadio(void );
#line 856
static inline void RF230DriverLayerP__releaseSpi__runTask(void );




static inline void RF230DriverLayerP__Tasklet__run(void );
#line 891
static inline uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg);




static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg);




static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);








static inline uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg);
#line 929
static inline bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RF230DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 962
static inline void RF230DriverLayerP__PacketRSSI__clear(message_t *msg);




static inline void RF230DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 1008
static inline uint8_t RF230DriverLayerP__PacketLinkQuality__get(message_t *msg);








static inline void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value);






static inline bool RF230DriverLayerP__LinkPacketMetadata__highChannelQuality(message_t *msg);
# 44 "../../tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortCLKM__makeInput(void );
#line 41
static void HplRF230P__PortCLKM__clr(void );
# 88 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__setEdge(bool up);
#line 47
static HplRF230P__Capture__size_type HplRF230P__Capture__get(void );
#line 64
static void HplRF230P__Capture__reset(void );


static void HplRF230P__Capture__start(void );


static void HplRF230P__Capture__stop(void );
# 44 "../../tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortIRQ__makeInput(void );
#line 41
static void HplRF230P__PortIRQ__clr(void );
# 61 "../../tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__captured(uint16_t time);
# 53 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void );










static inline void HplRF230P__Capture__captured(uint16_t time);









static inline error_t HplRF230P__IRQ__captureRisingEdge(void );
#line 89
static inline void HplRF230P__IRQ__disable(void );
# 82 "../../tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 89 "../../tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 141
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);




static bool Atm128SpiP__Spi__isInterruptPending(void );
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 52 "../../tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 294 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4409 {
#line 294
  Atm128SpiP__zeroTask = 15U
};
#line 294
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 103
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4410 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};
#line 124
enum Atm128SpiP____nesc_unnamed4411 {
  Atm128SpiP__PLATFORM_MHZ = 8
};


static void Atm128SpiP__startSpi(void );
#line 165
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 192
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);



static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void );





static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 214
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
#line 249
static inline error_t Atm128SpiP__sendNextPart(void );
#line 294
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 349
static inline 
#line 348
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 392
static inline void Atm128SpiP__ResourceConfigure__configure(uint8_t id);



static inline void Atm128SpiP__ResourceConfigure__unconfigure(uint8_t id);
# 44 "../../tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
#line 46
static void HplAtm128SpiP__SS__makeOutput(void );
# 52 "../../tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "../../tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "../../tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 96 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 112
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_24(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "../../tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4412 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cee948);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cee948);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6ced5c0);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6ced5c0);
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void );
# 102 "../../tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0xb6cfdea8);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void );
# 68 "../../tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4413 {
#line 68
  SimpleArbiterP__1__grantedTask = 16U
};
#line 68
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4414 {
#line 62
  SimpleArbiterP__1__RES_IDLE = 0, SimpleArbiterP__1__RES_GRANTING = 1, SimpleArbiterP__1__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4415 {
#line 63
  SimpleArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;



static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id);
#line 83
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id);
#line 142
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );








static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__fired(void );
# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer1P__Timer__overflow(void );
# 90 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void );


static inline void HplAtm1281Timer1P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x);
#line 145
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );









static inline void HplAtm1281Timer1P__Capture__setEdge(bool up);



static inline void HplAtm1281Timer1P__Capture__reset(void );
static inline void HplAtm1281Timer1P__CompareA__reset(void );



static inline void HplAtm1281Timer1P__Timer__start(void );
static inline void HplAtm1281Timer1P__Capture__start(void );
static inline void HplAtm1281Timer1P__CompareA__start(void );




static inline void HplAtm1281Timer1P__Capture__stop(void );
static inline void HplAtm1281Timer1P__CompareA__stop(void );



static inline bool HplAtm1281Timer1P__Timer__test(void );
#line 214
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t);




static inline uint16_t HplAtm1281Timer1P__Capture__get(void );






void __vector_17(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareB__default__fired(void );
void __vector_18(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareC__default__fired(void );
void __vector_19(void ) __attribute((interrupt))   ;



void __vector_16(void ) __attribute((interrupt))   ;



void __vector_20(void ) __attribute((interrupt))   ;
# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 54
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 62 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 74
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );



static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);




static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 119
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );





static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "../../tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0____nesc_unnamed4416 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 43 "../../tos/lib/net/RootControl.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot(void );
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength(void );
# 61 "../../tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(uint8_t type);
#line 73
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 62 "../../tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(am_addr_t neighbor);



static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(am_addr_t neighbor);
# 51 "../../tos/interfaces/Cache.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item);







static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item);
# 31 "../../tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(
# 114 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0xb68a56d8, 
# 20 "../../tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(
# 113 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0xb68a5030, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "../../tos/interfaces/Random.nc"
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16(void );
# 100 "../../tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(
# 111 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0xb68a8ee0, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 92 "../../tos/lib/timer/Timer.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning(void );
#line 73
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(uint32_t dt);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask(void );
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head(void );
#line 97
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(
#line 93
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  newVal);
#line 108
static 
#line 106
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(uint8_t idx);
#line 88
static 
#line 86
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue(void );
#line 50
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty(void );
#line 65
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(void );
# 83 "../../tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes(void );
#line 71
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate(void );
#line 64
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 78
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength(void );
#line 94
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(
# 112 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0xb68a7930, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "../../tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute(void );
#line 48
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop(void );
# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * newVal);
# 78 "../../tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(
#line 74
message_t * amsg);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * newVal);
# 46 "../../tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__fetch(
# 146 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0xb6892780);
#line 234
enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4417 {
#line 234
  CtpForwardingEngineP__0__sendTask = 17U
};
#line 234
typedef int /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_sillytask_sendTask[/*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask];
#line 169
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t mask, uint16_t offset);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state);
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state);


enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4418 {
  CtpForwardingEngineP__0__QUEUE_CONGESTED = 0x1, 
  CtpForwardingEngineP__0__ROUTING_ON = 0x2, 
  CtpForwardingEngineP__0__RADIO_ON = 0x4, 
  CtpForwardingEngineP__0__ACK_PENDING = 0x8, 
  CtpForwardingEngineP__0__SENDING = 0x10
};


uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = 0;



uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__seqno;

enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4419 {
  CtpForwardingEngineP__0__CLIENT_COUNT = 1U
};






fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientEntries[/*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT];
fe_queue_entry_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[/*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT];







message_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsg;
message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr;

static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void );










static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void );
#line 239
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t err);









static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t window, uint16_t offset);
#line 262
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void );




static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void );





static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t err);





static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(message_t *m);
#line 294
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(uint8_t client, message_t *msg, uint8_t len);
#line 345
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(uint8_t client);



static inline void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(uint8_t client, message_t *msg, uint8_t len);
#line 371
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void );
#line 483
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success);
#line 527
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 578
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(message_t * m);
#line 668
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 733
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(message_t *msg, void *payload, uint8_t len);
#line 746
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void );





static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void );








static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);







static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(message_t *msg);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void );



static void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(message_t *msg, uint8_t len);








static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg);

static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg);
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg);
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t e);

static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t opt);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t opt);






static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2);
#line 835
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state);


static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state);






static inline 
#line 847
void 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(uint8_t client, message_t *msg, error_t error);



static inline 
#line 851
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__default__fetch(uint8_t client);
# 60 "../../tos/system/PoolP.nc"
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__free;
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__index;
/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t * /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[12];
/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool[12];

static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void );









static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void );
#line 88
static inline /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t */*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free;
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index;
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t * /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[12];
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool[12];

static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void );









static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void );
#line 88
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *newVal);
# 48 "../../tos/system/QueueC.nc"
/*CtpP.SendQueueP*/QueueC__0__queue_t  /*CtpP.SendQueueP*/QueueC__0__queue[13];
uint8_t /*CtpP.SendQueueP*/QueueC__0__head = 0;
uint8_t /*CtpP.SendQueueP*/QueueC__0__tail = 0;
uint8_t /*CtpP.SendQueueP*/QueueC__0__size = 0;

static inline bool /*CtpP.SendQueueP*/QueueC__0__Queue__empty(void );







static inline uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__size(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__maxSize(void );



static inline /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__head(void );



static inline void /*CtpP.SendQueueP*/QueueC__0__printQueue(void );
#line 89
static /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__dequeue(void );
#line 101
static error_t /*CtpP.SendQueueP*/QueueC__0__Queue__enqueue(/*CtpP.SendQueueP*/QueueC__0__queue_t newVal);
#line 116
static inline /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__element(uint8_t idx);
# 60 "../../tos/lib/net/ctp/CtpPacket.nc"
static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(message_t *msg);
#line 54
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(message_t *msg);








static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(message_t *msg);


static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(message_t *msg);
# 58 "../../tos/lib/net/ctp/LruCtpMsgCacheP.nc"
#line 53
typedef struct /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0____nesc_unnamed4420 {
  am_addr_t origin;
  uint8_t seqno;
  collection_id_t type;
  uint8_t thl;
} /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t;

/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[4];
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first;
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count;

static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void );
#line 84
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(message_t *m);
#line 100
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(uint8_t i);
#line 116
static void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(message_t *m);
#line 135
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(message_t *m);
# 72 "../../tos/lib/net/4bitle/LinkEstimator.nc"
static void LinkEstimatorP__LinkEstimator__evicted(am_addr_t neighbor);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t LinkEstimatorP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void LinkEstimatorP__Send__sendDone(
#line 103
message_t * msg, 






error_t error);
# 52 "../../tos/interfaces/Random.nc"
static uint16_t LinkEstimatorP__Random__rand16(void );
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP__SubPacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


LinkEstimatorP__SubPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t LinkEstimatorP__SubPacket__maxPayloadLength(void );
# 88 "../../tos/interfaces/AMPacket.nc"
static am_addr_t LinkEstimatorP__SubAMPacket__source(
#line 84
message_t * amsg);
#line 78
static am_addr_t LinkEstimatorP__SubAMPacket__destination(
#line 74
message_t * amsg);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "../../tos/lib/net/ctp/CompareBit.nc"
static bool LinkEstimatorP__CompareBit__shouldInsert(message_t * msg, void * payload, uint8_t len);
# 47 "../../tos/interfaces/LinkPacketMetadata.nc"
static bool LinkEstimatorP__LinkPacketMetadata__highChannelQuality(
#line 44
message_t * msg);
# 66 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
enum LinkEstimatorP____nesc_unnamed4421 {


  LinkEstimatorP__EVICT_ETX_THRESHOLD = 65, 


  LinkEstimatorP__MAX_PKT_GAP = 10, 
  LinkEstimatorP__BEST_ETX = 10, 
  LinkEstimatorP__INVALID_RVAL = 0xff, 
  LinkEstimatorP__INVALID_NEIGHBOR_ADDR = 0xff, 


  LinkEstimatorP__VERY_LARGE_ETX_VALUE = 0xffff, 


  LinkEstimatorP__ALPHA = 9, 


  LinkEstimatorP__DLQ_PKT_WINDOW = 5, 


  LinkEstimatorP__BLQ_PKT_WINDOW = 3, 



  LinkEstimatorP__LARGE_ETX_VALUE = 70
};


neighbor_table_entry_t LinkEstimatorP__NeighborTable[10];

uint8_t LinkEstimatorP__linkEstSeq = 0;



uint8_t LinkEstimatorP__prevSentIdx = 0;


static inline linkest_header_t *LinkEstimatorP__getHeader(message_t *m);




static inline linkest_footer_t *LinkEstimatorP__getFooter(message_t *m, uint8_t len);







static inline uint8_t LinkEstimatorP__addLinkEstHeaderAndFooter(message_t *msg, uint8_t len);
#line 171
static void LinkEstimatorP__initNeighborIdx(uint8_t i, am_addr_t ll_addr);
#line 184
static uint8_t LinkEstimatorP__findIdx(am_addr_t ll_addr);
#line 197
static uint8_t LinkEstimatorP__findEmptyNeighborIdx(void );
#line 210
static uint8_t LinkEstimatorP__findWorstNeighborIdx(uint8_t thresholdETX);
#line 245
static inline uint8_t LinkEstimatorP__findRandomNeighborIdx(void );
#line 283
static void LinkEstimatorP__updateETX(neighbor_table_entry_t *ne, uint16_t newEst);





static void LinkEstimatorP__updateDETX(neighbor_table_entry_t *ne);
#line 308
static uint16_t LinkEstimatorP__computeETX(uint8_t q1);
#line 323
static inline void LinkEstimatorP__updateNeighborTableEst(am_addr_t n);
#line 362
static void LinkEstimatorP__updateNeighborEntryIdx(uint8_t idx, uint8_t seq);
#line 393
static inline void LinkEstimatorP__print_neighbor_table(void );
#line 407
static inline void LinkEstimatorP__print_packet(message_t *msg, uint8_t len);
#line 420
static inline void LinkEstimatorP__initNeighborTable(void );







static inline error_t LinkEstimatorP__StdControl__start(void );









static inline error_t LinkEstimatorP__Init__init(void );






static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(am_addr_t neighbor);
#line 461
static inline error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 489
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor);









static inline error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
#line 511
static inline error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor);
#line 528
static inline error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor);
#line 544
static inline error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 559
static inline error_t LinkEstimatorP__Send__send(am_addr_t addr, message_t *msg, uint8_t len);










static inline void LinkEstimatorP__AMSend__sendDone(message_t *msg, error_t error);








static inline uint8_t LinkEstimatorP__Send__maxPayloadLength(void );



static inline void *LinkEstimatorP__Send__getPayload(message_t *msg, uint8_t len);






static inline void LinkEstimatorP__processReceivedMessage(message_t * msg, void * payload, uint8_t len);
#line 666
static inline message_t *LinkEstimatorP__SubReceive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 682
static uint8_t LinkEstimatorP__Packet__payloadLength(message_t *msg);
#line 701
static inline uint8_t LinkEstimatorP__Packet__maxPayloadLength(void );




static void *LinkEstimatorP__Packet__getPayload(message_t *msg, uint8_t len);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength(void );
# 103 "../../tos/interfaces/AMPacket.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);



static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void );
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0xb67093b0, 
# 80 "../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0xb67093b0);
# 100 "../../tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0xb670a958, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "../../tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "../../tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4422 {
#line 126
  AMQueueImplP__0__CancelTask = 18U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4423 {
#line 169
  AMQueueImplP__0__errorTask = 19U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4424 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 2;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[2 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id);







static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask(void );
# 79 "../../tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 67
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 55 "../../tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(am_addr_t neighbor);
#line 52
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 69
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 58
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
#line 49
static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(uint16_t neighbor);
# 52 "../../tos/interfaces/Random.nc"
static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16(void );
#line 46
static uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask(void );
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength(void );
# 73 "../../tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(uint32_t dt);
#line 64
static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(uint32_t dt);
# 7 "../../tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested(void );
# 88 "../../tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address(void );
#line 147
static am_id_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__type(
#line 143
message_t * amsg);
# 51 "../../tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound(void );
static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute(void );
# 269 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
enum /*CtpP.Router*/CtpRoutingEngineP__0____nesc_unnamed4425 {
#line 269
  CtpRoutingEngineP__0__updateRouteTask = 20U
};
#line 269
typedef int /*CtpP.Router*/CtpRoutingEngineP__0____nesc_sillytask_updateRouteTask[/*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask];
#line 388
enum /*CtpP.Router*/CtpRoutingEngineP__0____nesc_unnamed4426 {
#line 388
  CtpRoutingEngineP__0__sendBeaconTask = 21U
};
#line 388
typedef int /*CtpP.Router*/CtpRoutingEngineP__0____nesc_sillytask_sendBeaconTask[/*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask];
#line 136
bool /*CtpP.Router*/CtpRoutingEngineP__0__ECNOff = TRUE;



bool /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;


bool /*CtpP.Router*/CtpRoutingEngineP__0__running = FALSE;

bool /*CtpP.Router*/CtpRoutingEngineP__0__sending = FALSE;


bool /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = FALSE;

route_info_t /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo;
bool /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root;
am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr;

message_t /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer;
ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg;


routing_table_entry /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[10];
uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive;


uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges;



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void );
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t arg_0xb66ac010);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t arg_0xb66ac5b8, am_addr_t arg_0xb66ac770, uint16_t arg_0xb66ac920);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor);
#line 181
uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 128;
uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__t;
bool /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed;

static void /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval(void );




static inline void /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval(void );






static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void );
#line 226
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void );
#line 244
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error);









static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error);






static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(uint16_t etx);







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void );
#line 388
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void );
#line 429
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(message_t *msg, error_t error);







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void );





static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void );
#line 458
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__getHeader(message_t * m);






static inline message_t */*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 515
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
#line 527
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void );


static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void );
#line 544
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 557
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested);
#line 599
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void );
#line 622
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void );
#line 643
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__CompareBit__shouldInsert(message_t *msg, void *payload, uint8_t len);
#line 692
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void );





static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t neighbor);
#line 710
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx);
#line 749
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor);
#line 782
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t *msg, ctp_options_t opt);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "../../tos/interfaces/AMPacket.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);
# 50 "../../tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP__0__CollectionId__fetch(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb65f53a8, 
# 103 "../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb65f5d68, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 97
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 172
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 113 "../../tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "../../tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "../../tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "../../tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4427 {
#line 191
  SerialP__RunTx = 22U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4428 {
#line 322
  SerialP__startDoneTask = 23U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4429 {
#line 332
  SerialP__stopDoneTask = 24U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4430 {
#line 341
  SerialP__defaultSerialFlushTask = 25U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4431 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4432 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4433 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4434 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4435 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4436 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4437 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4438 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 519
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 560
static inline void SerialP__RunTx__runTask(void );
#line 669
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "../../tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6537c50, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6537610, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6534768, 
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6534768);
# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb6534768, 
# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "../../tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "../../tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4439 {
#line 158
  SerialDispatcherP__0__signalSendDone = 26U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4440 {
#line 275
  SerialDispatcherP__0__receiveTask = 27U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4441 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4442 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4443 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "../../tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "../../tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "../../tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4444 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "../../tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "../../tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "../../tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "../../tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "../../tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 130 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 150
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 207
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 308
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareA__fired(void );
# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__size_type t);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer3P__CompareC__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P__Timer__overflow(void );
# 93 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer3P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t x);
#line 164
static inline void HplAtm1281Timer3P__Timer__start(void );
#line 219
static inline uint16_t HplAtm1281Timer3P__Capture__get(void );





static inline void HplAtm1281Timer3P__CompareA__default__fired(void );
void __vector_32(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__CompareB__default__fired(void );
void __vector_33(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__CompareC__default__fired(void );
void __vector_34(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__Capture__default__captured(uint16_t time);
void __vector_31(void ) __attribute((interrupt))   ;



void __vector_35(void ) __attribute((interrupt))   ;
# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale);
#line 67
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void );
# 51 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void );
# 65 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow(void );
# 67 "../../tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__1____nesc_unnamed4445 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void );
# 51 "../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "../../tos/interfaces/AMPacket.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err);







static inline void */*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__getPayload(message_t *m, uint8_t len);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0xb67093b0, 
# 80 "../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0xb67093b0, 
# 132 "../../tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0xb670a958, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void );
# 78 "../../tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(
#line 143
message_t * amsg);
# 126 "../../tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4446 {
#line 126
  AMQueueImplP__1__CancelTask = 28U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4447 {
#line 169
  AMQueueImplP__1__errorTask = 29U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4448 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 2;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[2];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[2 / 8 + 1];

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void );
#line 90
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
#line 163
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );




static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );
#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 211
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 60 "../../tos/system/PoolP.nc"
uint8_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__free;
uint8_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__index;
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t * /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__queue[10];
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool[10];

static inline error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Init__init(void );
#line 88
static inline /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t */*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__get(void );
#line 103
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__put(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t *newVal);
# 48 "../../tos/system/QueueC.nc"
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue[10];
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__head = 0;
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__tail = 0;
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__size = 0;

static inline bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__empty(void );







static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__size(void );



static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__maxSize(void );



static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__head(void );



static inline void /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__printQueue(void );
#line 89
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__dequeue(void );
#line 101
static inline error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__enqueue(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t newVal);
# 60 "../../tos/system/PoolP.nc"
uint8_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__free;
uint8_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__index;
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t * /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__queue[20];
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool[20];

static inline error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Init__init(void );









static inline bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__empty(void );
#line 88
static /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t */*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__get(void );
#line 103
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__put(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t *newVal);
# 48 "../../tos/system/QueueC.nc"
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue[20];
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__head = 0;
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__tail = 0;
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__size = 0;

static inline bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__empty(void );







static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__size(void );



static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__maxSize(void );



static inline /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__head(void );



static inline void /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__printQueue(void );
#line 89
static /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__dequeue(void );
#line 101
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__enqueue(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t newVal);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "../../tos/interfaces/AMPacket.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(message_t *m, error_t err);







static inline void */*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__getPayload(message_t *m, uint8_t len);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t UARTDebugSenderP__UARTSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

UARTDebugSenderP__UARTSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
UARTDebugSenderP__SendQueue__t  

UARTDebugSenderP__SendQueue__head(void );
#line 97
static error_t UARTDebugSenderP__SendQueue__enqueue(
#line 93
UARTDebugSenderP__SendQueue__t  newVal);
#line 88
static 
#line 86
UARTDebugSenderP__SendQueue__t  

UARTDebugSenderP__SendQueue__dequeue(void );
#line 50
static bool UARTDebugSenderP__SendQueue__empty(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t UARTDebugSenderP__sendTask__postTask(void );
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
UARTDebugSenderP__MessagePool__t * 


UARTDebugSenderP__MessagePool__get(void );
#line 61
static bool UARTDebugSenderP__MessagePool__empty(void );
#line 89
static error_t UARTDebugSenderP__MessagePool__put(
#line 85
UARTDebugSenderP__MessagePool__t * newVal);
# 36 "../../tos/lib/net/UARTDebugSenderP.nc"
enum UARTDebugSenderP____nesc_unnamed4449 {
#line 36
  UARTDebugSenderP__sendTask = 30U
};
#line 36
typedef int UARTDebugSenderP____nesc_sillytask_sendTask[UARTDebugSenderP__sendTask];
#line 15
bool UARTDebugSenderP__sending;
uint8_t UARTDebugSenderP__len;
uint16_t UARTDebugSenderP__statLogReceived = 0;
uint16_t UARTDebugSenderP__statEnqueueFail = 0;
uint16_t UARTDebugSenderP__statSendFail = 0;
uint16_t UARTDebugSenderP__statSendDoneFail = 0;
uint16_t UARTDebugSenderP__statSendDoneOk = 0;
uint16_t UARTDebugSenderP__statSendDoneBug = 0;


static inline void UARTDebugSenderP__Boot__booted(void );










static inline void UARTDebugSenderP__sendTask__runTask(void );
#line 58
static void UARTDebugSenderP__UARTSend__sendDone(message_t *msg, error_t error);
#line 76
static error_t UARTDebugSenderP__CollectionDebug__logEvent(uint8_t type);
#line 103
static error_t  UARTDebugSenderP__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg_id, am_addr_t origin, am_addr_t node);
#line 132
static error_t  UARTDebugSenderP__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 188
static inline  error_t UARTDebugSenderP__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 94 "../../tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 94
{
   __asm volatile ("cli" :  :  : "memory");}

#line 111
#line 110
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 114
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 120
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "../../tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 64 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 64
{
#line 64
  union __nesc_unnamed4450 {
#line 64
    Atm128Adcsra_t f;
#line 64
    uint8_t t;
  } 
#line 64
  c = { .f = x };

#line 64
  return c.t;
}




static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 70
{
  * (volatile uint8_t *)0x7A = HplAtm128AdcP__Adcsra2int(x);
}

# 69 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 69
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 69
}
#line 69
# 73 "../../tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__Init__init(void )
#line 73
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adate = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 126 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x81 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x81;
}

#line 102
static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer1P__TimerCtrl__setControlB(x.flat);
}

# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 78 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm1281Timer1P__Timer__start();
#line 78
}
#line 78
# 93 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x84 = t;
}

# 67 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm1281Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 126 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x91 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x91;
}

#line 102
static inline void HplAtm1281Timer3P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer3P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer3P__TimerCtrl__setControlB(x.flat);
}

# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer3P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x71 |= 1 << 0;
}

# 78 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void ){
#line 78
  HplAtm1281Timer3P__Timer__start();
#line 78
}
#line 78
# 93 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x94 = t;
}

# 67 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t){
#line 67
  HplAtm1281Timer3P__Timer__set(t);
#line 67
}
#line 67
# 51 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(2);
  }
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Atm128AdcP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 4);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )33U &= ~(1 << 4);
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "../../tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 0;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 1;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 2;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 0;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 1;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 2;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 75 "../../tos/platforms/iris/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 75
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 81
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)0x84;
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)0x84;

        if (next < start) {
          wraps--;
          }
#line 99
        start = next;
      }


    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;


    start = * (volatile uint16_t *)0x84;
    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)0x84;

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    * (volatile uint8_t *)0xB2 = 0;
    * (volatile uint16_t *)0x84 = 0;
    * (volatile uint8_t *)(0x16 + 0x20) = * (volatile uint8_t *)(0x17 + 0x20) = 0xff;
    while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 2)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "../../tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 6;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 40
}
#line 40
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 6;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 46
}
#line 46
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 7);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr();
#line 41
}
#line 41
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 7;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput();
#line 46
}
#line 46
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 0;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 0;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 218 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__PlatformInit__init(void )
{
  RF230DriverLayerP__SELN__makeOutput();
  RF230DriverLayerP__SELN__set();
  RF230DriverLayerP__SLP_TR__makeOutput();
  RF230DriverLayerP__SLP_TR__clr();
  RF230DriverLayerP__RSTN__makeOutput();
  RF230DriverLayerP__RSTN__set();

  RF230DriverLayerP__rxMsg = &RF230DriverLayerP__rxMsgBuffer;


  RF230DriverLayerP__rssiClear = 0;
  RF230DriverLayerP__rssiBusy = 90;

  return SUCCESS;
}

# 171 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__stop(void )
#line 171
{
#line 171
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 70 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__stop(void ){
#line 70
  HplAtm1281Timer1P__Capture__stop();
#line 70
}
#line 70
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 4);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr();
#line 41
}
#line 41
# 59 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 4);
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 6);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 41
}
#line 41
# 59 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 6);
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 44
}
#line 44
# 53 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void )
{
  HplRF230P__PortCLKM__makeInput();
  HplRF230P__PortCLKM__clr();
  HplRF230P__PortIRQ__makeInput();
  HplRF230P__PortIRQ__clr();
  HplRF230P__Capture__stop();

  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplRF230P__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverLayerP__PlatformInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "../../tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t UARTDebugSenderP__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(UARTDebugSenderP__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "../../tos/system/QueueC.nc"
static inline bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__empty(void )
#line 53
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__size == 0;
}

# 50 "../../tos/interfaces/Queue.nc"
inline static bool UARTDebugSenderP__SendQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 89 "../../tos/interfaces/Pool.nc"
inline static error_t UARTDebugSenderP__MessagePool__put(UARTDebugSenderP__MessagePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 88 "../../tos/interfaces/Queue.nc"
inline static UARTDebugSenderP__SendQueue__t  UARTDebugSenderP__SendQueue__dequeue(void ){
#line 88
  nx_struct message_t *__nesc_result;
#line 88

#line 88
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "../../tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 60 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 158
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 158
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 160
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "../../tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(msg, dest);
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(msg, 114);
  return /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__send(msg, len);
}

# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t UARTDebugSenderP__UARTSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 69 "../../tos/system/QueueC.nc"
static inline /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__head(void )
#line 69
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue[/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__head];
}

# 80 "../../tos/interfaces/Queue.nc"
inline static UARTDebugSenderP__SendQueue__t  UARTDebugSenderP__SendQueue__head(void ){
#line 80
  nx_struct message_t *__nesc_result;
#line 80

#line 80
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 36 "../../tos/lib/net/UARTDebugSenderP.nc"
static inline void UARTDebugSenderP__sendTask__runTask(void )
#line 36
{
  if (UARTDebugSenderP__sending) {
      return;
    }
  else {
#line 39
    if (UARTDebugSenderP__SendQueue__empty()) {
        return;
      }
    else 
#line 41
      {
        message_t *smsg = UARTDebugSenderP__SendQueue__head();
        error_t eval = UARTDebugSenderP__UARTSend__send(AM_BROADCAST_ADDR, smsg, UARTDebugSenderP__len);

#line 44
        if (eval == SUCCESS) {
            UARTDebugSenderP__sending = TRUE;
            return;
          }
        else 
#line 47
          {

            UARTDebugSenderP__statSendFail++;
            UARTDebugSenderP__SendQueue__dequeue();
            UARTDebugSenderP__MessagePool__put(smsg);
            if (!UARTDebugSenderP__SendQueue__empty()) {
              UARTDebugSenderP__sendTask__postTask();
              }
          }
      }
    }
}

# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 127 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 127
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 94 "../../tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 131 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

# 539 "../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 539
{
  bool not_busy = FALSE;

#line 541
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 541
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 543
          EOFF;

          {
#line 543
            __nesc_atomic_end(__nesc_atomic); 
#line 543
            return __nesc_temp;
          }
        }
    }
#line 546
    __nesc_atomic_end(__nesc_atomic); }
#line 545
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 545
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 551
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "../../tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0xb6534768, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0xb6534768) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0xb6534768, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0xb6534768){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0xb6534768) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0xb6534768);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 111 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "../../tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 73 "../../tos/system/QueueC.nc"
static inline void /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__printQueue(void )
#line 73
{
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  MultihopOscilloscopeC__SerialSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "../../tos/system/AMQueueEntryP.nc"
static inline void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(m, err);
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  UARTDebugSenderP__UARTSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "../../tos/system/AMQueueEntryP.nc"
static inline void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(m, err);
}

# 215 "../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "../../tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(uint8_t arg_0xb670a958, message_t * msg, error_t error){
#line 100
  switch (arg_0xb670a958) {
#line 100
    case 0U:
#line 100
      /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(arg_0xb670a958, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 2 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 53 "../../tos/system/QueueC.nc"
static inline bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__size == 0;
}

# 50 "../../tos/interfaces/Queue.nc"
inline static bool MultihopOscilloscopeC__UARTQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 73 "../../tos/system/QueueC.nc"
static inline void /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__printQueue(void )
#line 73
{
}

#line 69
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__head(void )
#line 69
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue[/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__head];
}

#line 89
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__dequeue(void )
#line 89
{
  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t t = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__head();

#line 91
  ;
  if (!/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__empty()) {
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__head++;
      if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__head == 10) {
#line 94
        /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__head = 0;
        }
#line 95
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__size--;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__printQueue();
    }
  return t;
}

# 88 "../../tos/interfaces/Queue.nc"
inline static MultihopOscilloscopeC__UARTQueue__t  MultihopOscilloscopeC__UARTQueue__dequeue(void ){
#line 88
  nx_struct message_t *__nesc_result;
#line 88

#line 88
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 2);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 41
}
#line 41
# 74 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

# 56 "../../tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 1);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 41
}
#line 41
# 89 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

# 72 "../../tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 0);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr();
#line 41
}
#line 41
# 104 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 89 "../../tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 164 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../tos/lib/timer/Timer.nc"
inline static void MultihopOscilloscopeC__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 89 "../../tos/interfaces/Pool.nc"
inline static error_t MultihopOscilloscopeC__UARTMessagePool__put(MultihopOscilloscopeC__UARTMessagePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t MultihopOscilloscopeC__uartSendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MultihopOscilloscopeC__uartSendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 169 "../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void )
#line 169
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg, FAIL);
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(am_id_t arg_0xb67093b0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0xb67093b0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 122 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "../../tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 78 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 78
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 2;
    }
}

#line 174
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void )
#line 174
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current < 2) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask();
        }
    }
}

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 2) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0xb65f53a8, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(arg_0xb65f53a8, msg, error);
#line 110
}
#line 110
# 101 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "../../tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0xb6537c50, message_t * msg, error_t error){
#line 100
  switch (arg_0xb6537c50) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0xb6537c50, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 212
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0xb65f5d68, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0xb65f5d68, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0xb6537610, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0xb6537610) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0xb6537610, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0xb6534768, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0xb6534768) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0xb6534768, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 121 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC__SerialControl__stopDone(error_t error)
#line 121
{
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  MultihopOscilloscopeC__SerialControl__stopDone(error);
#line 138
}
#line 138
# 161 "../../tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 161
{
}

# 52 "../../tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 168 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 168
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 156 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 156
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "../../tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "../../tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 79 "../../tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = UARTDebugSenderP__CollectionDebug__logEventRoute(type, parent, hopcount, metric);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 262 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void )
#line 262
{
  ;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
}

# 51 "../../tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound(void ){
#line 51
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound();
#line 51
}
#line 51
# 599 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void )
#line 599
{
  bool route_found = FALSE;

#line 601
  route_found = /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR;
  /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root = 1;
  /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent = /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr;
  /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = 0;

  if (route_found) {
    /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound();
    }
#line 608
  ;
  /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(NET_C_TREE_NEW_PARENT, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent, 0, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
  return SUCCESS;
}

# 41 "../../tos/lib/net/RootControl.nc"
inline static error_t MultihopOscilloscopeC__RootControl__setRoot(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 103 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC__SerialControl__startDone(error_t error)
#line 103
{
  if (error != SUCCESS) {
    MultihopOscilloscopeC__fatal_problem();
    }

  if (__nesc_ntoh_uint16(MultihopOscilloscopeC__local.id.nxdata) % 500 == 0) {
    MultihopOscilloscopeC__RootControl__setRoot();
    }
  MultihopOscilloscopeC__startTimer();
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  MultihopOscilloscopeC__SerialControl__startDone(error);
#line 113
}
#line 113
# 185 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 185
{
  * (volatile uint8_t *)0XC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 162 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 162
{
  * (volatile uint8_t *)0XC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 150 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 150
{
  * (volatile uint8_t *)0XC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 190 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 190
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 180 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 180
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "../../tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 61 "../../tos/system/QueueC.nc"
static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__size(void )
#line 61
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__size;
}

static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__maxSize(void )
#line 65
{
  return 20;
}

# 169 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "../../tos/lib/timer/Timer.nc"
inline static bool MultihopOscilloscopeC__Timer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(0U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 260 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void )
#line 260
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();
}

# 109 "../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "../../tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 154 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "../../tos/lib/timer/Timer.nc"
inline static void MultihopOscilloscopeC__Timer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 154 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void )
#line 154
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 89 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag();
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 56 "../../tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "../../tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "../../tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 560
static inline void SerialP__RunTx__runTask(void )
#line 560
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 577
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 586
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 590
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 599
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 606
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 606
        goInactive = SerialP__offPending;
#line 606
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 608
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 608
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 614
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 614
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 617
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 619
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 626
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 628
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 633
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 647
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 650
            __nesc_atomic_end(__nesc_atomic); 
#line 650
            return;
          }
        }
    }
#line 653
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 656
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 660
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 662
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 662
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 174 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 174
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0XC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 267 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void )
#line 267
{
}

# 52 "../../tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute(void ){
#line 52
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute();
#line 52
}
#line 52
# 193 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval(void )
#line 193
{
  /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 128;
  /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime();
}

#line 561
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void )
#line 561
{
  /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
}

# 544 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor)
#line 544
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 547
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_total = 0;
  ne->data_success = 0;
  return SUCCESS;
}

# 69 "../../tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(am_addr_t neighbor){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = LinkEstimatorP__LinkEstimator__clearDLQ(neighbor);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
#line 55
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(am_addr_t neighbor){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = LinkEstimatorP__LinkEstimator__pinNeighbor(neighbor);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 499 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor)
#line 499
{
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 501
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP__NeighborTable[nidx].flags &= ~PINNED_ENTRY;
  return SUCCESS;
}

# 58 "../../tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(am_addr_t neighbor){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = LinkEstimatorP__LinkEstimator__unpinNeighbor(neighbor);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 97 "../../tos/interfaces/Queue.nc"
inline static error_t UARTDebugSenderP__SendQueue__enqueue(UARTDebugSenderP__SendQueue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 97 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(m, len);
}

# 135 "../../tos/interfaces/AMSend.nc"
inline static void * /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(am_id_t arg_0xb67093b0, message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(arg_0xb67093b0, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 211 "../../tos/system/AMQueueImplP.nc"
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 211
{
  return /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(0, m, len);
}

# 125 "../../tos/interfaces/Send.nc"
inline static void * /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(1U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "../../tos/system/AMQueueEntryP.nc"
static inline void */*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__Send__getPayload(m, len);
}

# 135 "../../tos/interfaces/AMSend.nc"
inline static void * UARTDebugSenderP__UARTSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP__3__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 97 "../../tos/interfaces/Pool.nc"
inline static UARTDebugSenderP__MessagePool__t * UARTDebugSenderP__MessagePool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "../../tos/system/PoolP.nc"
static inline bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__empty(void )
#line 75
{
  ;
  return /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__free == 0;
}

# 61 "../../tos/interfaces/Pool.nc"
inline static bool UARTDebugSenderP__MessagePool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 188 "../../tos/lib/net/UARTDebugSenderP.nc"
static inline  error_t UARTDebugSenderP__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3)
#line 188
{
  UARTDebugSenderP__statLogReceived++;
  if (UARTDebugSenderP__MessagePool__empty()) {
      return FAIL;
    }
  else 
#line 192
    {
      message_t *msg = UARTDebugSenderP__MessagePool__get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP__UARTSend__getPayload(msg, sizeof(CollectionDebugMsg ));

#line 195
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP__len);

      __nesc_hton_uint8(dbg_msg->type.nxdata, type);
      __nesc_hton_uint16(dbg_msg->data.dbg.a.nxdata, arg1);
      __nesc_hton_uint16(dbg_msg->data.dbg.b.nxdata, arg2);
      __nesc_hton_uint16(dbg_msg->data.dbg.c.nxdata, arg3);
      __nesc_hton_uint16(dbg_msg->seqno.nxdata, UARTDebugSenderP__statLogReceived);

      if (UARTDebugSenderP__SendQueue__enqueue(msg) == SUCCESS) {
          UARTDebugSenderP__sendTask__postTask();
          return SUCCESS;
        }
      else 
#line 209
        {
          UARTDebugSenderP__statEnqueueFail++;
          UARTDebugSenderP__MessagePool__put(msg);
          return FAIL;
        }
    }
}

# 67 "../../tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = UARTDebugSenderP__CollectionDebug__logEventDbg(type, arg1, arg2, arg3);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 261 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(uint16_t etx)
#line 261
{
  return etx < ETX_THRESHOLD;
}

# 49 "../../tos/lib/net/4bitle/LinkEstimator.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(uint16_t neighbor){
#line 49
  unsigned short __nesc_result;
#line 49

#line 49
  __nesc_result = LinkEstimatorP__LinkEstimator__getLinkQuality(neighbor);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 269 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void )
#line 269
{
  uint8_t i;
  routing_table_entry *entry;
  routing_table_entry *best;
  uint16_t minEtx;
  uint16_t currentEtx;
  uint16_t linkEtx;
#line 275
  uint16_t pathEtx;

  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root) {
    return;
    }
  best = (void *)0;

  minEtx = MAX_METRIC;

  currentEtx = MAX_METRIC;

  ;


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i];


      if (entry->info.parent == INVALID_ADDR || entry->info.parent == /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr) {
          ;


          continue;
        }

      linkEtx = /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(entry->neighbor);
      ;


      pathEtx = linkEtx + entry->info.etx;

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent) {
          ;
          currentEtx = pathEtx;

          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = entry->info.etx;
          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested = entry->info.congested;
          continue;
        }

      if (entry->info.congested) {
        continue;
        }
      if (!/*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(linkEtx)) {
          ;
          continue;
        }

      if (pathEtx < minEtx) {
          ;
          minEtx = pathEtx;
          best = entry;
        }
    }
#line 343
  if (minEtx != MAX_METRIC) {

      if ((
#line 344
      currentEtx == MAX_METRIC || (
      /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested && minEtx < /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + 10)) || 
      minEtx + PARENT_SWITCH_THRESHOLD < currentEtx) {




          /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges++;

          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(NET_C_TREE_NEW_PARENT, best->neighbor, best->info.etx, minEtx);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(best->neighbor);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(best->neighbor);

          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent = best->neighbor;
          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = best->info.etx;
          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested = best->info.congested;
          if (currentEtx - minEtx > 20) {
              /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate();
            }
        }
    }




  if (/*CtpP.Router*/CtpRoutingEngineP__0__justEvicted && /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
    /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute();
    }
  else {



    if (
#line 377
    !/*CtpP.Router*/CtpRoutingEngineP__0__justEvicted && 
    currentEtx == MAX_METRIC && 
    minEtx != MAX_METRIC) {
      /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound();
      }
    }
#line 381
  /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = FALSE;
}

# 46 "../../tos/interfaces/Random.nc"
inline static uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32(void ){
#line 46
  unsigned long __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 207 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata, type);
}

# 162 "../../tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 185 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata, addr);
}

# 146 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(msg, addr);
#line 146
}
#line 146
# 178 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr)
{
  RF230RadioP__Ieee154PacketLayer__setDestAddr(msg, addr);
}

# 43 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr){
#line 43
  RF230RadioP__ActiveMessageConfig__setDestination(msg, addr);
#line 43
}
#line 43
# 187 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(msg, addr);
}

# 103 "../../tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 112);
  return /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t LinkEstimatorP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 407 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__print_packet(message_t *msg, uint8_t len)
#line 407
{
}

# 106 "../../tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP__SubPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 109 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_footer_t *LinkEstimatorP__getFooter(message_t *m, uint8_t len)
#line 109
{

  return (linkest_footer_t *)(len + (uint8_t *)LinkEstimatorP__Packet__getPayload(m, len + sizeof(linkest_footer_t )));
}

# 126 "../../tos/interfaces/Packet.nc"
inline static void * LinkEstimatorP__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 104 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_header_t *LinkEstimatorP__getHeader(message_t *m)
#line 104
{
  return (linkest_header_t *)LinkEstimatorP__SubPacket__getPayload(m, sizeof(linkest_header_t ));
}










static inline uint8_t LinkEstimatorP__addLinkEstHeaderAndFooter(message_t *msg, uint8_t len)
#line 117
{
  unsigned char *__nesc_temp50;
#line 118
  uint8_t newlen;
  linkest_header_t * hdr;
  linkest_footer_t * footer;
  uint8_t i;
#line 121
  uint8_t j;
#line 121
  uint8_t k;
  uint8_t maxEntries;
#line 122
  uint8_t newPrevSentIdx;

#line 123
  ;
  hdr = LinkEstimatorP__getHeader(msg);
  footer = LinkEstimatorP__getFooter(msg, len);

  maxEntries = (LinkEstimatorP__SubPacket__maxPayloadLength() - len - sizeof(linkest_header_t ))
   / sizeof(linkest_footer_t );



  if (maxEntries > NUM_ENTRIES_FLAG) {
      maxEntries = NUM_ENTRIES_FLAG;
    }
  ;

  j = 0;
  newPrevSentIdx = 0;
  for (i = 0; i < 10 && j < maxEntries; i++) {
      uint8_t neighborCount;
      neighbor_stat_entry_t * neighborLists;

#line 142
      if (maxEntries <= 10) {
        neighborCount = maxEntries;
        }
      else {
#line 145
        neighborCount = 10;
        }
      neighborLists = (neighbor_stat_entry_t * )footer->neighborList;
      k = (LinkEstimatorP__prevSentIdx + i + 1) % 10;
      if (LinkEstimatorP__NeighborTable[k].flags & VALID_ENTRY && 
      LinkEstimatorP__NeighborTable[k].flags & MATURE_ENTRY) {
          __nesc_hton_uint16(neighborLists[j].ll_addr.nxdata, LinkEstimatorP__NeighborTable[k].ll_addr);
          __nesc_hton_uint8(neighborLists[j].inquality.nxdata, LinkEstimatorP__NeighborTable[k].inquality);
          newPrevSentIdx = k;
          ;

          j++;
        }
    }
  LinkEstimatorP__prevSentIdx = newPrevSentIdx;

  __nesc_hton_uint8(hdr->seq.nxdata, LinkEstimatorP__linkEstSeq++);
  __nesc_hton_uint8(hdr->flags.nxdata, 0);
  (__nesc_temp50 = hdr->flags.nxdata, __nesc_hton_uint8(__nesc_temp50, __nesc_ntoh_uint8(__nesc_temp50) | (NUM_ENTRIES_FLAG & j)));
  newlen = sizeof(linkest_header_t ) + len + j * sizeof(linkest_footer_t );
  ;
  return newlen;
}

#line 559
static inline error_t LinkEstimatorP__Send__send(am_addr_t addr, message_t *msg, uint8_t len)
#line 559
{
  uint8_t newlen;

#line 561
  newlen = LinkEstimatorP__addLinkEstHeaderAndFooter(msg, len);
  ;
  ;
  LinkEstimatorP__print_packet(msg, newlen);
  return LinkEstimatorP__AMSend__send(addr, msg, newlen);
}

# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = LinkEstimatorP__Send__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 752 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void )
#line 752
{
  return FALSE;
}

# 7 "../../tos/lib/net/ctp/CtpCongestion.nc"
inline static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested(void ){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 388 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void )
#line 388
{
  unsigned char *__nesc_temp52;
  unsigned char *__nesc_temp51;
#line 389
  error_t eval;

#line 390
  if (/*CtpP.Router*/CtpRoutingEngineP__0__sending) {
      return;
    }

  __nesc_hton_uint8(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.nxdata, 0);


  if (/*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested()) {
      (__nesc_temp51 = /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.nxdata, __nesc_hton_uint8(__nesc_temp51, __nesc_ntoh_uint8(__nesc_temp51) | CTP_OPT_ECN));
    }

  __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->parent.nxdata, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent);
  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root) {
      __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
    }
  else {
#line 405
    if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
        (__nesc_temp52 = /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.nxdata, __nesc_hton_uint8(__nesc_temp52, __nesc_ntoh_uint8(__nesc_temp52) | CTP_OPT_PULL));
      }
    else 
#line 408
      {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent));
      }
    }
  ;



  /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(NET_C_TREE_SENT_BEACON, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->parent.nxdata), 0, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.nxdata));

  eval = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(AM_BROADCAST_ADDR, 
  &/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer, 
  sizeof(ctp_routing_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Router*/CtpRoutingEngineP__0__sending = TRUE;
    }
  else {
#line 423
    if (eval == EOFF) {
        /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
        ;
      }
    }
}

# 78 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void )
{
  return sizeof(rf230packet_header_t ) + 28;
}

# 46 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__maxPayloadLength(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__RF230DriverConfig__maxPayloadLength();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 910 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RF230DriverLayerP__Config__maxPayloadLength() - sizeof(rf230_header_t );
}

# 59 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230DriverLayerP__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 105 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength();
}

# 59 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 131 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength();
}

# 59 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 299 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength() - sizeof(ieee154_simple_header_t );
}

# 59 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 169 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength() - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 59 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 243 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength() - sizeof(activemessage_header_t );
}

# 54 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RF230DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 294 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(ieee154_simple_header_t ));
}

# 54 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 164 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET);
}

# 54 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 238 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 270
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(msg, len);
}

# 94 "../../tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 322 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 99 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg)
{

  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE)
   | /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE);
}

# 69 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg){
#line 69
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
#line 69
}
#line 69
# 94 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

# 63 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 203 "../../tos/chips/rf230/RF230RadioP.nc"
static inline error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg)
{
  if (!RF230RadioP__Ieee154PacketLayer__isDataFrame(msg)) {
    RF230RadioP__Ieee154PacketLayer__createDataFrame(msg);
    }
  return SUCCESS;
}

# 63 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RF230RadioP__ActiveMessageConfig__checkFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 195 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata, addr);
}

# 156 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(msg, addr);
#line 156
}
#line 156
# 188 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr)
{
  RF230RadioP__Ieee154PacketLayer__setSrcAddr(msg, addr);
}

# 49 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr){
#line 49
  RF230RadioP__ActiveMessageConfig__setSource(msg, addr);
#line 49
}
#line 49
# 197 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(msg, addr);
}

# 175 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata, pan);
}

# 136 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(msg, pan);
#line 136
}
#line 136
# 198 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp)
{
  RF230RadioP__Ieee154PacketLayer__setDestPan(msg, grp);
}

# 55 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp){
#line 55
  RF230RadioP__ActiveMessageConfig__setGroup(msg, grp);
#line 55
}
#line 55
# 217 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(msg, grp);
}

#line 122
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg)
{
}

# 59 "../../tos/interfaces/SendNotifier.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(am_id_t arg_0xb6d6a780, am_addr_t dest, message_t * msg){
#line 59
    /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(arg_0xb6d6a780, dest, msg);
#line 59
}
#line 59
# 64 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0xb6cee948){
#line 53
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0xb6cee948);
#line 53
}
#line 53
# 70 "../../tos/system/SimpleArbiterP.nc"
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 70
{
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 120
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 164 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 164
{
}

# 59 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0xb6ced5c0){
#line 59
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0xb6ced5c0);
#line 59
}
#line 59
# 162 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0xb6cee948){
#line 61
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0xb6cee948);
#line 61
}
#line 61
# 83 "../../tos/system/SimpleArbiterP.nc"
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "../../tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 53 "../../tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg)
{
  if (/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest() == SUCCESS) 
    {
      error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(msg);

#line 58
      if (result != SUCCESS) {
        /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
        }
      return result;
    }

  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending = msg;
  return /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request();
}

# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 79 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__resume();
#line 79
}
#line 79
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 98 "../../tos/lib/rfxlink/util/TaskletC.nc"
static __inline void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 100
    ++/*RF230RadioC.TaskletC*/TaskletC__0__state;
#line 100
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__suspend();
#line 72
}
#line 72
# 230 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 165 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 154 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RF230RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 46 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t RF230DriverLayerP__releaseSpi__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RF230DriverLayerP__releaseSpi);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 106 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 71 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void )
{
  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY && /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
    }
}

# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready();
#line 63
}
#line 63
# 72 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void )
{
  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) {
    /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready();
    }
}

# 63 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverLayerP__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready();
#line 63
}
#line 63
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "../../tos/lib/rfxlink/util/RadioState.nc"
inline static void RF230DriverLayerP__RadioState__done(void ){
#line 69
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 115 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 97 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 124 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 124
{
  return (* (volatile uint8_t *)(0x2D + 0x20) & (1 << 7)) != 0;
}

# 136 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool Atm128SpiP__Spi__isInterruptPending(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = HplAtm128SpiP__SPI__isInterruptPending();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 196 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void )
#line 196
{
  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;
  return Atm128SpiP__Spi__read();
}

# 68 "../../tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__splitRead(void ){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = Atm128SpiP__FastSpiByte__splitRead();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 116 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 103 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 202 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data)
#line 202
{
  uint8_t b;

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  b = Atm128SpiP__Spi__read();
  Atm128SpiP__Spi__write(data);

  return b;
}

# 74 "../../tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__splitReadWrite(uint8_t data){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128SpiP__FastSpiByte__splitReadWrite(data);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 192 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data)
#line 192
{
  Atm128SpiP__Spi__write(data);
}

# 62 "../../tos/interfaces/FastSpiByte.nc"
inline static void RF230DriverLayerP__FastSpiByte__splitWrite(uint8_t data){
#line 62
  Atm128SpiP__FastSpiByte__splitWrite(data);
#line 62
}
#line 62
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 0);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 155 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__writeRegister(uint8_t reg, uint8_t value)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_WRITE | reg);
  RF230DriverLayerP__FastSpiByte__splitReadWrite(value);
  RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();
}

#line 319
static __inline void RF230DriverLayerP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RF230DriverLayerP__isSpiAcquired()) 
    {
      RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

      if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON) {
        RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON;
        }
      else {
#line 331
        RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
        }
    }
}

# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 7;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set();
#line 40
}
#line 40
# 89 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__IRQ__disable(void )
{
  HplRF230P__Capture__stop();
}

# 66 "../../tos/interfaces/GpioCapture.nc"
inline static void RF230DriverLayerP__IRQ__disable(void ){
#line 66
  HplRF230P__IRQ__disable();
#line 66
}
#line 66
# 165 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__start(void )
#line 165
{
#line 165
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 67 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__start(void ){
#line 67
  HplAtm1281Timer1P__Capture__start();
#line 67
}
#line 67
# 159 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__reset(void )
#line 159
{
#line 159
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 64 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__reset(void ){
#line 64
  HplAtm1281Timer1P__Capture__reset();
#line 64
}
#line 64
# 155 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__setEdge(bool up)
#line 155
{
#line 155
  if (up) {
#line 155
    * (volatile uint8_t *)0x81 |= 1 << 6;
    }
  else {
#line 155
    * (volatile uint8_t *)0x81 &= ~(1 << 6);
    }
}

# 88 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__setEdge(bool up){
#line 88
  HplAtm1281Timer1P__Capture__setEdge(up);
#line 88
}
#line 88
# 74 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__IRQ__captureRisingEdge(void )
{
  HplRF230P__Capture__setEdge(TRUE);
  HplRF230P__Capture__reset();
  HplRF230P__Capture__start();

  return SUCCESS;
}

# 53 "../../tos/interfaces/GpioCapture.nc"
inline static error_t RF230DriverLayerP__IRQ__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplRF230P__IRQ__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 167 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static __inline uint8_t RF230DriverLayerP__readRegister(uint8_t reg)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_READ | reg);
  RF230DriverLayerP__FastSpiByte__splitReadWrite(0);
  reg = RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();

  return reg;
}

# 90 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void )
#line 90
{
#line 90
  return * (volatile uint16_t *)0x84;
}

# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 78 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(), dt);
}

# 66 "../../tos/lib/timer/Alarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 111 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void RF230DriverLayerP__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(3U, timeout);
#line 50
}
#line 50
#line 45
inline static bool RF230DriverLayerP__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(3U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 337 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__changeState(void )
{

  if ((
#line 339
  RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON)
   && RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP && RF230DriverLayerP__RadioAlarm__isFree()) 
    {
      RF230DriverLayerP__SLP_TR__clr();

      RF230DriverLayerP__RadioAlarm__wait(RF230DriverLayerP__SLEEP_WAKEUP_TIME);
      RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 347
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF && RF230DriverLayerP__isSpiAcquired()) 
      {
        for (; 0; ) ;

        RF230DriverLayerP__readRegister(RF230_IRQ_STATUS);
        RF230DriverLayerP__IRQ__captureRisingEdge();


        RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

        RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
        RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
#line 373
      if ((
#line 372
      RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNOFF || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY)
       && RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON && RF230DriverLayerP__isSpiAcquired()) 
        {
          RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_FORCE_TRX_OFF);

          RF230DriverLayerP__IRQ__disable();
          RF230DriverLayerP__radioIrq = FALSE;

          RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF;
        }
      }
    }
#line 383
  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNOFF && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF) 
    {
      RF230DriverLayerP__SLP_TR__set();
      RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP;
      RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 389
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF) {
      RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP__flags[idx] |= 1 << bit;
}

# 51 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 164 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RF230RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[idx] & (1 << bit);
}

# 46 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 160 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 149 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RF230RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 190 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 151 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 159 "../../tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RF230RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 116
{
}

# 80 "../../tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 80
}
#line 80
# 94 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[NeighborhoodP__last] == node) 
    {
      if (NeighborhoodP__ages[NeighborhoodP__last] == NeighborhoodP__time) {
        return NeighborhoodP__last;
        }
      NeighborhoodP__ages[NeighborhoodP__last] = ++NeighborhoodP__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP__nodes[i] == node) 
            {
              NeighborhoodP__last = i;
              if (NeighborhoodP__ages[i] == NeighborhoodP__time) {
                return i;
                }
              NeighborhoodP__ages[i] = ++NeighborhoodP__time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time - NeighborhoodP__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last = oldest;
          NeighborhoodP__nodes[oldest] = node;
          NeighborhoodP__ages[oldest] = ++NeighborhoodP__time;
          NeighborhoodP__flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[i] | 0x7F) != NeighborhoodP__time) {
            NeighborhoodP__ages[i] = NeighborhoodP__time & 0x80;
            }
        }
    }
  return NeighborhoodP__last;
}

# 71 "../../tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 93 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 62 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void )
#line 62
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
}

# 109 "../../tos/lib/timer/Alarm.nc"
inline static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned short __nesc_result;
#line 109

#line 109
  __nesc_result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 88 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 168 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230RadioP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 269 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RF230RadioP__RadioAlarm__getNow();


  if (RF230RadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
    }
  else {
#line 280
    time += (uint16_t )(32 * (-5 + 5) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
    }
  return time;
}

# 57 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = RF230RadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state |= /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
  return /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = RF230DriverLayerP__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 117 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

#line 120
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(ack, /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.nxdata, /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.nxdata, __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata));
}

# 88 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack){
#line 88
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(data, ack);
#line 88
}
#line 88
# 126 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  RF230RadioP__Ieee154PacketLayer__createAckReply(data, ack);
}

# 80 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack){
#line 80
  RF230RadioP__SoftwareAckConfig__createAckPacket(data, ack);
#line 80
}
#line 80
# 121 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__requiresAckReply(msg);
}

# 75 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = RF230RadioP__SoftwareAckConfig__requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 56 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 155 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
}

# 56 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 50 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(0U, msg);
#line 50
}
#line 50
# 172 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__stop(void )
#line 172
{
#line 172
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 68 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 68
  HplAtm1281Timer1P__CompareA__stop();
#line 68
}
#line 68
# 74 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 74
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void ){
#line 73
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 120 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop();
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 55 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void ){
#line 55
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(2U);
#line 55
}
#line 55
# 126 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.nxdata) == __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata)
   && (__nesc_ntoh_leuint16(header->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 94 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 111 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RF230RadioP__Ieee154PacketLayer__verifyAckReply(data, ack);
}

# 69 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = RF230RadioP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 106 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 75 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 106 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__isAckFrame(msg);
}

# 62 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RF230RadioP__SoftwareAckConfig__isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 147 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg)
{
  for (; 0; ) ;

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) 
    {
      if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg, msg)) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel();
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg);

          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
        }

      return msg;
    }

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(msg)) 
    {
      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(msg, &/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg);


      if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(&/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg) == SUCCESS) {
        /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND;
        }
      else {
#line 173
        for (; 0; ) ;
        }
    }
  return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(msg);
}

# 53 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RF230DriverLayerP__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 1017 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RF230DriverLayerP__getMeta(msg)->lqi = value;
}

# 251 "/usr/lib/gcc/avr/4.9.2/../../../../avr/include/util/crc16.h" 3
#line 250
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data)
{
  uint16_t __ret;

   __asm volatile (
  "eor    %A0,%1""\n\t"

  "mov    __tmp_reg__,%A0""\n\t"
  "swap   %A0""\n\t"
  "andi   %A0,0xf0""\n\t"
  "eor    %A0,__tmp_reg__""\n\t"

  "mov    __tmp_reg__,%B0""\n\t"

  "mov    %B0,%A0""\n\t"

  "swap   %A0""\n\t"
  "andi   %A0,0x0f""\n\t"
  "eor    __tmp_reg__,%A0""\n\t"

  "lsr    %A0""\n\t"
  "eor    %B0,%A0""\n\t"

  "eor    %A0,%B0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "eor    %A0,__tmp_reg__" : 

  "=d"(__ret) : 
  "r"(__data), "0"(__crc) : 
  "r0");

  return __ret;
}

# 82 "../../tos/platforms/iris/chips/rf230/RadioConfig.h"
static __inline uint16_t RF230_CRCBYTE_COMMAND(uint16_t crc, uint8_t data)
{
  return _crc_ccitt_update(crc, data);
}

# 312 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 46 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 134 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg)
{

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) {
    return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
    }




  return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(msg);
}

# 46 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RF230DriverLayerP__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 88 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void )
{

  return 7;
}

# 59 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__headerPreloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230RadioP__RF230DriverConfig__headerPreloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 73 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg)
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rf230packet_header_t );
}

# 40 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__headerLength(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__RF230DriverConfig__headerLength(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 96 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline rf230_header_t *RF230DriverLayerP__getHeader(message_t *msg)
{
  return (void *)msg + RF230DriverLayerP__Config__headerLength(msg);
}

# 214 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data)
#line 214
{
  Atm128SpiP__Spi__write(data);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 81 "../../tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__write(uint8_t data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = Atm128SpiP__FastSpiByte__write(data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 612 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__downloadMessage(void )
{
  uint8_t length;
  uint16_t crc;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__write(RF230_CMD_FRAME_READ);


  length = RF230DriverLayerP__FastSpiByte__write(0);


  if (length >= 3 && length <= RF230DriverLayerP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t read;
      uint8_t *data;


      RF230DriverLayerP__FastSpiByte__splitWrite(0);

      data = RF230DriverLayerP__getPayload(RF230DriverLayerP__rxMsg);
      __nesc_hton_leuint8(RF230DriverLayerP__getHeader(RF230DriverLayerP__rxMsg)->length.nxdata, length);
      crc = 0;


      length -= 2;

      read = RF230DriverLayerP__Config__headerPreloadLength();
      if (length < read) {
        read = length;
        }
      length -= read;

      do {
          crc = RF230_CRCBYTE_COMMAND(crc, * data++ = RF230DriverLayerP__FastSpiByte__splitReadWrite(0));
        }
      while (--read != 0);

      if (RF230DriverLayerP__RadioReceive__header(RF230DriverLayerP__rxMsg)) 
        {
          while (length-- != 0) 
            crc = RF230_CRCBYTE_COMMAND(crc, * data++ = RF230DriverLayerP__FastSpiByte__splitReadWrite(0));

          crc = RF230_CRCBYTE_COMMAND(crc, RF230DriverLayerP__FastSpiByte__splitReadWrite(0));
          crc = RF230_CRCBYTE_COMMAND(crc, RF230DriverLayerP__FastSpiByte__splitReadWrite(0));

          RF230DriverLayerP__PacketLinkQuality__set(RF230DriverLayerP__rxMsg, RF230DriverLayerP__FastSpiByte__splitRead());
        }
      else 
        {
          RF230DriverLayerP__FastSpiByte__splitRead();
          crc = 1;
        }
    }
  else {
    crc = 1;
    }
  RF230DriverLayerP__SELN__set();
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
#line 688
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;


  if (crc == 0) {
    RF230DriverLayerP__rxMsg = RF230DriverLayerP__RadioReceive__receive(RF230DriverLayerP__rxMsg);
    }
}

# 135 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(1000 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 43 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RF230RadioP__SoftwareAckConfig__getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(2U, timeout);
#line 50
}
#line 50
#line 45
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(2U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 180 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
}

#line 200
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) != 0xFFFF;
}

# 162 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 101 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__requiresAckWait(msg);
}

# 55 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RF230RadioP__SoftwareAckConfig__requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 97 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error)
{
  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg) && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree()) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout());
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
        }
      else 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error);
        }
    }
}

# 56 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverLayerP__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 55 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(1U, msg);
#line 55
}
#line 55
# 77 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "../../tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverLayerP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 136 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

#line 60
static inline timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 50 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(1U, msg);
#line 50
}
#line 50
# 82 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "../../tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverLayerP__PacketTimeStamp__set(message_t * msg, RF230DriverLayerP__PacketTimeStamp__size_type value){
#line 78
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 64 "../../tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "../../tos/lib/timer/LocalTime.nc"
inline static uint32_t RF230DriverLayerP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 55 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__RSSIFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
#line 55
}
#line 55
# 962 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketRSSI__clear(message_t *msg)
{
  RF230DriverLayerP__RSSIFlag__clear(msg);
}

# 50 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__RSSIFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 50
}
#line 50





inline static void RF230DriverLayerP__TransmitPowerFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 55
}
#line 55
# 967 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RF230DriverLayerP__TransmitPowerFlag__clear(msg);

  RF230DriverLayerP__RSSIFlag__set(msg);
  RF230DriverLayerP__getMeta(msg)->rssi = value;
}

#line 608
static inline void RF230DriverLayerP__RadioCCA__default__done(error_t error)
#line 608
{
}

# 52 "../../tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RF230DriverLayerP__RadioCCA__done(error_t error){
#line 52
  RF230DriverLayerP__RadioCCA__default__done(error);
#line 52
}
#line 52
# 710 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__serviceRadio(void )
{
  if (RF230DriverLayerP__state != RF230DriverLayerP__STATE_SLEEP && RF230DriverLayerP__isSpiAcquired()) 
    {
      uint16_t time;
      uint32_t time32;
      uint8_t irq;
      uint8_t temp;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 719
        time = RF230DriverLayerP__capturedTime;
#line 719
        __nesc_atomic_end(__nesc_atomic); }
      RF230DriverLayerP__radioIrq = FALSE;
      irq = RF230DriverLayerP__readRegister(RF230_IRQ_STATUS);
#line 753
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CHANNEL) 
        {
          for (; 0; ) ;
          for (; 0; ) ;

          RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
          RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
        }
      else {
#line 761
        if (irq & RF230_IRQ_PLL_LOCK) 
          {
            for (; 0; ) ;
            for (; 0; ) ;
          }
        }
      if (irq & RF230_IRQ_RX_START) 
        {
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CCA) 
            {
              RF230DriverLayerP__RadioCCA__done(FAIL);
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
            }

          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE) 
            {
              for (; 0; ) ;


              if (irq == RF230_IRQ_RX_START) 
                {
                  temp = RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK;
                  RF230DriverLayerP__rssiBusy += temp - (RF230DriverLayerP__rssiBusy >> 2);

                  RF230DriverLayerP__PacketRSSI__set(RF230DriverLayerP__rxMsg, temp);
                }
              else 
                {
                  RF230DriverLayerP__PacketRSSI__clear(RF230DriverLayerP__rxMsg);
                }










              if (irq == RF230_IRQ_RX_START) 
                {
                  time32 = RF230DriverLayerP__LocalTime__get();
                  time32 += (int16_t )(time - RF230DriverLayerP__RX_SFD_DELAY) - (int16_t )time32;
                  RF230DriverLayerP__PacketTimeStamp__set(RF230DriverLayerP__rxMsg, time32);
                }
              else {
                RF230DriverLayerP__PacketTimeStamp__clear(RF230DriverLayerP__rxMsg);
                }
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_RECEIVE;
            }
          else {
            for (; 0; ) ;
            }
        }
      if (irq & RF230_IRQ_TRX_END) 
        {
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TRANSMIT) 
            {
              for (; 0; ) ;

              RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
              RF230DriverLayerP__RadioSend__sendDone(SUCCESS);


              for (; 0; ) ;
            }
          else {
#line 829
            if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_RECEIVE) 
              {
                for (; 0; ) ;


                RF230DriverLayerP__rssiClear += (RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) - (RF230DriverLayerP__rssiClear >> 2);

                RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_DOWNLOAD;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
    }
}

#line 861
static inline void RF230DriverLayerP__Tasklet__run(void )
{
  if (RF230DriverLayerP__radioIrq) {
    RF230DriverLayerP__serviceRadio();
    }
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE) 
    {
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_DOWNLOAD) {
        RF230DriverLayerP__downloadMessage();
        }
      else {
#line 870
        if (RF230DriverLayerP__CMD_TURNOFF <= RF230DriverLayerP__cmd && RF230DriverLayerP__cmd <= RF230DriverLayerP__CMD_TURNON) {
          RF230DriverLayerP__changeState();
          }
        else {
#line 872
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CHANNEL) {
            RF230DriverLayerP__changeChannel();
            }
          }
        }
#line 875
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_SIGNAL_DONE) 
        {
          RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
          RF230DriverLayerP__RadioState__done();
        }
    }

  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE && RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON && !RF230DriverLayerP__radioIrq) {
    RF230DriverLayerP__RadioSend__ready();
    }
  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE) {
    RF230DriverLayerP__releaseSpi__postTask();
    }
}

# 261 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void RF230DriverLayerP__Tasklet__schedule(void ){
#line 59
  /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule();
#line 59
}
#line 59
# 192 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__RadioAlarm__fired(void )
{
  if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF) {
    RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF;
    }
  else {
#line 196
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CCA) 
      {
        uint8_t cca;

        for (; 0; ) ;

        RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
        cca = RF230DriverLayerP__readRegister(RF230_TRX_STATUS);

        for (; 0; ) ;

        RF230DriverLayerP__RadioCCA__done(cca & RF230_CCA_DONE ? cca & RF230_CCA_STATUS ? SUCCESS : EBUSY : FAIL);
      }
    else {
      for (; 0; ) ;
      }
    }
  RF230DriverLayerP__Tasklet__schedule();
}

# 140 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__SoftwareAckConfig__reportChannelError(void )
{
}

# 86 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void ){
#line 86
  RF230RadioP__SoftwareAckConfig__reportChannelError();
#line 86
}
#line 86
# 124 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError();

  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
}

# 262 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 46 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 55 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 78 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg)
{
  error_t error;

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) 
    {
      if ((error = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(msg)) == SUCCESS) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(msg);
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_DATA_SEND;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 110 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 126
    if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & ~/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg)));
        }
      else 
        {
          if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 285 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__RadioAlarm__fired(void )
{
}

# 102 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0xb6d8e480){
#line 60
  switch (arg_0xb6d8e480) {
#line 60
    case 0U:
#line 60
      RF230RadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 2U:
#line 60
      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 3U:
#line 60
      RF230DriverLayerP__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0xb6d8e480);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 93 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__run(void ){
#line 48
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  RF230DriverLayerP__Tasklet__run();
#line 48
}
#line 48
# 142 "../../tos/system/SimpleArbiterP.nc"
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id)
#line 142
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 143
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 144
          TRUE;

          {
#line 144
            __nesc_atomic_end(__nesc_atomic); 
#line 144
            return __nesc_temp;
          }
        }
      else 
#line 145
        {
          unsigned char __nesc_temp = 
#line 145
          FALSE;

          {
#line 145
            __nesc_atomic_end(__nesc_atomic); 
#line 145
            return __nesc_temp;
          }
        }
    }
#line 148
    __nesc_atomic_end(__nesc_atomic); }
}

# 128 "../../tos/interfaces/Resource.nc"
inline static bool RF230DriverLayerP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(0U);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 392 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceConfigure__configure(uint8_t id)
#line 392
{
  Atm128SpiP__startSpi();
}

# 59 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(uint8_t arg_0xb6ced5c0){
#line 59
  Atm128SpiP__ResourceConfigure__configure(arg_0xb6ced5c0);
#line 59
}
#line 59
# 162 "../../tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0xb6cee948){
#line 61
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(arg_0xb6cee948);
#line 61
}
#line 61
# 83 "../../tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "../../tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 52 "../../tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 173 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 1;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )36U &= ~(1 << 3);
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 2;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 186 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
    }
}

# 125 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 200 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
    }
}

# 128 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 230 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 141 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
# 217 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 160 "../../tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(uint8_t arg_0xb6cee948){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(arg_0xb6cee948);
#line 53
}
#line 53
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 83 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg)
{
  return 0;
}

# 52 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__metadataLength(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = RF230RadioP__RF230DriverConfig__metadataLength(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 917 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg)
{
  return RF230DriverLayerP__Config__metadataLength(msg) + sizeof(rf230_metadata_t );
}

# 65 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RF230DriverLayerP__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

#line 54
static inline flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}



static inline bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 40 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverLayerP__TransmitPowerFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(2U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 929 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg)
{
  return RF230DriverLayerP__TransmitPowerFlag__get(msg);
}

static inline uint8_t RF230DriverLayerP__PacketTransmitPower__get(message_t *msg)
{
  return RF230DriverLayerP__getMeta(msg)->power;
}

# 94 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__isDataFrame(msg);
}

# 65 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static bool RF230DriverLayerP__Config__requiresRssiCca(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RF230RadioP__RF230DriverConfig__requiresRssiCca(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 60 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 52 "../../tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 112 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 112
{
}

# 89 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 165 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 165
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 167
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

#line 396
static inline void Atm128SpiP__ResourceConfigure__unconfigure(uint8_t id)
#line 396
{
  Atm128SpiP__stopSpi();
}

# 65 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0xb6ced5c0){
#line 65
  Atm128SpiP__ResourceConfigure__unconfigure(arg_0xb6ced5c0);
#line 65
}
#line 65
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "../../tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 145 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void )
#line 145
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 176
static inline bool HplAtm1281Timer1P__Timer__test(void )
#line 176
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P__TimerCtrl__getInterruptFlag()).bits.tov;
}

# 87 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm1281Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "../../tos/lib/timer/Counter.nc"
inline static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 40 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverLayerP__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 978 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RF230DriverLayerP__TimeSyncFlag__get(msg);
}

#line 891
static inline uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg)
{
  return RF230DriverLayerP__Config__headerLength(msg) + sizeof(rf230_header_t );
}

#line 983
static inline uint8_t RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RF230DriverLayerP__RadioPacket__headerLength(msg) + RF230DriverLayerP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230DriverLayerP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(3U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 340 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 372
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

# 214 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t)
#line 214
{
#line 214
  * (volatile uint16_t *)0x88 = t;
}

# 54 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 54
  HplAtm1281Timer1P__CompareA__set(t);
#line 54
}
#line 54
# 160 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__reset(void )
#line 160
{
#line 160
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 62
  HplAtm1281Timer1P__CompareA__reset();
#line 62
}
#line 62
# 166 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__start(void )
#line 166
{
#line 166
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 65 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 65
  HplAtm1281Timer1P__CompareA__start();
#line 65
}
#line 65
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 244 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 51 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = RF230RadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 60 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "../../tos/interfaces/ResourceQueue.nc"
inline static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 166 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 166
{
}

# 65 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0xb6ced5c0){
#line 65
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0xb6ced5c0);
#line 65
}
#line 65
# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "../../tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 429 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(message_t *msg, error_t error)
#line 429
{
  if (msg != &/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer || !/*CtpP.Router*/CtpRoutingEngineP__0__sending) {

      return;
    }
  /*CtpP.Router*/CtpRoutingEngineP__0__sending = FALSE;
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void LinkEstimatorP__Send__sendDone(message_t * msg, error_t error){
#line 110
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(msg, error);
#line 110
}
#line 110
# 570 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__AMSend__sendDone(message_t *msg, error_t error)
#line 570
{
  LinkEstimatorP__Send__sendDone(msg, error);
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  LinkEstimatorP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "../../tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 215 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "../../tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0xb670a958, message_t * msg, error_t error){
#line 100
  switch (arg_0xb670a958) {
#line 100
    case 0U:
#line 100
      /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0xb670a958, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 2 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 89 "../../tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 40 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(0U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 195 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg)
{
  return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(msg);
}

# 85 "../../tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 528 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor)
#line 528
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 531
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }

  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP__DLQ_PKT_WINDOW) {
      LinkEstimatorP__updateDETX(ne);
    }
  return SUCCESS;
}

# 66 "../../tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(am_addr_t neighbor){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = LinkEstimatorP__LinkEstimator__txNoAck(neighbor);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 557 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void )
#line 557
{
  /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
}

# 83 "../../tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes(void ){
#line 83
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes();
#line 83
}
#line 83
# 73 "../../tos/system/QueueC.nc"
static inline void /*CtpP.SendQueueP*/QueueC__0__printQueue(void )
#line 73
{
}

# 42 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle();
#line 42
}
#line 42
# 84 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "../../tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 290 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC__report_problem(void )
#line 290
{
#line 290
  MultihopOscilloscopeC__Leds__led0Toggle();
}

# 57 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )34U ^= 1 << 1;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 42
}
#line 42
# 99 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  ;
#line 101
  ;
}

# 83 "../../tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 291 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC__report_sent(void )
#line 291
{
#line 291
  MultihopOscilloscopeC__Leds__led1Toggle();
}

#line 263
static inline void MultihopOscilloscopeC__Send__sendDone(message_t *msg, error_t error)
#line 263
{
  if (error == SUCCESS) {
    MultihopOscilloscopeC__report_sent();
    }
  else {
#line 267
    MultihopOscilloscopeC__report_problem();
    }
  MultihopOscilloscopeC__sendbusy = FALSE;
}

# 848 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline 
#line 847
void 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(uint8_t client, message_t *msg, error_t error)
#line 848
{
}

# 100 "../../tos/interfaces/Send.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(uint8_t arg_0xb68a8ee0, message_t * msg, error_t error){
#line 100
  switch (arg_0xb68a8ee0) {
#line 100
    case 0U:
#line 100
      MultihopOscilloscopeC__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(arg_0xb68a8ee0, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 60 "../../tos/lib/net/ctp/CtpPacket.nc"
inline static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(message_t *msg){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(msg);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60



inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
#line 54
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(message_t *msg){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
#line 66
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(message_t *msg){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 100 "../../tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(uint8_t i)
#line 100
{
  uint8_t j;

#line 102
  if (i >= /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) {
    return;
    }
#line 104
  if (i == 0) {

      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first = (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + 1) % 4;
    }
  else 
#line 107
    {

      for (j = i; j < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count; j++) {
          memcpy(&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first) % 4], &/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + 1) % 4], sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t ));
        }
    }
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count--;
}

# 511 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor)
#line 511
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 514
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_success++;
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP__DLQ_PKT_WINDOW) {
      LinkEstimatorP__updateDETX(ne);
    }
  return SUCCESS;
}

# 62 "../../tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(am_addr_t neighbor){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LinkEstimatorP__LinkEstimator__txAck(neighbor);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 169 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0xb67093b0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(arg_0xb67093b0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RF230DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 289 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_simple_header_t );
}

# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 159 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 233 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 265
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 78 "../../tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 141 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 173 "../../tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 182 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

# 78 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 202 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

# 147 "../../tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 2;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 2) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 61 "../../tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(uint8_t type){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = UARTDebugSenderP__CollectionDebug__logEvent(type);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 106 "../../tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 777 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void )
#line 777
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength() - sizeof(ctp_data_header_t );
}

#line 773
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 773
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(msg, len + sizeof(ctp_data_header_t ));
}

#line 841
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state)
#line 841
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState | state;
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "../../tos/interfaces/AMPacket.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 113);
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 835 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state)
#line 835
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState & ~state;
}

# 126 "../../tos/interfaces/Packet.nc"
inline static void * /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 279 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(message_t *m)
#line 279
{
  return (ctp_data_header_t *)/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(m, sizeof(ctp_data_header_t ));
}

#line 811
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t opt)
#line 811
{
  unsigned char *__nesc_temp48;

#line 812
  (__nesc_temp48 = /*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.nxdata, __nesc_hton_uint8(__nesc_temp48, __nesc_ntoh_uint8(__nesc_temp48) | opt));
}

#line 838
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state)
#line 838
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState & state;
}

# 139 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack)
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;

#line 141
  if (ack) {
    (__nesc_temp44 = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp44, __nesc_ntoh_leuint16(__nesc_temp44) | (1 << IEEE154_FCF_ACK_REQ)));
    }
  else {
#line 144
    (__nesc_temp45 = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp45, __nesc_ntoh_leuint16(__nesc_temp45) & ~ (uint16_t )(1 << IEEE154_FCF_ACK_REQ)));
    }
}

# 105 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack){
#line 105
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(msg, ack);
#line 105
}
#line 105
# 116 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack)
{
  RF230RadioP__Ieee154PacketLayer__setAckRequired(msg, ack);
}

# 49 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack){
#line 49
  RF230RadioP__SoftwareAckConfig__setAckRequired(msg, ack);
#line 49
}
#line 49
# 181 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg)
{
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(msg, TRUE);

  return SUCCESS;
}

# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 814 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t opt)
#line 814
{
  unsigned char *__nesc_temp49;

#line 815
  (__nesc_temp49 = /*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.nxdata, __nesc_hton_uint8(__nesc_temp49, __nesc_ntoh_uint8(__nesc_temp49) & ~opt));
}

#line 806
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t e)
#line 806
{
#line 806
  __nesc_hton_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->etx.nxdata, e);
}

#line 857
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 859
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collection_id_t arg_0xb68a7930, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0xb68a7930) {
#line 78
    case AM_OSCILLOSCOPE:
#line 78
      __nesc_result = MultihopOscilloscopeC__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(arg_0xb68a7930, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 769 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(message_t *msg)
#line 769
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(msg) - sizeof(ctp_data_header_t );
}

# 622 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void )
#line 622
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root;
}

# 43 "../../tos/lib/net/RootControl.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 89 "../../tos/interfaces/Pool.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 88 "../../tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue(void ){
#line 88
  struct __nesc_unnamed4339 *__nesc_result;
#line 88

#line 88
  __nesc_result = /*CtpP.SendQueueP*/QueueC__0__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 135 "../../tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(message_t *m)
#line 135
{
  return /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(m) < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count;
}

# 59 "../../tos/interfaces/Cache.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(item);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 527 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void )
#line 527
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent;
}

# 48 "../../tos/lib/net/UnicastNameFreeRouting.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop(void ){
#line 48
  unsigned short __nesc_result;
#line 48

#line 48
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 69 "../../tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__head(void )
#line 69
{
  return /*CtpP.SendQueueP*/QueueC__0__queue[/*CtpP.SendQueueP*/QueueC__0__head];
}

# 80 "../../tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head(void ){
#line 80
  struct __nesc_unnamed4339 *__nesc_result;
#line 80

#line 80
  __nesc_result = /*CtpP.SendQueueP*/QueueC__0__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 73 "../../tos/lib/timer/Timer.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73
# 64 "../../tos/lib/net/ctp/CtpInfo.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(uint16_t *etx){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(etx);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 530 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void )
#line 530
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent != INVALID_ADDR;
}

# 49 "../../tos/lib/net/UnicastNameFreeRouting.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute(void ){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 53 "../../tos/system/QueueC.nc"
static inline bool /*CtpP.SendQueueP*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*CtpP.SendQueueP*/QueueC__0__size == 0;
}

# 50 "../../tos/interfaces/Queue.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*CtpP.SendQueueP*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 371 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void )
#line 371
{
  uint16_t gradient;

#line 373
  ;
  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING) || /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty()) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SENDQUEUE_EMPTY);
      return;
    }
  else {
    if ((
#line 378
    !/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot() && 
    !/*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute()) || 
    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(&gradient) != SUCCESS) {








        ;
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(NO_ROUTE_RETRY);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_NO_ROUTE);
        return;
      }
    else {



        error_t subsendResult;
        fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head();
        uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(qe->msg);
        am_addr_t dest = /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop();

        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(qe->msg)) {




            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(qe->msg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 412
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
            return;
          }


        ;

        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot()) {

            collection_id_t collectid = __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(qe->msg)->type.nxdata);
            uint8_t *payload;
            uint8_t payloadLength;

            memcpy(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, qe->msg, sizeof(message_t ));

            payload = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr));
            payloadLength = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr);
            ;
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collectid, /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, 
            payload, 
            payloadLength);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(qe->msg, SUCCESS);
          }
        else {

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(qe->msg, gradient);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(qe->msg, CTP_OPT_ECN | CTP_OPT_PULL);
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(qe->msg) == SUCCESS) {
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ACK_PENDING);
              }
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QUEUE_CONGESTED)) {
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(qe->msg, CTP_OPT_ECN);
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QUEUE_CONGESTED);
              }

            subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(dest, qe->msg, payloadLen);
            if (subsendResult == SUCCESS) {

                /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
                ;
                return;
              }
            else {
              if (subsendResult == ESIZE) {
                  ;
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength());
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SUBSEND_SIZE);
                }
              else {
                  ;
                }
              }
          }
      }
    }
}

# 78 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t MultihopOscilloscopeC__RadioAMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 125 "../../tos/interfaces/Send.nc"
inline static void * /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "../../tos/system/AMQueueEntryP.nc"
static inline void */*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__getPayload(m, len);
}

# 135 "../../tos/interfaces/AMSend.nc"
inline static void * MultihopOscilloscopeC__SerialSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 88 "../../tos/system/PoolP.nc"
static inline /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t */*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__get(void )
#line 88
{
  if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__free) {
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t *rval = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__queue[/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__index];

#line 91
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__queue[/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__index] = (void *)0;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__free--;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__index++;
      if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__index == 10) {
          /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "../../tos/interfaces/Pool.nc"
inline static MultihopOscilloscopeC__UARTMessagePool__t * MultihopOscilloscopeC__UARTMessagePool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 65 "../../tos/system/QueueC.nc"
static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__maxSize(void )
#line 65
{
  return 10;
}

#line 61
static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__size(void )
#line 61
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__size;
}

#line 101
static inline error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__enqueue(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue_t newVal)
#line 101
{
  if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__size() < /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__maxSize()) {
      ;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__queue[/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__tail] = newVal;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__tail++;
      if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__tail == 10) {
#line 106
        /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__tail = 0;
        }
#line 107
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__size++;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "../../tos/interfaces/Queue.nc"
inline static error_t MultihopOscilloscopeC__UARTQueue__enqueue(MultihopOscilloscopeC__UARTQueue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC__1__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 120 "../../tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "../../tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 40
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "../../tos/lib/timer/BusyWait.nc"
inline static void RF230DriverLayerP__BusyWait__wait(RF230DriverLayerP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 6);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 41
}
#line 41
# 242 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__initRadio(void )
{
  RF230DriverLayerP__BusyWait__wait(510);

  RF230DriverLayerP__RSTN__clr();
  RF230DriverLayerP__SLP_TR__clr();
  RF230DriverLayerP__BusyWait__wait(6);
  RF230DriverLayerP__RSTN__set();

  RF230DriverLayerP__writeRegister(RF230_TRX_CTRL_0, RF230_TRX_CTRL_0_VALUE);
  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_TRX_OFF);

  RF230DriverLayerP__BusyWait__wait(510);

  RF230DriverLayerP__writeRegister(RF230_IRQ_MASK, ((RF230_IRQ_TRX_UR | RF230_IRQ_PLL_LOCK) | RF230_IRQ_TRX_END) | RF230_IRQ_RX_START);
  RF230DriverLayerP__writeRegister(RF230_CCA_THRES, RF230_CCA_THRES_VALUE);
  RF230DriverLayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | (0 & RF230_TX_PWR_MASK));

  RF230DriverLayerP__txPower = 0 & RF230_TX_PWR_MASK;
  RF230DriverLayerP__channel = 26 & RF230_CHANNEL_MASK;
  RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

  RF230DriverLayerP__SLP_TR__set();
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP;
}



static inline void RF230DriverLayerP__SpiResource__granted(void )
{

  if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_P_ON) 
    {
      RF230DriverLayerP__initRadio();
      RF230DriverLayerP__SpiResource__release();
    }
  else {
    RF230DriverLayerP__Tasklet__schedule();
    }
}

# 158 "../../tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(uint8_t arg_0xb6cfdea8){
#line 102
  switch (arg_0xb6cfdea8) {
#line 102
    case 0U:
#line 102
      RF230DriverLayerP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(arg_0xb6cfdea8);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 149 "../../tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
}

# 349 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline 
#line 348
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 350
{
}

# 82 "../../tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  Atm128SpiP__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 294 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 294
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 308
    __nesc_atomic_end(__nesc_atomic); }
}

# 856 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__releaseSpi__runTask(void )
{
  RF230DriverLayerP__SpiResource__release();
}

# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 176 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 48 "../../tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
#line 48
}
#line 48
# 120 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC__RadioControl__stopDone(error_t error)
#line 120
{
}

# 273 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t err)
#line 273
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__RADIO_ON);
    }
}

# 254 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error)
#line 254
{
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
  ;
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error);
#line 138
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error);
#line 138
  MultihopOscilloscopeC__RadioControl__stopDone(error);
#line 138
}
#line 138
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t MultihopOscilloscopeC__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 345 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(uint8_t client)
#line 345
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength();
}

# 112 "../../tos/interfaces/Send.nc"
inline static uint8_t MultihopOscilloscopeC__Send__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(0U);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 92 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC__RadioControl__startDone(error_t error)
#line 92
{
  if (error != SUCCESS) {
    MultihopOscilloscopeC__fatal_problem();
    }
  if (sizeof MultihopOscilloscopeC__local > MultihopOscilloscopeC__Send__maxPayloadLength()) {
    MultihopOscilloscopeC__fatal_problem();
    }
  if (MultihopOscilloscopeC__SerialControl__start() != SUCCESS) {
    MultihopOscilloscopeC__fatal_problem();
    }
}

# 239 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t err)
#line 239
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__RADIO_ON);
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty()) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
        }
    }
}

# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 244 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error)
#line 244
{
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = TRUE;
  ;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__running) {
      uint16_t nextInt;

#line 249
      nextInt = /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16() % BEACON_INTERVAL;
      nextInt += BEACON_INTERVAL >> 1;
    }
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error);
#line 113
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error);
#line 113
  MultihopOscilloscopeC__RadioControl__startDone(error);
#line 113
}
#line 113
# 144 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
        }
      }
    }
}

# 132 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "../../tos/interfaces/Ieee154Send.nc"
inline static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
}

# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 189 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 2) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0xb6d6b088, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0xb6d6b088, msg, error);
#line 110
}
#line 110
# 98 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 78 "../../tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 214 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 80 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 54 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 253 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 40 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 98 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state != /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg = msg;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 48 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 189 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 96 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 43 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = RF230DriverLayerP__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 284 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_simple_header_t );
}

# 43 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 91 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 43 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 219 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

#line 170
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata);
}

# 73 "../../tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 73
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 214 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}






static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 227
  return (addr == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
}

# 185 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 142 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 158 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(am_id_t arg_0xb6d69600, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(arg_0xb6d69600, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )34U ^= 1 << 0;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 42
}
#line 42
# 114 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "../../tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 292 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC__report_received(void )
#line 292
{
#line 292
  MultihopOscilloscopeC__Leds__led2Toggle();
}

#line 208
static inline message_t *
MultihopOscilloscopeC__Snoop__receive(message_t *msg, void *payload, uint8_t len)
#line 209
{
  oscilloscope_t *omsg = payload;

  MultihopOscilloscopeC__report_received();


  if (__nesc_ntoh_uint16(omsg->version.nxdata) > __nesc_ntoh_uint16(MultihopOscilloscopeC__local.version.nxdata)) {
      __nesc_hton_uint16(MultihopOscilloscopeC__local.version.nxdata, __nesc_ntoh_uint16(omsg->version.nxdata));
      __nesc_hton_uint16(MultihopOscilloscopeC__local.interval.nxdata, __nesc_ntoh_uint16(omsg->interval.nxdata));
      MultihopOscilloscopeC__startTimer();
    }



  if (__nesc_ntoh_uint16(omsg->count.nxdata) > __nesc_ntoh_uint16(MultihopOscilloscopeC__local.count.nxdata)) {
      __nesc_hton_uint16(MultihopOscilloscopeC__local.count.nxdata, __nesc_ntoh_uint16(omsg->count.nxdata));
      MultihopOscilloscopeC__suppress_count_change = TRUE;
    }

  return msg;
}

# 863 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 865
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(collection_id_t arg_0xb68a5030, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0xb68a5030) {
#line 78
    case AM_OSCILLOSCOPE:
#line 78
      __nesc_result = MultihopOscilloscopeC__Snoop__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(arg_0xb68a5030, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 71 "../../tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate(void ){
#line 71
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate();
#line 71
}
#line 71
# 808 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt)
#line 808
{
  return (__nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.nxdata) & opt) == opt ? TRUE : FALSE;
}

#line 733
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(message_t *msg, void *payload, uint8_t len)
#line 734
{


  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(msg, CTP_OPT_PULL)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate();
    }

  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg), 
  msg, payload + sizeof(ctp_data_header_t ), 
  len - sizeof(ctp_data_header_t ));
}

# 153 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(id, msg, payload, len);
#line 155
  ;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0xb6d6a108, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0xb6d6a108) {
#line 78
    case 113:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0xb6d6a108, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 148 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(am_id_t arg_0xb6d6ae80, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(arg_0xb6d6ae80, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 92 "../../tos/lib/timer/Timer.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(4U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 78 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 792 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg)
#line 792
{
#line 792
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->originSeqNo.nxdata);
}

# 73 "../../tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = UARTDebugSenderP__CollectionDebug__logEventMsg(type, msg, origin, node);
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 565 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void )
#line 565
{
  /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
}

# 78 "../../tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void ){
#line 78
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate();
#line 78
}
#line 78
# 800 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg)
#line 800
{
#line 800
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->etx.nxdata);
}

# 97 "../../tos/interfaces/Queue.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.SendQueueP*/QueueC__0__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "../../tos/system/PoolP.nc"
static inline /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t */*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__free) {
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *rval = /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[/*CtpP.MessagePoolP.PoolP*/PoolP__0__index];

#line 91
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[/*CtpP.MessagePoolP.PoolP*/PoolP__0__index] = (void *)0;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__free--;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__index++;
      if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__index == 12) {
          /*CtpP.MessagePoolP.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "../../tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "../../tos/system/PoolP.nc"
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__free) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *rval = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index];

#line 91
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index] = (void *)0;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free--;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index++;
      if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index == 12) {
          /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "../../tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get(void ){
#line 97
  struct __nesc_unnamed4339 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "../../tos/system/PoolP.nc"
static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void )
#line 75
{
  ;
  return /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free == 0;
}

# 61 "../../tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 75 "../../tos/system/PoolP.nc"
static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void )
#line 75
{
  ;
  return /*CtpP.MessagePoolP.PoolP*/PoolP__0__free == 0;
}

# 61 "../../tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 578 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(message_t * m)
#line 578
{
  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty()) {
      ;

      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_MSG_POOL_EMPTY);
    }
  else {
#line 584
    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty()) {
        ;


        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_QENTRY_POOL_EMPTY);
      }
    else {
        message_t *newMsg;
        fe_queue_entry_t *qe;
        uint16_t gradient;

        qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get();
        if (qe == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_GET_MSGPOOL_ERR);
            return m;
          }

        newMsg = /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get();
        if (newMsg == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_GET_QEPOOL_ERR);
            return m;
          }

        memset(newMsg, 0, sizeof(message_t ));
        memset(m->metadata, 0, sizeof(message_metadata_t ));

        qe->msg = m;
        qe->client = 0xff;
        qe->retries = MAX_RETRIES;


        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(qe) == SUCCESS) {
            ;

            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(&gradient) == SUCCESS) {

                if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(m) <= gradient) {




                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate();
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(LOOPY_WINDOW, LOOPY_OFFSET);
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_LOOP_DETECTED, 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(m));
                  }
              }

            if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning()) {


                ;
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
              }


            return newMsg;
          }
        else 
#line 643
          {

            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(newMsg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 647
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
          }
      }
    }



  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SEND_QUEUE_FULL);
  return m;
}

#line 852
static inline 
#line 851
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 853
{
  return TRUE;
}

# 31 "../../tos/interfaces/Intercept.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(collection_id_t arg_0xb68a56d8, message_t * msg, void * payload, uint8_t len){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
    __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(arg_0xb68a56d8, msg, payload, len);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 51 "../../tos/interfaces/Cache.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item){
#line 51
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(item);
#line 51
}
#line 51
# 821 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2)
#line 821
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(m2);
}

# 116 "../../tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__element(uint8_t idx)
#line 116
{
  idx += /*CtpP.SendQueueP*/QueueC__0__head;
  if (idx >= 13) {
      idx -= 13;
    }
  return /*CtpP.SendQueueP*/QueueC__0__queue[idx];
}

# 108 "../../tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(uint8_t idx){
#line 108
  struct __nesc_unnamed4339 *__nesc_result;
#line 108

#line 108
  __nesc_result = /*CtpP.SendQueueP*/QueueC__0__Queue__element(idx);
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 61 "../../tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__size(void )
#line 61
{
  return /*CtpP.SendQueueP*/QueueC__0__size;
}

# 65 "../../tos/interfaces/Queue.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*CtpP.SendQueueP*/QueueC__0__Queue__size();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 112 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(am_id_t id)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
}

# 123 "../../tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(am_id_t arg_0xb67093b0){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(arg_0xb67093b0);
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 207 "../../tos/system/AMQueueImplP.nc"
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id)
#line 207
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(0);
}

# 112 "../../tos/interfaces/Send.nc"
inline static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(0U);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 69 "../../tos/system/AMQueueEntryP.nc"
static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void )
#line 69
{
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength();
}

# 123 "../../tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 803 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl)
#line 803
{
#line 803
  __nesc_hton_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->thl.nxdata, thl);
}

#line 668
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 669
{
  collection_id_t collectid;
  bool duplicate = FALSE;
  fe_queue_entry_t *qe;
  uint8_t i;
#line 673
  uint8_t thl;


  collectid = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg);



  thl = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(msg);
  thl++;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(msg, thl);

  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_RCV_MSG, 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
  thl--);
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength()) {
      return msg;
    }



  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(msg)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_CACHE);
      return msg;
    }

  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size() > 0) {
      for (i = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(); i > 0; i--) {
          qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(i - 1);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(qe->msg, msg)) {
              duplicate = TRUE;
              break;
            }
        }
    }

  if (duplicate) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_QUEUE);
      return msg;
    }
  else {

    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot()) {
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(msg);
        return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collectid, msg, 
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg)), 
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg));
      }
    else {

      if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg))) {
        return msg;
        }
      else 
#line 727
        {
          ;
          return /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(msg);
        }
      }
    }
}

# 569 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested)
#line 569
{
  uint8_t idx;

#line 571
  if (/*CtpP.Router*/CtpRoutingEngineP__0__ECNOff) {
    return;
    }
#line 573
  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(n);
  if (idx < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {
      /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.congested = congested;
    }
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested && !congested) {
    /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
  else {
#line 579
    if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == n && congested) {
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
      }
    }
}

#line 710
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx)
#line 710
{
  uint8_t idx;
  uint16_t linkEtx;

#line 713
  linkEtx = /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(from);

  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(from);
  if (idx == 10) {




      ;
      return FAIL;
    }
  else {
#line 724
    if (idx == /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {

        if (/*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(linkEtx)) {
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].neighbor = from;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.parent = parent;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.etx = etx;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.haveHeard = 1;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.congested = FALSE;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive++;
            ;
          }
        else 
#line 734
          {
            ;
          }
      }
    else 
#line 737
      {

        /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].neighbor = from;
        /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.parent = parent;
        /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.etx = etx;
        /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.haveHeard = 1;
        ;
      }
    }
#line 745
  return SUCCESS;
}

# 761 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor)
#line 761
{
}

# 72 "../../tos/lib/net/4bitle/LinkEstimator.nc"
inline static void LinkEstimatorP__LinkEstimator__evicted(am_addr_t neighbor){
#line 72
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(neighbor);
#line 72
  /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(neighbor);
#line 72
}
#line 72
# 461 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor)
#line 461
{
  uint8_t nidx;

  nidx = LinkEstimatorP__findIdx(neighbor);
  if (nidx != LinkEstimatorP__INVALID_RVAL) {
      ;
      return SUCCESS;
    }

  nidx = LinkEstimatorP__findEmptyNeighborIdx();
  if (nidx != LinkEstimatorP__INVALID_RVAL) {
      ;
      LinkEstimatorP__initNeighborIdx(nidx, neighbor);
      return SUCCESS;
    }
  else 
#line 475
    {
      nidx = LinkEstimatorP__findWorstNeighborIdx(LinkEstimatorP__BEST_ETX);
      if (nidx != LinkEstimatorP__INVALID_RVAL) {
          ;

          LinkEstimatorP__LinkEstimator__evicted(LinkEstimatorP__NeighborTable[nidx].ll_addr);
          LinkEstimatorP__initNeighborIdx(nidx, neighbor);
          return SUCCESS;
        }
    }
  return FAIL;
}

# 52 "../../tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(am_addr_t neighbor){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = LinkEstimatorP__LinkEstimator__insertNeighbor(neighbor);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 183 "../../tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 46 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__ActiveMessageConfig__source(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 192 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(msg);
}

# 88 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 465 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline message_t */*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 465
{
  am_addr_t from;
  ctp_routing_header_t *rcvBeacon;
  bool congested;


  if (len != sizeof(ctp_routing_header_t )) {
      ;




      return msg;
    }


  from = /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(msg);
  rcvBeacon = (ctp_routing_header_t *)payload;

  congested = /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(msg, CTP_OPT_ECN);

  ;




  if (__nesc_ntoh_uint16(rcvBeacon->parent.nxdata) != INVALID_ADDR) {



      if (__nesc_ntoh_uint16(rcvBeacon->etx.nxdata) == 0) {
          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(from);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(from);
        }


      /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(from, __nesc_ntoh_uint16(rcvBeacon->parent.nxdata), __nesc_ntoh_uint16(rcvBeacon->etx.nxdata));
      /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(from, congested);
    }

  if (/*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(msg, CTP_OPT_PULL)) {
      /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
    }
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * LinkEstimatorP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t LinkEstimatorP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 245 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP__findRandomNeighborIdx(void )
#line 245
{
  uint8_t i;
  uint8_t cnt;
  uint8_t num_eligible_eviction;

  num_eligible_eviction = 0;
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
          if (LinkEstimatorP__NeighborTable[i].flags & PINNED_ENTRY || 
          LinkEstimatorP__NeighborTable[i].flags & MATURE_ENTRY) {
            }
          else 
#line 255
            {
              num_eligible_eviction++;
            }
        }
    }

  if (num_eligible_eviction == 0) {
      return LinkEstimatorP__INVALID_RVAL;
    }

  cnt = LinkEstimatorP__Random__rand16() % num_eligible_eviction;

  for (i = 0; i < 10; i++) {
      if (! LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
        continue;
        }
#line 270
      if (LinkEstimatorP__NeighborTable[i].flags & PINNED_ENTRY || 
      LinkEstimatorP__NeighborTable[i].flags & MATURE_ENTRY) {
        continue;
        }
#line 273
      if (cnt-- == 0) {
        return i;
        }
    }
#line 276
  return LinkEstimatorP__INVALID_RVAL;
}

# 147 "../../tos/interfaces/AMPacket.nc"
inline static am_id_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 643 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__CompareBit__shouldInsert(message_t *msg, void *payload, uint8_t len)
#line 643
{

  bool found = FALSE;
  uint16_t pathEtx;
  uint16_t neighEtx;
  int i;
  routing_table_entry *entry;
  ctp_routing_header_t *rcvBeacon;

  if (/*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__type(msg) != AM_CTP_ROUTING || 
  len != sizeof(ctp_routing_header_t )) {
    return FALSE;
    }

  rcvBeacon = (ctp_routing_header_t *)payload;

  if (__nesc_ntoh_uint16(rcvBeacon->parent.nxdata) == INVALID_ADDR) {
    return FALSE;
    }
  if (__nesc_ntoh_uint16(rcvBeacon->etx.nxdata) == 0) {
      return TRUE;
    }

  pathEtx = __nesc_ntoh_uint16(rcvBeacon->etx.nxdata);


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive && !found; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i];

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent) {
        continue;
        }
#line 674
      neighEtx = entry->info.etx;
      found |= pathEtx < neighEtx;
    }
  return found;
}

# 51 "../../tos/lib/net/ctp/CompareBit.nc"
inline static bool LinkEstimatorP__CompareBit__shouldInsert(message_t * msg, void * payload, uint8_t len){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__CompareBit__shouldInsert(msg, payload, len);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 1008 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__PacketLinkQuality__get(message_t *msg)
{
  return RF230DriverLayerP__getMeta(msg)->lqi;
}

#line 1024
static inline bool RF230DriverLayerP__LinkPacketMetadata__highChannelQuality(message_t *msg)
{
  return RF230DriverLayerP__PacketLinkQuality__get(msg) > 200;
}

# 47 "../../tos/interfaces/LinkPacketMetadata.nc"
inline static bool LinkEstimatorP__LinkPacketMetadata__highChannelQuality(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RF230DriverLayerP__LinkPacketMetadata__highChannelQuality(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 393 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__print_neighbor_table(void )
#line 393
{
  uint8_t i;
  neighbor_table_entry_t *ne;

#line 396
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP__NeighborTable[i];
      if (ne->flags & VALID_ENTRY) {
          ;
        }
    }
}

# 88 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorP__SubAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 78
inline static am_addr_t LinkEstimatorP__SubAMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 590 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__processReceivedMessage(message_t * msg, void * payload, uint8_t len)
#line 590
{
  uint8_t nidx;

  ;
  LinkEstimatorP__print_packet(msg, len);

  if (LinkEstimatorP__SubAMPacket__destination(msg) == AM_BROADCAST_ADDR) {
      linkest_header_t *hdr = LinkEstimatorP__getHeader(msg);
      am_addr_t ll_addr;

      ll_addr = LinkEstimatorP__SubAMPacket__source(msg);

      ;

      LinkEstimatorP__print_neighbor_table();
#line 620
      nidx = LinkEstimatorP__findIdx(ll_addr);
      if (nidx != LinkEstimatorP__INVALID_RVAL) {
          ;
          LinkEstimatorP__updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.nxdata));
        }
      else 
#line 624
        {
          nidx = LinkEstimatorP__findEmptyNeighborIdx();
          if (nidx != LinkEstimatorP__INVALID_RVAL) {
              ;
              LinkEstimatorP__initNeighborIdx(nidx, ll_addr);
              LinkEstimatorP__NeighborTable[nidx].lastseq = __nesc_ntoh_uint8(hdr->seq.nxdata);
              LinkEstimatorP__updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.nxdata));
            }
          else 
#line 631
            {
              nidx = LinkEstimatorP__findWorstNeighborIdx(LinkEstimatorP__EVICT_ETX_THRESHOLD);
              if (nidx != LinkEstimatorP__INVALID_RVAL) {
                  ;

                  LinkEstimatorP__LinkEstimator__evicted(LinkEstimatorP__NeighborTable[nidx].ll_addr);
                  LinkEstimatorP__initNeighborIdx(nidx, ll_addr);
                }
              else 
#line 638
                {
                  ;





                  if (LinkEstimatorP__LinkPacketMetadata__highChannelQuality(msg)) {
                      if (LinkEstimatorP__CompareBit__shouldInsert(msg, 
                      LinkEstimatorP__Packet__getPayload(msg, LinkEstimatorP__Packet__payloadLength(msg)), 
                      LinkEstimatorP__Packet__payloadLength(msg))) {
                          nidx = LinkEstimatorP__findRandomNeighborIdx();
                          if (nidx != LinkEstimatorP__INVALID_RVAL) {
                              LinkEstimatorP__LinkEstimator__evicted(LinkEstimatorP__NeighborTable[nidx].ll_addr);
                              LinkEstimatorP__initNeighborIdx(nidx, ll_addr);
                            }
                        }
                    }
                }
            }
        }
    }
}





static inline message_t *LinkEstimatorP__SubReceive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 668
{
  ;
  LinkEstimatorP__processReceivedMessage(msg, payload, len);
  return LinkEstimatorP__Receive__receive(msg, 
  LinkEstimatorP__Packet__getPayload(msg, LinkEstimatorP__Packet__payloadLength(msg)), 
  LinkEstimatorP__Packet__payloadLength(msg));
}

# 143 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(id, msg, payload, len);
#line 145
  ;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0xb6d6ba48, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0xb6d6ba48) {
#line 78
    case 112:
#line 78
      __nesc_result = LinkEstimatorP__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 113:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(arg_0xb6d6ba48, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 170 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup();
}

# 131 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getDestPan(message_t *msg){
#line 131
  unsigned short __nesc_result;
#line 131

#line 131
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg);
#line 131

#line 131
  return __nesc_result;
#line 131
}
#line 131
# 193 "../../tos/chips/rf230/RF230RadioP.nc"
static inline am_group_t RF230RadioP__ActiveMessageConfig__group(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDestPan(msg);
}

# 52 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = RF230RadioP__ActiveMessageConfig__group(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 212 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(msg);
}

# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 165 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}






static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

  return (addr == AM_BROADCAST_ADDR || addr == /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address()) && /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(msg) == /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup();
}

# 154 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 43 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 228 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

#line 72
static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 128
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) >= sizeof(activemessage_header_t )) 
    {
      am_id_t id = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
      void *payload = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
      uint8_t len = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

      msg = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
      /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
      /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);
    }
  return msg;
}

# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 222 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    if (/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) >= sizeof(activemessage_header_t )) {
      return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
      }
    else {
#line 228
      return msg;
      }
    }
  else {
#line 230
    return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 317 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) >= sizeof(ieee154_simple_header_t )) {
    return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Receive__receive(msg);
    }
  else {
#line 322
    return msg;
    }
}

# 42 "../../tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 323 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__updateNeighborTableEst(am_addr_t n)
#line 323
{
  uint8_t i;
#line 324
  uint8_t totalPkt;
  neighbor_table_entry_t *ne;
  uint8_t newEst;

  ;
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP__NeighborTable[i];
      if (ne->ll_addr == n) {
          if (ne->flags & VALID_ENTRY) {
              ;
              totalPkt = ne->rcvcnt + ne->failcnt;

              if (!(ne->flags & MATURE_ENTRY)) {
                  newEst = 250UL * ne->rcvcnt / totalPkt;
                  ne->inquality = newEst;
                  ne->etx = 
                  LinkEstimatorP__computeETX(ne->inquality);
                }

              ne->flags |= MATURE_ENTRY;
              ;
              newEst = 250UL * ne->rcvcnt / totalPkt;
              ;
              ne->inquality = (LinkEstimatorP__ALPHA * ne->inquality + (10 - LinkEstimatorP__ALPHA) * newEst) / 10;
              ne->rcvcnt = 0;
              ne->failcnt = 0;
              LinkEstimatorP__updateETX(ne, LinkEstimatorP__computeETX(ne->inquality));
            }
          else 
#line 351
            {
              ;
            }
        }
    }
}

# 749 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor)
#line 749
{
  uint8_t idx;
#line 750
  uint8_t i;

#line 751
  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(neighbor);
  if (idx == /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {
    return FAIL;
    }
#line 754
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive--;
  for (i = idx; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i] = /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i + 1];
    }
  return SUCCESS;
}

# 78 "../../tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP__SubPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 701 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP__Packet__maxPayloadLength(void )
#line 701
{
  return LinkEstimatorP__SubPacket__maxPayloadLength() - sizeof(linkest_header_t );
}

#line 579
static inline uint8_t LinkEstimatorP__Send__maxPayloadLength(void )
#line 579
{
  return LinkEstimatorP__Packet__maxPayloadLength();
}

# 123 "../../tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = LinkEstimatorP__Send__maxPayloadLength();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 583 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void *LinkEstimatorP__Send__getPayload(message_t *msg, uint8_t len)
#line 583
{
  return LinkEstimatorP__Packet__getPayload(msg, len);
}

# 135 "../../tos/interfaces/AMSend.nc"
inline static void * /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = LinkEstimatorP__Send__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 458 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__getHeader(message_t * m)
#line 458
{
  return (ctp_routing_header_t *)/*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(m, /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength());
}

# 65 "../../tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__maxSize(void )
#line 65
{
  return 13;
}

# 68 "../../tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 158 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0xb6cfdea8){
#line 102
  switch (arg_0xb6cfdea8) {
#line 102
    case 0U:
#line 102
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0xb6cfdea8);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 149 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
}

# 272 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC__Read__readDone(error_t result, uint16_t data)
#line 272
{
  if (result != SUCCESS) {
      data = 0xffff;
      MultihopOscilloscopeC__report_problem();
    }
  if (MultihopOscilloscopeC__reading < NREADINGS) {
    __nesc_hton_uint16(MultihopOscilloscopeC__local.readings[MultihopOscilloscopeC__reading++].nxdata, data);
    }
}

# 48 "../../tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "../../tos/interfaces/Read.nc"
inline static void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0xb6f48ea0, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__val_t val){
#line 63
  switch (arg_0xb6f48ea0) {
#line 63
    case /*MultihopOscilloscopeAppC.Sensor*/AccelXC__0__ID:
#line 63
      MultihopOscilloscopeC__Read__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__default__readDone(arg_0xb6f48ea0, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 107 "../../tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopping = TRUE;
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask();
}

# 46 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "../../tos/system/ArbiterP.nc"
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0xb6f8fc18){
#line 65
    /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0xb6f8fc18);
#line 65
}
#line 65
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "../../tos/system/RoundRobinResourceQueueC.nc"
static inline void /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 66 "../../tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  unsigned int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "../../tos/interfaces/ResourceQueue.nc"
inline static bool /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "../../tos/system/ArbiterP.nc"
static inline error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__reqResId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 120 "../../tos/interfaces/Resource.nc"
inline static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__release(uint8_t arg_0xb6f44df0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(arg_0xb6f44df0);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "../../tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__release(client);
  /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__readDone(client, result, data);
}





static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__width_t data)
#line 48
{
}

# 63 "../../tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__readDone(uint8_t arg_0xb6f48ea0, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__val_t val){
#line 63
  switch (arg_0xb6f48ea0) {
#line 63
    case /*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__ID:
#line 63
      /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__readDone(/*MultihopOscilloscopeAppC.Sensor*/AccelXC__0__ID, result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__default__readDone(arg_0xb6f48ea0, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 52 "../../tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 87 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 87
{
  * (volatile uint8_t *)0x7A &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 86 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 86
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 86
}
#line 86
# 98 "../../tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 98
{
  /* atomic removed: atomic calls only */
#line 99
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 105 "../../tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Atm128AdcP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "../../tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "../../tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "../../tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "../../tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0xb6f8fc18){
#line 65
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0xb6f8fc18);
#line 65
}
#line 65
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "../../tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(uint8_t id)
#line 57
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 66 "../../tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void )
#line 66
{
  unsigned int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "../../tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__NO_RES;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 47 "../../tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 120 "../../tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__release(uint8_t arg_0xb6f44df0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0xb6f44df0) {
#line 120
    case /*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(/*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__HAL_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__default__release(arg_0xb6f44df0);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "../../tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__readDone(client, result, data);
}

# 63 "../../tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0xb6ebb508, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__readDone(arg_0xb6ebb508, result, val);
#line 63
}
#line 63
# 104 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 104
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

#line 87
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 87
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}

static inline error_t AdcP__Read__read(uint8_t c)
#line 96
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA, c);
}

# 55 "../../tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__read(uint8_t arg_0xb6f45f20){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(arg_0xb6f45f20);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "../../tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Service__read(client);
}

# 202 "../../tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0xb6f91d70){
#line 102
  switch (arg_0xb6f91d70) {
#line 102
    case /*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__granted(/*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0xb6f91d70);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "../../tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0xb6f8fc18){
#line 59
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0xb6f8fc18);
#line 59
}
#line 59
# 190 "../../tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
}

# 137 "../../tos/platforms/iris/MeasureClockC.nc"
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void )
#line 137
{

  if (MeasureClockC__cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 141
  if (MeasureClockC__cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 143
  if (MeasureClockC__cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 145
  if (MeasureClockC__cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 147
  if (MeasureClockC__cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 149
  if (MeasureClockC__cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 151
  return ATM128_ADC_PRESCALE_2;
}

# 53 "../../tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC__Atm128Calibrate__adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x)
#line 63
{
#line 63
  union __nesc_unnamed4451 {
#line 63
    Atm128Admux_t f;
#line 63
    uint8_t t;
  } 
#line 63
  c = { .f = x };

#line 63
  return c.t;
}


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x)
#line 67
{
  * (volatile uint8_t *)0x7C = HplAtm128AdcP__Admux2int(x);
}

# 58 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux){
#line 58
  HplAtm128AdcP__HplAtm128Adc__setAdmux(admux);
#line 58
}
#line 58
# 108 "../../tos/chips/atm1281/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 108
{
  return refVoltage == admux.refs && channel == admux.mux;
}

# 53 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void )
#line 53
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)0x7C;
}

# 53 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void ){
#line 53
  struct __nesc_unnamed4254 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getAdmux();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 172 "../../tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 172
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP__HplAtm128Adc__getAdmux();
  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(admux, channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP__HplAtm128Adc__setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adate = Atm128AdcP__f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP__Atm128Calibrate__adcPrescaler();
    }
#line 192
  adcsr.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 197
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 203
        Atm128AdcP__f.precise;

        {
#line 203
          __nesc_atomic_end(__nesc_atomic); 
#line 203
          return __nesc_temp;
        }
      }
    }
#line 206
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "../../tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 32 "../../tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc3__getChannel(void )
#line 32
{
#line 32
  return 3;
}

# 20 "../../tos/platforms/mica/MicaBusAdc.nc"
inline static uint8_t AccelP__AccelAdcX__getChannel(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MicaBusP__Adc3__getChannel();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 30 "../../tos/sensorboards/mts300/AccelP.nc"
static inline uint8_t AccelP__ConfigX__getChannel(void )
#line 30
{
  return AccelP__AccelAdcX__getChannel();
}

# 144 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 144
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0xb6eb89c0){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0xb6eb89c0) {
#line 25
    case /*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__ID:
#line 25
      __nesc_result = AccelP__ConfigX__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP__Atm128AdcConfig__default__getChannel(arg_0xb6eb89c0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 71 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 71
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 34 "../../tos/sensorboards/mts300/AccelP.nc"
static inline uint8_t AccelP__ConfigX__getRefVoltage(void )
#line 34
{
  return ATM128_ADC_VREF_OFF;
}

# 148 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 148
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0xb6eb89c0){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0xb6eb89c0) {
#line 32
    case /*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__ID:
#line 32
      __nesc_result = AccelP__ConfigX__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0xb6eb89c0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 75 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 75
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 38 "../../tos/sensorboards/mts300/AccelP.nc"
static inline uint8_t AccelP__ConfigX__getPrescaler(void )
#line 38
{
  return ATM128_ADC_PRESCALE;
}

# 152 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 152
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "../../tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0xb6eb89c0){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0xb6eb89c0) {
#line 39
    case /*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__ID:
#line 39
      __nesc_result = AccelP__ConfigX__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0xb6eb89c0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 79 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 79
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = AccelP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 94 "../../tos/lib/power/PowerManagerP.nc"
static inline error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void )
#line 94
{
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 73 "../../tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void )
#line 73
{
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start();
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start();
}

# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )39U |= 1 << 4;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void AccelP__AccelPin__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput();
#line 46
}
#line 46
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )40U |= 1 << 4;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void AccelP__AccelPin__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set();
#line 40
}
#line 40
# 73 "../../tos/lib/timer/Timer.nc"
inline static void AccelP__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t AccelP__stopDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AccelP__stopDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 72 "../../tos/sensorboards/mts300/AccelP.nc"
static inline error_t AccelP__SplitControl__stop(void )
#line 72
{
  AccelP__stopDone__postTask();
  return SUCCESS;
}

# 130 "../../tos/interfaces/SplitControl.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = AccelP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 123 "../../tos/lib/power/PowerManagerP.nc"
static inline error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void )
#line 123
{
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 131 "../../tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 131
{
}

# 62 "../../tos/lib/power/PowerDownCleanup.nc"
inline static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 78 "../../tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void )
#line 78
{
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup();
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop();
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop();
}

# 49 "../../tos/system/ArbitratedReadC.nc"
static inline error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Service__default__read(uint8_t client)
#line 49
{
  return SUCCESS;
}

# 55 "../../tos/interfaces/Read.nc"
inline static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Service__read(uint8_t arg_0xb6f45f20){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
    __nesc_result = /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Service__default__read(arg_0xb6f45f20);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "../../tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Resource__granted(uint8_t client)
#line 35
{
  /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Service__read(client);
}

# 133 "../../tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 83 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 83
{
  * (volatile uint8_t *)0x7A |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 82 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 82
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 82
}
#line 82
# 93 "../../tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 93
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 94
    Atm128AdcP__HplAtm128Adc__enableAdc();
#line 94
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "../../tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Atm128AdcP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 69 "../../tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 97 "../../tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "../../tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0xb6f907b0){
#line 53
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0xb6f907b0);
#line 53
}
#line 53
# 77 "../../tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
#line 84
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 44 "../../tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__default__request(uint8_t client)
#line 44
{
  return FAIL;
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__request(uint8_t arg_0xb6f44df0){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0xb6f44df0) {
#line 88
    case /*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(/*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__HAL_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__default__request(arg_0xb6f44df0);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 31 "../../tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Resource__request(client);
}

#line 49
static inline error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__default__read(uint8_t client)
#line 49
{
  return SUCCESS;
}

# 55 "../../tos/interfaces/Read.nc"
inline static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__read(uint8_t arg_0xb6f45f20){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0xb6f45f20) {
#line 55
    case /*MultihopOscilloscopeAppC.Sensor*/AccelXC__0__ID:
#line 55
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__2__Read__read(/*MultihopOscilloscopeAppC.Sensor.AdcX*/AdcReadClientC__0__ID);
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__default__read(arg_0xb6f45f20);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "../../tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__granted(uint8_t client)
#line 35
{
  /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Service__read(client);
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0xb6f91d70){
#line 102
  /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__granted(arg_0xb6f91d70);
#line 102
  /*AccelReadP.MultiplexY*/ArbitratedReadC__1__Resource__granted(arg_0xb6f91d70);
#line 102
}
#line 102
# 216 "../../tos/system/ArbiterP.nc"
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0xb6f8fc18){
#line 59
    /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0xb6f8fc18);
#line 59
}
#line 59
# 190 "../../tos/system/ArbiterP.nc"
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
      /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId);
  /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId);
}

# 112 "../../tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error)
#line 112
{
  if (/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__requested == TRUE) {
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start();
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 117
    {
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__requested = FALSE;
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopping = FALSE;
    }
#line 120
    __nesc_atomic_end(__nesc_atomic); }
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void AccelP__SplitControl__stopDone(error_t error){
#line 138
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error);
#line 138
}
#line 138
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )40U &= ~(1 << 4);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void AccelP__AccelPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr();
#line 41
}
#line 41
# 67 "../../tos/sensorboards/mts300/AccelP.nc"
static inline void AccelP__stopDone__runTask(void )
#line 67
{
  AccelP__AccelPin__clr();
  AccelP__SplitControl__stopDone(SUCCESS);
}

# 103 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 242 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void )
#line 242
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 84 "../../tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 84
{
  if (/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopping == FALSE) {
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask();
    }
  else {
#line 88
    /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__requested = TRUE;
    }
}

# 73 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 97 "../../tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "../../tos/system/ArbiterP.nc"
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0xb6f907b0){
#line 53
    /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0xb6f907b0);
#line 53
}
#line 53
# 77 "../../tos/system/ArbiterP.nc"
static inline error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__request(uint8_t arg_0xb6f44df0){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(arg_0xb6f44df0);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 31 "../../tos/system/ArbitratedReadC.nc"
static inline error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__read(uint8_t client)
#line 31
{
  return /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Resource__request(client);
}

# 55 "../../tos/interfaces/Read.nc"
inline static error_t MultihopOscilloscopeC__Read__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*AccelReadP.MultiplexX*/ArbitratedReadC__0__Read__read(/*MultihopOscilloscopeAppC.Sensor*/AccelXC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 50 "../../tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP__0__CollectionId__fetch(void )
#line 50
{
  return 147;
}

# 869 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__default__fetch(uint8_t client)
#line 869
{
  return 0;
}

# 46 "../../tos/lib/net/CollectionId.nc"
inline static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__fetch(uint8_t arg_0xb6892780){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  switch (arg_0xb6892780) {
#line 46
    case 0U:
#line 46
      __nesc_result = /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP__0__CollectionId__fetch();
#line 46
      break;
#line 46
    default:
#line 46
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__default__fetch(arg_0xb6892780);
#line 46
      break;
#line 46
    }
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 294 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(uint8_t client, message_t *msg, uint8_t len)
#line 294
{
  ctp_data_header_t *hdr;
  fe_queue_entry_t *qe;

#line 297
  ;
  if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ROUTING_ON)) {
#line 298
      return EOFF;
    }
#line 299
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(client)) {
#line 299
      return ESIZE;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(msg, len);
  hdr = /*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg);
  __nesc_hton_uint16(hdr->origin.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(hdr->originSeqNo.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP__0__seqno++);
  __nesc_hton_uint8(hdr->type.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__fetch(client));
  __nesc_hton_uint8(hdr->thl.nxdata, 0);

  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[client] == (void *)0) {
      ;
      return EBUSY;
    }

  qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[client];
  qe->msg = msg;
  qe->client = client;
  qe->retries = MAX_RETRIES;
  ;
  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(qe) == SUCCESS) {
      if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__RADIO_ON) && !/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING)) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
        }
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[client] = (void *)0;
      return SUCCESS;
    }
  else {
      ;




      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SEND_QUEUE_FULL);


      return FAIL;
    }
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t MultihopOscilloscopeC__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 103 "../../tos/interfaces/AMPacket.nc"
inline static void MultihopOscilloscopeC__RadioAMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 349 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(uint8_t client, message_t *msg, uint8_t len)
#line 349
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(msg, len);
}

# 125 "../../tos/interfaces/Send.nc"
inline static void * MultihopOscilloscopeC__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 235 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC__Timer__fired(void )
#line 235
{
  unsigned short __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 236
  if (MultihopOscilloscopeC__reading == NREADINGS) {
      if (!MultihopOscilloscopeC__sendbusy) {
          oscilloscope_t *o = (oscilloscope_t *)MultihopOscilloscopeC__Send__getPayload(&MultihopOscilloscopeC__sendbuf, sizeof(oscilloscope_t ));

#line 239
          if (o == (void *)0) {
              MultihopOscilloscopeC__fatal_problem();
              return;
            }
          memcpy(o, &MultihopOscilloscopeC__local, sizeof MultihopOscilloscopeC__local);
          MultihopOscilloscopeC__RadioAMPacket__setDestination(&MultihopOscilloscopeC__sendbuf, 01);
          if (MultihopOscilloscopeC__Send__send(&MultihopOscilloscopeC__sendbuf, sizeof MultihopOscilloscopeC__local) == SUCCESS) {
            MultihopOscilloscopeC__sendbusy = TRUE;
            }
          else {
#line 248
            MultihopOscilloscopeC__report_problem();
            }
        }
      MultihopOscilloscopeC__reading = 0;


      if (!MultihopOscilloscopeC__suppress_count_change) {
        (__nesc_temp42 = MultihopOscilloscopeC__local.count.nxdata, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
        }
#line 256
      MultihopOscilloscopeC__suppress_count_change = FALSE;
    }

  if (MultihopOscilloscopeC__Read__read() != SUCCESS) {
    MultihopOscilloscopeC__fatal_problem();
    }
}

# 133 "../../tos/system/ArbiterP.nc"
static inline error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
                /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 184 "../../tos/system/ArbiterP.nc"
static inline bool /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__isOwner(void )
#line 184
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 185
    {
      unsigned char __nesc_temp = 
#line 185
      /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED
       || (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__resId == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id
       && (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING || /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING));

      {
#line 185
        __nesc_atomic_end(__nesc_atomic); 
#line 185
        return __nesc_temp;
      }
    }
#line 187
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 102 "../../tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error)
#line 102
{
  if (/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner()) {
    /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release();
    }
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void AccelP__SplitControl__startDone(error_t error){
#line 113
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error);
#line 113
}
#line 113
# 63 "../../tos/sensorboards/mts300/AccelP.nc"
static inline void AccelP__Timer__fired(void )
#line 63
{
  AccelP__SplitControl__startDone(SUCCESS);
}

# 198 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval(void )
#line 198
{
  /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval *= 2;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__currentInterval > 512000L) {
      /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 512000L;
    }
  /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime();
}

# 73 "../../tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 206 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval(void )
#line 206
{
  uint32_t remaining = /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval;

#line 208
  remaining -= /*CtpP.Router*/CtpRoutingEngineP__0__t;
  /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed = TRUE;
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(remaining);
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 443 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void )
#line 443
{
  if (/*CtpP.Router*/CtpRoutingEngineP__0__radioOn && /*CtpP.Router*/CtpRoutingEngineP__0__running) {
      if (!/*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed) {
          /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
          /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask();
          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval();
        }
      else {
          /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval();
        }
    }
}

#line 437
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void )
#line 437
{
  if (/*CtpP.Router*/CtpRoutingEngineP__0__radioOn && /*CtpP.Router*/CtpRoutingEngineP__0__running) {
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
}

# 746 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void )
#line 746
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
  ;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
}

# 204 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0xb70819f0){
#line 83
  switch (arg_0xb70819f0) {
#line 83
    case 0U:
#line 83
      MultihopOscilloscopeC__Timer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      AccelP__Timer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0xb70819f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 194 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t)
#line 194
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)0xB6 & (1 << 3)) 
      ;
    * (volatile uint8_t *)0xB3 = t;
  }
}

# 54 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm1281Timer2AsyncP__Compare__set(t);
#line 54
}
#line 54
# 99 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void )
#line 99
{
#line 99
  return * (volatile uint8_t *)0xB2;
}

# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer2AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 278 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void )
#line 278
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 86 "../../tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void ){
#line 86
  int __nesc_result;
#line 86

#line 86
  __nesc_result = HplAtm1281Timer2AsyncP__TimerAsync__compareABusy();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 112 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n)
#line 112
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base - 1;
    }
#line 122
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(n);
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 264 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void )
#line 264
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 265
    {
      unsigned long __nesc_temp = 
#line 265
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;

      {
#line 265
        __nesc_atomic_end(__nesc_atomic); 
#line 265
        return __nesc_temp;
      }
    }
#line 267
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "../../tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(msg, dest);
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(msg, 147);
  return /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(msg, len);
}

# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t MultihopOscilloscopeC__SerialSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 178 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC__uartSendTask__runTask(void )
#line 178
{
  if (MultihopOscilloscopeC__SerialSend__send(0x0001, &MultihopOscilloscopeC__uartbuf, MultihopOscilloscopeC__uartlen) != SUCCESS) {
      MultihopOscilloscopeC__report_problem();
    }
  else 
#line 181
    {
      MultihopOscilloscopeC__uartbusy = TRUE;
    }
}

# 181 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__start(void )
#line 181
{
#line 181
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 65 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm1281Timer2AsyncP__Compare__start();
#line 65
}
#line 65
# 137 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x)
#line 137
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 82 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control){
#line 82
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(control);
#line 82
}
#line 82
# 131 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x)
#line 131
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 81 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control){
#line 81
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(control);
#line 81
}
#line 81
# 266 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void )
#line 266
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 68 "../../tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void ){
#line 68
  HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous();
#line 68
}
#line 68
# 89 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void )
#line 89
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous();
    x.flat = 0;
    x.bits.wgm21 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(x.flat);
    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 61 "../../tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

#line 61
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void )
#line 61
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ);
  return SUCCESS;
}

# 420 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__initNeighborTable(void )
#line 420
{
  uint8_t i;

  for (i = 0; i < 10; i++) {
      LinkEstimatorP__NeighborTable[i].flags = 0;
    }
}











static inline error_t LinkEstimatorP__Init__init(void )
#line 438
{
  ;
  LinkEstimatorP__initNeighborTable();
  return SUCCESS;
}

# 211 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void )
#line 211
{
  int i;

#line 213
  for (i = 0; i < /*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT; i++) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[i] = /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientEntries + i;
      ;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr = &/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsg;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__seqno = 0;
  return SUCCESS;
}

# 692 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void )
#line 692
{
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive = 0;
}

# 26 "../../tos/lib/net/ctp/TreeRouting.h"
static __inline void routeInfoInit(route_info_t *ri)
#line 26
{
  ri->parent = INVALID_ADDR;
  ri->etx = 0;
  ri->haveHeard = 0;
  ri->congested = FALSE;
}

# 213 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void )
#line 213
{
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__running = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges = 0;
  /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root = 0;
  routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo);
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit();
  /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(&/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer, /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength());
  ;

  return SUCCESS;
}

# 55 "../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 63 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 55 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 302 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

  return SUCCESS;
}

# 55 "../../tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 236 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__SoftwareInit__init(void )
{

  return RF230DriverLayerP__SpiResource__request();
}

# 55 "../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 65 "../../tos/system/PoolP.nc"
static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[i] = &/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool[i];
    }
  /*CtpP.MessagePoolP.PoolP*/PoolP__0__free = 12;
  /*CtpP.MessagePoolP.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[i] = &/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool[i];
    }
  /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free = 12;
  /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

# 64 "../../tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void )
#line 64
{
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first = 0;
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count = 0;
  return SUCCESS;
}

# 216 "../../tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "../../tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 154 "../../tos/platforms/iris/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 154
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "../../tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 224 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 224
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0XC9 = ctrl.flat;

  return SUCCESS;
}

#line 130
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 130
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0XC1 = ctrl.flat;

  return SUCCESS;
}

# 65 "../../tos/system/PoolP.nc"
static inline error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 10; i++) {
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__queue[i] = &/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool[i];
    }
  /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__free = 10;
  /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__queue[i] = &/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool[i];
    }
  /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__free = 20;
  /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__index = 0;
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverLayerP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 25 "../../tos/lib/net/UARTDebugSenderP.nc"
static inline void UARTDebugSenderP__Boot__booted(void )
#line 25
{
  UARTDebugSenderP__sending = FALSE;
  UARTDebugSenderP__len = sizeof(CollectionDebugMsg );
  UARTDebugSenderP__statSendFail = 0;
  UARTDebugSenderP__statLogReceived = 0;
  UARTDebugSenderP__statEnqueueFail = 0;
  UARTDebugSenderP__statSendDoneOk = 0;
  UARTDebugSenderP__statSendDoneFail = 0;
  UARTDebugSenderP__statSendDoneBug = 0;
}

# 428 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__StdControl__start(void )
#line 428
{
  ;
  return SUCCESS;
}

# 64 "../../tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(3U, dt);
#line 64
}
#line 64
# 68 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 226 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void )
#line 226
{
  /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr = /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address();

  if (!/*CtpP.Router*/CtpRoutingEngineP__0__running) {
      /*CtpP.Router*/CtpRoutingEngineP__0__running = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
      /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(BEACON_INTERVAL);
      ;
    }
  return SUCCESS;
}

# 222 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void )
#line 222
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ROUTING_ON);
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t MultihopOscilloscopeC__RoutingControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start());
#line 95
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 419 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__RadioState__turnOn(void )
{
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE || (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP && !RF230DriverLayerP__RadioAlarm__isFree())) {
    return EBUSY;
    }
  else {
#line 423
    if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 426
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TURNON;
  RF230DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 56 "../../tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RF230DriverLayerP__RadioState__turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 76 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t MultihopOscilloscopeC__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 79 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC__Boot__booted(void )
#line 79
{
  __nesc_hton_uint16(MultihopOscilloscopeC__local.interval.nxdata, DEFAULT_INTERVAL);
  __nesc_hton_uint16(MultihopOscilloscopeC__local.id.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(MultihopOscilloscopeC__local.version.nxdata, 0);


  if (MultihopOscilloscopeC__RadioControl__start() != SUCCESS) {
    MultihopOscilloscopeC__fatal_problem();
    }
  if (MultihopOscilloscopeC__RoutingControl__start() != SUCCESS) {
    MultihopOscilloscopeC__fatal_problem();
    }
}

# 60 "../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  MultihopOscilloscopeC__Boot__booted();
#line 60
  UARTDebugSenderP__Boot__booted();
#line 60
}
#line 60
# 219 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void )
#line 219
{
  uint8_t diff;


  if (* (volatile uint8_t *)0x70 & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 3)) | (1 << 1))) 
        ;
      diff = * (volatile uint8_t *)0xB3 - * (volatile uint8_t *)0xB2;
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)0xB2 > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 234
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "../../tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 107 "../../tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 107
{










  if ((
#line 117
  * (volatile uint8_t *)0x6E & ((1 << 1) | (1 << 2)) || 
  * (volatile uint8_t *)0x6F & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) || 
  * (volatile uint8_t *)0x71 & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) 
    {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)0XC1 & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 131
        if (* (volatile uint8_t *)0XC9 & ((1 << 3) | (1 << 4))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0xBC & (1 << 2)) {
              return ATM128_POWER_IDLE;
            }
          else {
            if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
                return ATM128_POWER_ADC_NR;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 142 "../../tos/chips/atm1281/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 142
{
  return m1 < m2 ? m1 : m2;
}

# 147 "../../tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 147
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 152
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 152
    uint8_t __result;

#line 152
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 153
   __asm volatile ("sei" :  :  : "memory");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli" :  :  : "memory");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 76 "../../tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "../../tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 204 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void )
#line 204
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 90 "../../tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 90
{
   __asm volatile ("sei" :  :  : "memory");}

# 191 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void )
#line 191
{
#line 191
  return * (volatile uint8_t *)0xB3;
}

# 48 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm1281Timer2AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 187 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void )
#line 187
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer2AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 268 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void )
#line 268
{
}

# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer2AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 72 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void )
#line 72
{
}

# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired();
#line 75
}
#line 75
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired();
}

# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig0__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired();
#line 48
}
#line 48
# 72 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void )
#line 72
{
}

# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired();
#line 75
}
#line 75
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired();
}

# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig1__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired();
#line 48
}
#line 48
# 72 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void )
#line 72
{
}

# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired();
#line 75
}
#line 75
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired();
}

# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig2__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired();
#line 48
}
#line 48
# 72 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void )
#line 72
{
}

# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired();
#line 75
}
#line 75
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired();
}

# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig3__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired();
#line 48
}
#line 48
# 42 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Interrupt__default__fired(void )
#line 42
{
}

# 68 "../../tos/interfaces/GpioInterrupt.nc"
inline static void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Interrupt__fired(void ){
#line 68
  /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Interrupt__default__fired();
#line 68
}
#line 68
# 38 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void )
#line 38
{
  /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Interrupt__fired();
}

# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void ){
#line 75
  /*MicaBusC.Atm128GpioInterrupt0C*/Atm128GpioInterruptC__0__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired();
}

# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig4__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired();
#line 48
}
#line 48
# 42 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Interrupt__default__fired(void )
#line 42
{
}

# 68 "../../tos/interfaces/GpioInterrupt.nc"
inline static void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Interrupt__fired(void ){
#line 68
  /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Interrupt__default__fired();
#line 68
}
#line 68
# 38 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Atm128Interrupt__fired(void )
#line 38
{
  /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Interrupt__fired();
}

# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void ){
#line 75
  /*MicaBusC.Atm128GpioInterrupt1C*/Atm128GpioInterruptC__1__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired();
}

# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig5__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired();
#line 48
}
#line 48
# 42 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Interrupt__default__fired(void )
#line 42
{
}

# 68 "../../tos/interfaces/GpioInterrupt.nc"
inline static void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Interrupt__fired(void ){
#line 68
  /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Interrupt__default__fired();
#line 68
}
#line 68
# 38 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Atm128Interrupt__fired(void )
#line 38
{
  /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Interrupt__fired();
}

# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void ){
#line 75
  /*MicaBusC.Atm128GpioInterrupt2C*/Atm128GpioInterruptC__2__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired();
}

# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig6__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired();
#line 48
}
#line 48
# 42 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Interrupt__default__fired(void )
#line 42
{
}

# 68 "../../tos/interfaces/GpioInterrupt.nc"
inline static void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Interrupt__fired(void ){
#line 68
  /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Interrupt__default__fired();
#line 68
}
#line 68
# 38 "../../tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Atm128Interrupt__fired(void )
#line 38
{
  /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Interrupt__fired();
}

# 75 "../../tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void ){
#line 75
  /*MicaBusC.Atm128GpioInterrupt3C*/Atm128GpioInterruptC__3__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "../../tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired();
}

# 48 "../../tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig7__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired();
#line 48
}
#line 48
# 59 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 59
{
  return * (volatile uint16_t *)0x78;
}

#line 56
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 56
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)0x7A;
}

#line 125
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 125
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 129
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 146
      oldSr.adif || oldSr.adsc;

#line 146
      return __nesc_temp;
    }
  }
}

# 150 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 150
  unsigned char __nesc_result;
#line 150

#line 150
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 150

#line 150
  return __nesc_result;
#line 150
}
#line 150
# 230 "../../tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 231
{
  return FALSE;
}

# 119 "../../tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 119
  unsigned char __nesc_result;
#line 119

#line 119
  __nesc_result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 119

#line 119
  return __nesc_result;
#line 119
}
#line 119
# 157 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 157
{
}

# 66 "../../tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0xb6eb94a8, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0xb6eb94a8, result, val);
#line 66
}
#line 66
# 66 "../../tos/lib/timer/BusyWait.nc"
inline static void AdcP__BusyWait__wait(AdcP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 109 "../../tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 109
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {

            AdcP__BusyWait__wait(125);
            AdcP__sample();
          }
        else 
          {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {

            AdcP__BusyWait__wait(125);
            AdcP__sample();
          }
        else 
          {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 81 "../../tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 81
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 81
}
#line 81
# 92 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 92
{
#line 92
  * (volatile uint8_t *)0x7A &= ~(1 << 3);
}

# 95 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 95
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 95
}
#line 95
# 112 "../../tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 112
{
  bool precise;
#line 113
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 121
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 140
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP__HplAtm128Adc__getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 148
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP__HplAtm128Adc__setAdmux(admux);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 168
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 156 "../../tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 156
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 156
}
#line 156
# 113 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 249 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__sendNextPart(void )
#line 249
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  /* atomic removed: atomic calls only */
#line 256
  {
    myLen = Atm128SpiP__len;
    tx = Atm128SpiP__txBuffer;
    rx = Atm128SpiP__rxBuffer;
    tmpPos = Atm128SpiP__pos;
    end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 267
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 270
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 280
  {
    if (tx != (void *)0) {
      Atm128SpiP__Spi__write(tx[tmpPos]);
      }
    else {
#line 284
      Atm128SpiP__Spi__write(0);
      }
    Atm128SpiP__pos = tmpPos;
  }


  return SUCCESS;
}

#line 352
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 352
{
  bool again;

  /* atomic removed: atomic calls only */
#line 355
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 377
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule();
#line 59
}
#line 59
# 76 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  __nesc_enable_interrupt();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
        /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
        }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 78
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 119 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 119
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareA__fired(void ){
#line 58
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 58
}
#line 58
# 229 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__default__fired(void )
#line 229
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareB__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareB__default__fired();
#line 58
}
#line 58
# 233 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareC__default__fired(void )
#line 233
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareC__default__fired();
#line 58
}
#line 58
# 697 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__IRQ__captured(uint16_t time)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverLayerP__capturedTime = time;
      RF230DriverLayerP__radioIrq = TRUE;
    }
#line 705
    __nesc_atomic_end(__nesc_atomic); }

  RF230DriverLayerP__Tasklet__schedule();
}

# 61 "../../tos/interfaces/GpioCapture.nc"
inline static void HplRF230P__IRQ__captured(uint16_t time){
#line 61
  RF230DriverLayerP__IRQ__captured(time);
#line 61
}
#line 61
# 219 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x86;
}

# 47 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static HplRF230P__Capture__size_type HplRF230P__Capture__get(void ){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = HplAtm1281Timer1P__Capture__get();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 64 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__Capture__captured(uint16_t time)
{
  time = HplRF230P__Capture__get();
  HplRF230P__IRQ__captured(time);
}

# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t){
#line 60
  HplRF230P__Capture__captured(t);
#line 60
}
#line 60
# 125 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 125
{
}

# 60 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper++;
      if ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper & /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer1P__Timer__overflow(void ){
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 70
}
#line 70
# 397 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "../../tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "../../tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "../../tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "../../tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          return TRUE;
      case SERIAL_PROTO_ACK: 
        default: 
          return FALSE;
    }
}

# 203 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "../../tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "../../tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "../../tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "../../tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "../../tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 65 "../../tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 530 "../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 530
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 532
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "../../tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "../../tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 669 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 669
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 672
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 700
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "../../tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "../../tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "../../tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 320 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 320
{
}

# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 319 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 319
{
}

# 47 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 225 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareA__default__fired(void )
#line 225
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareA__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareA__default__fired();
#line 58
}
#line 58
# 229 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareB__default__fired(void )
#line 229
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareB__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareB__default__fired();
#line 58
}
#line 58
# 233 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareC__default__fired(void )
#line 233
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareC__default__fired();
#line 58
}
#line 58
# 237 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Capture__default__captured(uint16_t time)
#line 237
{
}

# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__size_type t){
#line 60
  HplAtm1281Timer3P__Capture__default__captured(t);
#line 60
}
#line 60
# 219 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline uint16_t HplAtm1281Timer3P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x96;
}

# 216 "../../tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow();
}

# 60 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void )
#line 60
{
}

# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer3P__Timer__overflow(void ){
#line 70
  /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow();
#line 70
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow();
#line 70
}
#line 70
# 63 "../../tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "../../tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0xb733a010){
#line 75
  switch (arg_0xb733a010) {
#line 75
    case MultihopOscilloscopeC__uartSendTask:
#line 75
      MultihopOscilloscopeC__uartSendTask__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case AccelP__stopDone:
#line 75
      AccelP__stopDone__runTask();
#line 75
      break;
#line 75
    case /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask:
#line 75
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask();
#line 75
      break;
#line 75
    case /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask:
#line 75
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case AdcP__acquiredData:
#line 75
      AdcP__acquiredData__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    case RF230DriverLayerP__releaseSpi:
#line 75
      RF230DriverLayerP__releaseSpi__runTask();
#line 75
      break;
#line 75
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask:
#line 75
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask:
#line 75
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask();
#line 75
      break;
#line 75
    case /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask:
#line 75
      /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask();
#line 75
      break;
#line 75
    case UARTDebugSenderP__sendTask:
#line 75
      UARTDebugSenderP__sendTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0xb733a010);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 177 "../../tos/lib/serial/SerialActiveMessageP.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 177
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 179
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 90 "../../tos/system/AMQueueImplP.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 2) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 2;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 172 "../../tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 148
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 150
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 68
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 519 "../../tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 519
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 520
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 526
    __nesc_atomic_end(__nesc_atomic); }
}

# 170 "../../tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 89 "../../tos/system/QueueC.nc"
static /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__dequeue(void )
#line 89
{
  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t t = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__head();

#line 91
  ;
  if (!/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__empty()) {
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__head++;
      if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__head == 20) {
#line 94
        /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__head = 0;
        }
#line 95
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__size--;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__printQueue();
    }
  return t;
}

# 103 "../../tos/system/PoolP.nc"
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__put(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t *newVal)
#line 103
{
  if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__free >= 20) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__index + /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__free;

#line 109
      if (emptyIndex >= 20) {
          emptyIndex -= 20;
        }
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__queue[emptyIndex] = newVal;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__free++;
      ;
      return SUCCESS;
    }
}

# 58 "../../tos/lib/net/UARTDebugSenderP.nc"
static void UARTDebugSenderP__UARTSend__sendDone(message_t *msg, error_t error)
#line 58
{
  message_t *qh = UARTDebugSenderP__SendQueue__head();

#line 60
  if (qh == (void *)0 || qh != msg) {

      UARTDebugSenderP__statSendDoneBug++;
    }
  else 
#line 63
    {
      UARTDebugSenderP__SendQueue__dequeue();
      UARTDebugSenderP__MessagePool__put(msg);
      if (error == SUCCESS) {
        UARTDebugSenderP__statSendDoneOk++;
        }
      else {
#line 69
        UARTDebugSenderP__statSendDoneFail++;
        }
    }
#line 71
  UARTDebugSenderP__sending = FALSE;
  if (!UARTDebugSenderP__SendQueue__empty()) {
    UARTDebugSenderP__sendTask__postTask();
    }
}

# 186 "MultihopOscilloscopeC.nc"
static void MultihopOscilloscopeC__SerialSend__sendDone(message_t *msg, error_t error)
#line 186
{
  MultihopOscilloscopeC__uartbusy = FALSE;
  if (MultihopOscilloscopeC__UARTQueue__empty() == FALSE) {


      message_t *queuemsg = MultihopOscilloscopeC__UARTQueue__dequeue();

#line 192
      if (queuemsg == (void *)0) {
          MultihopOscilloscopeC__fatal_problem();
          return;
        }
      memcpy(&MultihopOscilloscopeC__uartbuf, queuemsg, sizeof(message_t ));
      if (MultihopOscilloscopeC__UARTMessagePool__put(queuemsg) != SUCCESS) {
          MultihopOscilloscopeC__fatal_problem();
          return;
        }
      MultihopOscilloscopeC__uartSendTask__postTask();
    }
}

#line 283
static void MultihopOscilloscopeC__fatal_problem(void )
#line 283
{
  MultihopOscilloscopeC__Leds__led0On();
  MultihopOscilloscopeC__Leds__led1On();
  MultihopOscilloscopeC__Leds__led2On();
  MultihopOscilloscopeC__Timer__stop();
}

# 103 "../../tos/system/PoolP.nc"
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__Pool__put(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__pool_t *newVal)
#line 103
{
  if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__free >= 10) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__index + /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__free;

#line 109
      if (emptyIndex >= 10) {
          emptyIndex -= 10;
        }
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__queue[emptyIndex] = newVal;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP__2__free++;
      ;
      return SUCCESS;
    }
}

# 163 "../../tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, err);
}

# 132 "../../tos/lib/net/UARTDebugSenderP.nc"
static error_t  UARTDebugSenderP__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric)
#line 132
{
  UARTDebugSenderP__statLogReceived++;
  if (UARTDebugSenderP__MessagePool__empty()) {
      return FAIL;
    }
  else 
#line 136
    {
      message_t *msg = UARTDebugSenderP__MessagePool__get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP__UARTSend__getPayload(msg, sizeof(CollectionDebugMsg ));

#line 139
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP__len);

      __nesc_hton_uint8(dbg_msg->type.nxdata, type);
      __nesc_hton_uint16(dbg_msg->data.route_info.parent.nxdata, parent);
      __nesc_hton_uint8(dbg_msg->data.route_info.hopcount.nxdata, hopcount);
      __nesc_hton_uint16(dbg_msg->data.route_info.metric.nxdata, metric);
      __nesc_hton_uint16(dbg_msg->seqno.nxdata, UARTDebugSenderP__statLogReceived);

      if (UARTDebugSenderP__SendQueue__enqueue(msg) == SUCCESS) {
          UARTDebugSenderP__sendTask__postTask();
          return SUCCESS;
        }
      else 
#line 153
        {
          UARTDebugSenderP__statEnqueueFail++;
          UARTDebugSenderP__MessagePool__put(msg);
          return FAIL;
        }
    }
}

# 88 "../../tos/system/PoolP.nc"
static /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t */*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__Pool__get(void )
#line 88
{
  if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__free) {
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__pool_t *rval = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__queue[/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__index];

#line 91
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__queue[/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__index] = (void *)0;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__free--;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__index++;
      if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__index == 20) {
          /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP__3__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 135 "../../tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 101 "../../tos/system/QueueC.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__enqueue(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue_t newVal)
#line 101
{
  if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__size() < /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__Queue__maxSize()) {
      ;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__queue[/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__tail] = newVal;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__tail++;
      if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__tail == 20) {
#line 106
        /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__tail = 0;
        }
#line 107
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__size++;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC__2__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 114 "MultihopOscilloscopeC.nc"
static void MultihopOscilloscopeC__startTimer(void )
#line 114
{
  if (MultihopOscilloscopeC__Timer__isRunning()) {
#line 115
    MultihopOscilloscopeC__Timer__stop();
    }
#line 116
  MultihopOscilloscopeC__Timer__startPeriodic(__nesc_ntoh_uint16(MultihopOscilloscopeC__local.interval.nxdata));
  MultihopOscilloscopeC__reading = 0;
}

# 144 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 199 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void )
#line 199
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + now8;
        }
    }
#line 217
    __nesc_atomic_end(__nesc_atomic); }
#line 217
  return now;
}

# 357 "../../tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "../../tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "../../tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 207 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      * (volatile uint8_t *)0XC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 211
    __nesc_atomic_end(__nesc_atomic); }
}

# 445 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(am_addr_t neighbor)
#line 445
{
  uint8_t idx;

#line 447
  idx = LinkEstimatorP__findIdx(neighbor);
  if (idx == LinkEstimatorP__INVALID_RVAL) {
      return LinkEstimatorP__VERY_LARGE_ETX_VALUE;
    }
  else 
#line 450
    {
      if (LinkEstimatorP__NeighborTable[idx].flags & MATURE_ENTRY) {
          return LinkEstimatorP__NeighborTable[idx].etx;
        }
      else 
#line 453
        {
          return LinkEstimatorP__VERY_LARGE_ETX_VALUE;
        }
    }
}

#line 184
static uint8_t LinkEstimatorP__findIdx(am_addr_t ll_addr)
#line 184
{
  uint8_t i;

#line 186
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
          if (LinkEstimatorP__NeighborTable[i].ll_addr == ll_addr) {
              return i;
            }
        }
    }
  return LinkEstimatorP__INVALID_RVAL;
}

#line 489
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor)
#line 489
{
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 491
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP__NeighborTable[nidx].flags |= PINNED_ENTRY;
  return SUCCESS;
}

# 185 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime(void )
#line 185
{
  /*CtpP.Router*/CtpRoutingEngineP__0__t = /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval;
  /*CtpP.Router*/CtpRoutingEngineP__0__t /= 2;
  /*CtpP.Router*/CtpRoutingEngineP__0__t += /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32() % /*CtpP.Router*/CtpRoutingEngineP__0__t;
  /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(/*CtpP.Router*/CtpRoutingEngineP__0__t);
}

# 69 "../../tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 159 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 280 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

# 706 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static void *LinkEstimatorP__Packet__getPayload(message_t *msg, uint8_t len)
#line 706
{
  void *payload = LinkEstimatorP__SubPacket__getPayload(msg, len + sizeof(linkest_header_t ));

#line 708
  if (payload != (void *)0) {
      payload += sizeof(linkest_header_t );
    }
  return payload;
}

# 275 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength();
}

# 79 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

# 67 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

# 90 "../../tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 2) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 2;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 901 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;


  __nesc_hton_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata, length + 2);
}

# 79 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength()) {
    return EINVAL;
    }
  if (/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(msg) != SUCCESS) {
    return FAIL;
    }
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(msg, /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address());
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(msg, /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup());
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(msg, id);
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(msg, addr);

  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(id, addr, msg);

  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(msg);
}

# 120 "../../tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 120
{
  am_addr_t myAddr;

#line 122
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
    myAddr = ActiveMessageAddressC__addr;
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

#line 94
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 94
{
  am_group_t myGroup;

#line 96
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    myGroup = ActiveMessageAddressC__group;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 132 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

#line 127
static network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 103 "../../tos/lib/rfxlink/util/TaskletC.nc"
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__resume(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--/*RF230RadioC.TaskletC*/TaskletC__0__state != 0x80) {
        {
#line 108
          __nesc_atomic_end(__nesc_atomic); 
#line 108
          return;
        }
        }
#line 110
      /*RF230RadioC.TaskletC*/TaskletC__0__state = 1;
    }
#line 111
    __nesc_atomic_end(__nesc_atomic); }

  /*RF230RadioC.TaskletC*/TaskletC__0__doit();
}

#line 78
static void /*RF230RadioC.TaskletC*/TaskletC__0__doit(void )
{
  for (; ; ) 
    {
      /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RF230RadioC.TaskletC*/TaskletC__0__state == 1) 
            {
              /*RF230RadioC.TaskletC*/TaskletC__0__state = 0;
              {
#line 89
                __nesc_atomic_end(__nesc_atomic); 
#line 89
                return;
              }
            }
          for (; 0; ) ;
          /*RF230RadioC.TaskletC*/TaskletC__0__state = 1;
        }
#line 94
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 252 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 436 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg)
{
  uint16_t time;
  uint32_t time32;
  uint8_t *data;
  uint8_t length;
  uint8_t upload1;
  uint8_t upload2;

  if (((RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE || RF230DriverLayerP__state != RF230DriverLayerP__STATE_RX_ON) || RF230DriverLayerP__radioIrq) || !RF230DriverLayerP__isSpiAcquired()) {
    return EBUSY;
    }
  length = (RF230DriverLayerP__PacketTransmitPower__isSet(msg) ? 
  RF230DriverLayerP__PacketTransmitPower__get(msg) : 0) & RF230_TX_PWR_MASK;

  if (length != RF230DriverLayerP__txPower) 
    {
      RF230DriverLayerP__txPower = length;
      RF230DriverLayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230DriverLayerP__txPower);
    }


  if (
#line 457
  RF230DriverLayerP__Config__requiresRssiCca(msg)
   && (RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) > ((RF230DriverLayerP__rssiClear + RF230DriverLayerP__rssiBusy) >> 3)) 
    {
      RF230DriverLayerP__SpiResource__release();
      return EBUSY;
    }

  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_PLL_ON);


  time32 = RF230DriverLayerP__LocalTime__get();
  data = RF230DriverLayerP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata);

  if (RF230DriverLayerP__PacketTimeSyncOffset__isSet(msg)) 
    {

      upload1 = (void *)msg - (void *)data + RF230DriverLayerP__PacketTimeSyncOffset__get(msg);


      upload2 = length - 2 - upload1;


      for (; 0; ) ;
    }
  else 
    {
      upload1 = length - 2;
      upload2 = 0;
    }
  for (; 0; ) ;


  if ((RF230DriverLayerP__readRegister(RF230_TRX_STATUS) & RF230_TRX_STATUS_MASK) != RF230_PLL_ON) 
    {
      for (; 0; ) ;

      RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
      RF230DriverLayerP__SpiResource__release();
      return EBUSY;
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverLayerP__SLP_TR__set();
      time = RF230DriverLayerP__RadioAlarm__getNow();
    }
#line 504
    __nesc_atomic_end(__nesc_atomic); }
  RF230DriverLayerP__SLP_TR__clr();


  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_FRAME_WRITE);


  RF230DriverLayerP__FastSpiByte__splitReadWrite(length);

  do {
      RF230DriverLayerP__FastSpiByte__splitReadWrite(* data++);
    }
  while (--upload1 != 0);










  time32 += (int16_t )(time + RF230DriverLayerP__TX_SFD_DELAY) - (int16_t )time32;

  if (upload2 != 0) 
    {
      uint32_t absolute = __nesc_ntoh_uint32((* (timesync_absolute_t *)data).nxdata);

#line 535
      __nesc_hton_int32((* (timesync_relative_t *)data).nxdata, absolute - time32);


      for (; 0; ) ;
      do {
          RF230DriverLayerP__FastSpiByte__splitReadWrite(data[upload1]);
        }
      while (++upload1 != upload2);

      __nesc_hton_uint32((* (timesync_absolute_t *)data).nxdata, absolute);
    }


  RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();
#line 564
  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);

  RF230DriverLayerP__PacketTimeStamp__set(msg, time32);
#line 581
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_BUSY_TX_2_RX_ON;
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TRANSMIT;

  return SUCCESS;
}

#line 282
static bool RF230DriverLayerP__isSpiAcquired(void )
{
  if (RF230DriverLayerP__SpiResource__isOwner()) {
    return TRUE;
    }
  if (RF230DriverLayerP__SpiResource__immediateRequest() == SUCCESS) 
    {
      return TRUE;
    }

  RF230DriverLayerP__SpiResource__request();
  return FALSE;
}

# 129 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 129
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 131
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__enableSpi(TRUE);
#line 158
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClock(0);
  }

  Atm128SpiP__McuPowerState__update();
}

# 147 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 132
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 70 "../../tos/system/SimpleArbiterP.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id)
#line 70
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 106 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static rf230_metadata_t *RF230DriverLayerP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RF230DriverLayerP__RadioPacket__metadataLength(msg);
}

# 96 "../../tos/system/SimpleArbiterP.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
            }
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 80 "../../tos/lib/timer/TransformCounterC.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 101 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static void *RF230DriverLayerP__getPayload(message_t *msg)
{
  return (void *)msg + RF230DriverLayerP__RadioPacket__headerLength(msg);
}

#line 896
static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata) - 2;
}

# 66 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 65 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 73 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 83 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 83
{






  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size expires;

      ;


      now = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
      elapsed = now + 3 - t0;
      if (elapsed >= dt) {
        expires = now + 3;
        }
      else {
#line 102
        expires = t0 + dt;
        }



      if (expires == 0) {
        expires = 1;
        }



      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
    }
#line 116
    __nesc_atomic_end(__nesc_atomic); }
}

# 84 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
}

# 217 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 116 "../../tos/lib/rfxlink/util/TaskletC.nc"
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.TaskletC*/TaskletC__0__state != 0) 
        {
          /*RF230RadioC.TaskletC*/TaskletC__0__state |= 0x80;
          {
#line 123
            __nesc_atomic_end(__nesc_atomic); 
#line 123
            return;
          }
        }
      /*RF230RadioC.TaskletC*/TaskletC__0__state = 1;
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  /*RF230RadioC.TaskletC*/TaskletC__0__doit();
}

# 134 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

#line 207
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 96 "../../tos/system/SimpleArbiterP.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 527 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(message_t *msg, error_t error)
#line 527
{
  fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head();

#line 529
  ;

  if (error != SUCCESS) {

      ;
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL, 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_FAIL_WINDOW, SENDDONE_FAIL_OFFSET);
    }
  else {
#line 540
    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ACK_PENDING) && !/*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(msg)) {

        /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(/*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes();
        if (-- qe->retries) {
            ;
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_WAITACK, 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_NOACK_WINDOW, SENDDONE_NOACK_OFFSET);
          }
        else 
#line 551
          {

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(qe, msg, FALSE);
          }
      }
    else {



        /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(/*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(qe, msg, TRUE);
      }
    }
}

# 103 "../../tos/lib/net/UARTDebugSenderP.nc"
static error_t  UARTDebugSenderP__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg_id, am_addr_t origin, am_addr_t node)
#line 103
{
  UARTDebugSenderP__statLogReceived++;
  if (UARTDebugSenderP__MessagePool__empty()) {
      return FAIL;
    }
  else 
#line 107
    {
      message_t *msg = UARTDebugSenderP__MessagePool__get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP__UARTSend__getPayload(msg, sizeof(CollectionDebugMsg ));

#line 110
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP__len);

      __nesc_hton_uint8(dbg_msg->type.nxdata, type);
      __nesc_hton_uint16(dbg_msg->data.msg.msg_uid.nxdata, msg_id);
      __nesc_hton_uint16(dbg_msg->data.msg.origin.nxdata, origin);
      __nesc_hton_uint16(dbg_msg->data.msg.other_node.nxdata, node);
      __nesc_hton_uint16(dbg_msg->seqno.nxdata, UARTDebugSenderP__statLogReceived);

      if (UARTDebugSenderP__SendQueue__enqueue(msg) == SUCCESS) {
          UARTDebugSenderP__sendTask__postTask();
          return SUCCESS;
        }
      else 
#line 124
        {
          UARTDebugSenderP__statEnqueueFail++;
          UARTDebugSenderP__MessagePool__put(msg);
          return FAIL;
        }
    }
}

# 790 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg)
#line 790
{
#line 790
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->origin.nxdata);
}

#line 249
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t window, uint16_t offset)
#line 249
{
  uint16_t r = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16();

#line 251
  r %= window;
  r += offset;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(r);
  ;
}

# 289 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP__updateDETX(neighbor_table_entry_t *ne)
#line 289
{
  uint16_t estETX;

  if (ne->data_success == 0) {



      estETX = ne->data_total * 10;
    }
  else 
#line 297
    {
      estETX = 10 * ne->data_total / ne->data_success;
      ne->data_success = 0;
      ne->data_total = 0;
    }
  LinkEstimatorP__updateETX(ne, estETX);
}

#line 283
static void LinkEstimatorP__updateETX(neighbor_table_entry_t *ne, uint16_t newEst)
#line 283
{
  ne->etx = (LinkEstimatorP__ALPHA * ne->etx + (10 - LinkEstimatorP__ALPHA) * newEst) / 10;
}

# 89 "../../tos/system/QueueC.nc"
static /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__dequeue(void )
#line 89
{
  /*CtpP.SendQueueP*/QueueC__0__queue_t t = /*CtpP.SendQueueP*/QueueC__0__Queue__head();

#line 91
  ;
  if (!/*CtpP.SendQueueP*/QueueC__0__Queue__empty()) {
      /*CtpP.SendQueueP*/QueueC__0__head++;
      if (/*CtpP.SendQueueP*/QueueC__0__head == 13) {
#line 94
        /*CtpP.SendQueueP*/QueueC__0__head = 0;
        }
#line 95
      /*CtpP.SendQueueP*/QueueC__0__size--;
      /*CtpP.SendQueueP*/QueueC__0__printQueue();
    }
  return t;
}

# 483 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success)
#line 483
{



  if (qe->client < /*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[qe->client] = qe;
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(qe->client, msg, SUCCESS);
      if (success) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENT_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      else 
#line 496
        {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_SEND, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
    }
  else {
      if (success) {
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(qe->msg);
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_FWD_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      else {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_FWD, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(qe->msg) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
        }
#line 522
      if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
        }
    }
}

# 57 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )34U ^= 1 << 2;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "../../tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(message_t *m)
#line 116
{
  uint8_t i;

#line 118
  if (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count == 4) {





      i = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(m);
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(i % /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count);
    }

  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].origin = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].seqno = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].thl = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].type = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count++;
}

#line 84
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(message_t *m)
#line 84
{
  uint8_t i;
  uint8_t idx;

#line 87
  for (i = 0; i < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count; i++) {
      idx = (i + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first) % 4;


      if (
#line 89
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].origin && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].seqno && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].thl && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].type) {
          break;
        }
    }
  return i;
}

# 799 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg)
#line 799
{
#line 799
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->origin.nxdata);
}

#line 801
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg)
#line 801
{
#line 801
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->originSeqNo.nxdata);
}

#line 802
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg)
#line 802
{
#line 802
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->thl.nxdata);
}

#line 798
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg)
#line 798
{
#line 798
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->type.nxdata);
}

# 103 "../../tos/system/PoolP.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CtpP.MessagePoolP.PoolP*/PoolP__0__index + /*CtpP.MessagePoolP.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

# 76 "../../tos/lib/net/UARTDebugSenderP.nc"
static error_t UARTDebugSenderP__CollectionDebug__logEvent(uint8_t type)
#line 76
{
  UARTDebugSenderP__statLogReceived++;
  if (UARTDebugSenderP__MessagePool__empty()) {
      return FAIL;
    }
  else 
#line 80
    {
      message_t *msg = UARTDebugSenderP__MessagePool__get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP__UARTSend__getPayload(msg, sizeof(CollectionDebugMsg ));

#line 83
      if (dbg_msg == (void *)0) {
          return FAIL;
        }

      memset(dbg_msg, 0, UARTDebugSenderP__len);

      __nesc_hton_uint8(dbg_msg->type.nxdata, type);
      __nesc_hton_uint16(dbg_msg->seqno.nxdata, UARTDebugSenderP__statLogReceived);

      if (UARTDebugSenderP__SendQueue__enqueue(msg) == SUCCESS) {
          UARTDebugSenderP__sendTask__postTask();
          return SUCCESS;
        }
      else 
#line 95
        {
          UARTDebugSenderP__statEnqueueFail++;
          UARTDebugSenderP__MessagePool__put(msg);
          return FAIL;
        }
    }
}

# 103 "../../tos/system/PoolP.nc"
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index + /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

# 163 "../../tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

# 544 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx)
#line 544
{
  if (etx == (void *)0) {
    return FAIL;
    }
#line 547
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
    return FAIL;
    }
#line 549
  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root == 1) {
      *etx = 0;
    }
  else 
#line 551
    {
      *etx = /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent);
    }
  return SUCCESS;
}

# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 781 "../../tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 781
{
  uint8_t *payload = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(msg, len + sizeof(ctp_data_header_t ));

#line 783
  if (payload != (void *)0) {
      payload += sizeof(ctp_data_header_t );
    }
  return payload;
}

# 128 "MultihopOscilloscopeC.nc"
static message_t *
MultihopOscilloscopeC__Receive__receive(message_t *msg, void *payload, uint8_t len)
#line 129
{
  oscilloscope_t *in = (oscilloscope_t *)payload;
  oscilloscope_t *out;
  am_addr_t dest = MultihopOscilloscopeC__RadioAMPacket__destination(msg);

#line 133
  if (dest != 01) {
    }
  else 
    {
      if (MultihopOscilloscopeC__uartbusy == FALSE) {
          out = (oscilloscope_t *)MultihopOscilloscopeC__SerialSend__getPayload(&MultihopOscilloscopeC__uartbuf, sizeof(oscilloscope_t ));
          if (len != sizeof(oscilloscope_t ) || out == (void *)0) {
              return msg;
            }
          else {
              memcpy(out, in, sizeof(oscilloscope_t ));
            }
          MultihopOscilloscopeC__uartlen = sizeof(oscilloscope_t );
          MultihopOscilloscopeC__uartSendTask__postTask();
        }
      else 
#line 147
        {


          message_t *newmsg = MultihopOscilloscopeC__UARTMessagePool__get();

#line 151
          if (newmsg == (void *)0) {

              MultihopOscilloscopeC__report_problem();
              return msg;
            }


          out = (oscilloscope_t *)MultihopOscilloscopeC__SerialSend__getPayload(newmsg, sizeof(oscilloscope_t ));
          if (out == (void *)0) {
              return msg;
            }
          memcpy(out, in, sizeof(oscilloscope_t ));

          if (MultihopOscilloscopeC__UARTQueue__enqueue(newmsg) != SUCCESS) {



              MultihopOscilloscopeC__UARTMessagePool__put(newmsg);
              MultihopOscilloscopeC__fatal_problem();
              return msg;
            }
        }

      return msg;
    }
}

# 94 "../../tos/interfaces/Packet.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 362 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP__updateNeighborEntryIdx(uint8_t idx, uint8_t seq)
#line 362
{
  uint8_t packetGap;

  if (LinkEstimatorP__NeighborTable[idx].flags & INIT_ENTRY) {
      ;
      LinkEstimatorP__NeighborTable[idx].flags &= ~INIT_ENTRY;
    }

  packetGap = seq - LinkEstimatorP__NeighborTable[idx].lastseq;
  ;

  LinkEstimatorP__NeighborTable[idx].lastseq = seq;
  LinkEstimatorP__NeighborTable[idx].rcvcnt++;
  if (packetGap > 0) {
      LinkEstimatorP__NeighborTable[idx].failcnt += packetGap - 1;
    }

  if (packetGap > LinkEstimatorP__MAX_PKT_GAP) {
      LinkEstimatorP__initNeighborIdx(idx, LinkEstimatorP__NeighborTable[idx].ll_addr);
      LinkEstimatorP__NeighborTable[idx].lastseq = seq;
      LinkEstimatorP__NeighborTable[idx].rcvcnt = 1;
    }
  else {
#line 384
    if (
#line 383
    LinkEstimatorP__NeighborTable[idx].rcvcnt + LinkEstimatorP__NeighborTable[idx].failcnt >= LinkEstimatorP__BLQ_PKT_WINDOW
     || packetGap >= LinkEstimatorP__BLQ_PKT_WINDOW) {
        LinkEstimatorP__updateNeighborTableEst(LinkEstimatorP__NeighborTable[idx].ll_addr);
      }
    }
}

#line 171
static void LinkEstimatorP__initNeighborIdx(uint8_t i, am_addr_t ll_addr)
#line 171
{
  neighbor_table_entry_t *ne;

#line 173
  ne = &LinkEstimatorP__NeighborTable[i];
  ne->ll_addr = ll_addr;
  ne->lastseq = 0;
  ne->rcvcnt = 0;
  ne->failcnt = 0;
  ne->flags = INIT_ENTRY | VALID_ENTRY;
  ne->inquality = 0;
  ne->etx = 0;
}

#line 308
static uint16_t LinkEstimatorP__computeETX(uint8_t q1)
#line 308
{
  uint16_t q;

#line 310
  if (q1 > 0) {
      q = 2500 / q1;
      if (q > 250) {
          q = LinkEstimatorP__VERY_LARGE_ETX_VALUE;
        }
      return q;
    }
  else 
#line 316
    {
      return LinkEstimatorP__VERY_LARGE_ETX_VALUE;
    }
}

#line 197
static uint8_t LinkEstimatorP__findEmptyNeighborIdx(void )
#line 197
{
  uint8_t i;

#line 199
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
        }
      else 
#line 201
        {
          return i;
        }
    }
  return LinkEstimatorP__INVALID_RVAL;
}



static uint8_t LinkEstimatorP__findWorstNeighborIdx(uint8_t thresholdETX)
#line 210
{
  uint8_t i;
#line 211
  uint8_t worstNeighborIdx;
  uint16_t worstETX;
#line 212
  uint16_t thisETX;

  worstNeighborIdx = LinkEstimatorP__INVALID_RVAL;
  worstETX = 0;
  for (i = 0; i < 10; i++) {
      if (!(LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY)) {
          ;
          continue;
        }
      if (!(LinkEstimatorP__NeighborTable[i].flags & MATURE_ENTRY)) {
          ;
          continue;
        }
      if (LinkEstimatorP__NeighborTable[i].flags & PINNED_ENTRY) {
          ;
          continue;
        }
      thisETX = LinkEstimatorP__NeighborTable[i].etx;
      if (thisETX >= worstETX) {
          worstNeighborIdx = i;
          worstETX = thisETX;
        }
    }
  if (worstETX >= thresholdETX) {
      return worstNeighborIdx;
    }
  else 
#line 237
    {
      return LinkEstimatorP__INVALID_RVAL;
    }
}

# 515 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor)
#line 515
{
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(neighbor);
  ;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == neighbor) {
      routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo);
      /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
}

#line 698
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t neighbor)
#line 698
{
  uint8_t i;

#line 700
  if (neighbor == INVALID_ADDR) {
    return /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive;
    }
#line 702
  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      if (/*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i].neighbor == neighbor) {
        break;
        }
    }
#line 706
  return i;
}

# 682 "../../tos/lib/net/4bitle/LinkEstimatorP.nc"
static uint8_t LinkEstimatorP__Packet__payloadLength(message_t *msg)
#line 682
{
  linkest_header_t *hdr;

#line 684
  hdr = LinkEstimatorP__getHeader(msg);
  return LinkEstimatorP__SubPacket__payloadLength(msg)
   - sizeof(linkest_header_t )
   - sizeof(linkest_footer_t ) * (NUM_ENTRIES_FLAG & __nesc_ntoh_uint8(hdr->flags.nxdata));
}

# 782 "../../tos/lib/net/ctp/CtpRoutingEngineP.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t *msg, ctp_options_t opt)
#line 782
{
  return (__nesc_ntoh_uint8(/*CtpP.Router*/CtpRoutingEngineP__0__getHeader(msg)->options.nxdata) & opt) == opt ? TRUE : FALSE;
}

# 101 "../../tos/system/QueueC.nc"
static error_t /*CtpP.SendQueueP*/QueueC__0__Queue__enqueue(/*CtpP.SendQueueP*/QueueC__0__queue_t newVal)
#line 101
{
  if (/*CtpP.SendQueueP*/QueueC__0__Queue__size() < /*CtpP.SendQueueP*/QueueC__0__Queue__maxSize()) {
      ;
      /*CtpP.SendQueueP*/QueueC__0__queue[/*CtpP.SendQueueP*/QueueC__0__tail] = newVal;
      /*CtpP.SendQueueP*/QueueC__0__tail++;
      if (/*CtpP.SendQueueP*/QueueC__0__tail == 13) {
#line 106
        /*CtpP.SendQueueP*/QueueC__0__tail = 0;
        }
#line 107
      /*CtpP.SendQueueP*/QueueC__0__size++;
      /*CtpP.SendQueueP*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 75 "../../tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] & (1 << id % 8);
}

#line 75
static bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 83 "../../tos/chips/atm1281/adc/AdcP.nc"
static void AdcP__sample(void )
#line 83
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 54 "../../tos/sensorboards/mts300/AccelP.nc"
static error_t AccelP__SplitControl__start(void )
#line 54
{
  AccelP__AccelPin__makeOutput();
  AccelP__AccelPin__set();


  AccelP__Timer__startOneShot(17);
  return SUCCESS;
}

# 73 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 250 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 250
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt = ndt;
    }
#line 256
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
}

#line 128
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void )
#line 128
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag();

#line 139
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 147
            __nesc_atomic_end(__nesc_atomic); 
#line 147
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();

#line 158
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
                }
              else {
#line 174
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT;
                  }
                else {
#line 177
                  newOcr2A = alarm_in;
                  }
                }
            }
        }
#line 180
      newOcr2A--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(newOcr2A);
    }
#line 182
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired();
    }
}

# 242 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_13(void )
#line 242
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();


  HplAtm1281Timer2AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_15(void )
#line 250
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();

  HplAtm1281Timer2AsyncP__Timer__overflow();
}

# 55 "../../tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 55
{
  HplAtm128InterruptSigP__IntSig0__fired();
}


__attribute((signal))   void __vector_2(void )
#line 60
{
  HplAtm128InterruptSigP__IntSig1__fired();
}


__attribute((signal))   void __vector_3(void )
#line 65
{
  HplAtm128InterruptSigP__IntSig2__fired();
}


__attribute((signal))   void __vector_4(void )
#line 70
{
  HplAtm128InterruptSigP__IntSig3__fired();
}


__attribute((signal))   void __vector_5(void )
#line 75
{
  HplAtm128InterruptSigP__IntSig4__fired();
}


__attribute((signal))   void __vector_6(void )
#line 80
{
  HplAtm128InterruptSigP__IntSig5__fired();
}


__attribute((signal))   void __vector_7(void )
#line 85
{
  HplAtm128InterruptSigP__IntSig6__fired();
}


__attribute((signal))   void __vector_8(void )
#line 90
{
  HplAtm128InterruptSigP__IntSig7__fired();
}

# 116 "../../tos/chips/atm1281/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_29(void )
#line 116
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

# 119 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 173 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 173
{










  Atm128SpiP__Spi__write(tx);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 226 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void )
#line 226
{
  HplAtm1281Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_18(void )
#line 230
{
  HplAtm1281Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_19(void )
#line 234
{
  HplAtm1281Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_16(void )
#line 238
{
  HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_20(void )
#line 242
{
  HplAtm1281Timer1P__Timer__overflow();
}

# 214 "../../tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
#line 214
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0XC6);
    }
}

# 412 "../../tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
              SerialP__rxState = SerialP__RXSTATE_TOKEN;
              }
            else {
#line 433
              SerialP__rxState = SerialP__RXSTATE_INFO;
              }
#line 434
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
                          SerialP__ack_queue_push(SerialP__rxSeqno);
                          }
#line 459
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 92 "../../tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  const uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 296 "../../tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 220 "../../tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 220
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "../../tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 308 "../../tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 308
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0XCE);
    }
}

#line 313
__attribute((interrupt))   void __vector_38(void )
#line 313
{
  HplAtm128UartP__HplUart1__txDone();
}

# 226 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
__attribute((interrupt))   void __vector_32(void )
#line 226
{
  HplAtm1281Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_33(void )
#line 230
{
  HplAtm1281Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_34(void )
#line 234
{
  HplAtm1281Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_31(void )
#line 238
{
  HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__get());
}

__attribute((interrupt))   void __vector_35(void )
#line 242
{
  HplAtm1281Timer3P__Timer__overflow();
}

