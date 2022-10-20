#include "stats.h"
#include "alerts.h"

//Variable definition for alerter call count
unsigned int emailAlertCallCount = 0;
unsigned int ledAlertCallCount = 0;

void check_and_alert(const float maxThreshold, alerter_funcptr alert[], int alerterslen, Stats_t computedStats){

    int idx;
    if(computedStats.max > maxThreshold){
       //Run a loop to call the alert function configured
       for(idx = 0 ; idx < alerterslen; idx ++){
           (*alert[idx])();
       }
    }
}

//email alerter functions
void emailAlerter(void){
    emailAlertCallCount ++;
    //Usecase
}

//led aleter functions
void ledAlerter(void){
    ledAlertCallCount ++;
    //Usecase
}

