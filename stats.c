#include <math.h>
#include "stats.h"

//Function to find the statistics of given list
Stats_t compute_statistics(const float* numberset, int setlength) {
    Stats_t  s;
    int idx;
    float sum = 0;
    //Check for valid length
    if(setlength > 0){
        s.min = numberset[0];
        s.max = numberset[0];
        s.average = numberset[0];
        
        for(idx = 1 ; idx < setlength; idx ++){
            sum = sum + numberset[idx];
            //find min
            if(s.min > numberset[idx]){
                s.min = numberset[idx];
            }
            //find min
            if(s.max < numberset[idx]){
                s.max = numberset[idx]
            }
        }
        s.average = sum / setlength;   
    }
    else
    {
        s.min = NAN;
        s.max = NAN; 
        s.average = NAN;
    }
    return s;
}
