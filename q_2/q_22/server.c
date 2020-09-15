#include <stdio.h>
#include <signal.h>
#include <unistd.h>
static int count = 0;
void signal_handler(int signalNumber){
    if(signalNumber == SIGINT){
        count++;
    }

    else if(signalNumber == SIGUSR1){
        printf("Number of SIGINT = %d \n", count);
    }
}

int main(){
pid_t pid = getpid();
printf("the pid is = %d\n", pid);

while(1){
    //connect the signals to the handler
    signal(SIGUSR1, signal_handler);
    signal(SIGINT, signal_handler);
}
return 0;
}
