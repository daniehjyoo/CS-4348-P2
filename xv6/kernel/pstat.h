#ifndef _PSTAT_H_
#define _PSTAT_H_
#include "param.h"

struct pstat {
 int inuse[NPROC]; //whether this slot is in use
 int tickets[NPROC]; // number of tickets this process has
 int pid[NPROC]; // the pid of process
 int ticks[NPROC]; // tickets the process has accumulated
};

#endif // _PSTAT_H_
