#ifndef STAT_H_
#define STAT_H_

//Structure declaration for computing statistics
typedef struct
{  
   float min;
   float max;
   float average;
} Stats_t;

//Function declaration for computing statistics
Stats_t compute_statistics(const float* numberset, int setlength);

#endif
