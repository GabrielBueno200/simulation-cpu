#ifndef PROCESS_H_
#define PROCESS_H_

typedef struct{
    int number;
    int duration;
    int arrival;
    int *interruptions;
    int numberIO;
    int quantumCount;
    int startDuration;
    int finalTime;
    int waitTime;
} Process;

int numberProcess;

#endif