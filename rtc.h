/*
 * $Id: rtc.h,v 1.1 2016/04/04 14:45:06 anoncvs Exp $
 *
 *  Sonoff Arduino implementation by Theo Arends
 */

/* Function prototypes */
void convertTime();
void rtc_second();
void rtc_timezone(uint8_t timezone);
void rtc_init(uint8_t timezone);
