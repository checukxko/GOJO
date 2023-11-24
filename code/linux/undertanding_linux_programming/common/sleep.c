
#include "sleep.h"
#include <signal.h>
#include <stdio.h>

void sleep1()
{
    printf("about 4s send signal.\n");
    signal(SIGALRM, wake_up);

    alarm(4);
    pause();
    printf("wake up.\n");
}

void wake_up(int sig)
{
    printf("received sianl: %d\n", sig);
}


