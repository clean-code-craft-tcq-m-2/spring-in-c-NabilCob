#ifndef ALERTS_H_
#define ALERTS_H_

//Type declartion
typedef void (*alerter_funcptr)();

//Variable declaration
extern unsigned int emailAlertCallCount;
extern unsigned int ledAlertCallCount;

//Function declaration
extern void check_and_alert(float maxThreshold, alerter_funcptr alerters[], int alerterslen, Stats_t computedStats);
extern void emailAlerter(void);
extern void ledAlerter(void);

#endif
