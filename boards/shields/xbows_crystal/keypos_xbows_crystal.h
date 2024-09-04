/*                                      XBOWS CRYSTAL KEY MATRIX / LAYOUT MAPPING

 ╭────────────────────────────╮  ╭────────────────────────────────────╮
 │  0   1   2   3   4   5   6 │  │  7   8   9  10  11  12  13  14  15 │
 │     16  17  18  19  20  21 ╰──╯ 22  23  24  25  26  27  28  29  30 │
 │     31  32  33  34  35  36  37  38  39  40  41  42  43    44    45 │
 │   46    47  48  49  50  51  52  53  54  55  56  57    58    59     │
 │ 60  61        62      63  64  65   66       67  68      69  70  71 │
 ╰────────────────────────────────────────────────────────────────────╯
 ╭────────────────────────────╮  ╭────────────────────────────────────╮
 │ LN6 LN5 LN4 LN3 LN2 LN1 LN0│  │ RN0 RN1 RN2 RN3 RN4 RN5 RN6 RN7 RN8│
 │     LT5 LT4 LT3 LT2 LT1 LT0╰──╯ RT0 RT1 RT2 RT3 RT4 RT5 RT6 RT7 RT8│
 │     LM5 LM4 LM3 LM2 LM1 LM0 CM0 RM0 RM1 RM2 RM3 RM4 RM5   RM6   RM7│
 │  LB5    LB4 LB3 LB2 LB1 LB0 CB0 RB0 RB1 RB2 RB3 RB4   RB5   RB6    │
 │ LH4 LH3       LH2     LH1 LH0 RH0  RH1      RH2 RH3     RH4 RH5 RH6│
 ╰────────────────────────────────────────────────────────────────────╯
 N : Number
 T : Top
 M : Middle
 B : Bottom
 H : Thumb
*/

#pragma once

#define LN0  6  // left-number row
#define LN1  5
#define LN2  4
#define LN3  3
#define LN4  2
#define LN5  1
#define LN6  0

#define RN0  7  // right-number row
#define RN1  8
#define RN2  9
#define RN3 10
#define RN4 11
#define RN5 12
#define RN6 13
#define RN7 14
#define RN8 15

#define LT0 21  // left-top row
#define LT1 20
#define LT2 19
#define LT3 18
#define LT4 17
#define LT5 16

#define RT0 22  // right-top row
#define RT1 23
#define RT2 24
#define RT3 25
#define RT4 26
#define RT5 27
#define RT6 28
#define RT7 29
#define RT8 30

#define CM0 37  // center-middle row

#define LM0 36  // left-middle row
#define LM1 35
#define LM2 34
#define LM3 33
#define LM4 32
#define LM5 31

#define RM0 38  // right-middle row
#define RM1 39
#define RM2 40
#define RM3 41
#define RM4 42
#define RM5 43
#define RM6 44
#define RM7 45

#define CB0 52  // center-bottom row

#define LB0 51  // left-bottom row
#define LB1 50
#define LB2 49
#define LB3 48
#define LB4 47
#define LB5 46

#define RB0 53  // right-bottom row
#define RB1 54
#define RB2 55
#define RB3 56
#define RB4 57
#define RB5 58
#define RB6 59

#define LH0 64  // left thumb keys
#define LH1 63
#define LH2 62
#define LH3 61
#define LH4 60

#define RH0 65  // right thumb keys
#define RH1 66
#define RH2 67
#define RH3 68
#define RH4 69
#define RH5 70
#define RH6 71
