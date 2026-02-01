#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <signal.h>


void handler(int num) {
    write(STDOUT_FILENO, "¡Me rehuso a ser eliminado!     \n",13);
}

void seghandler(int num) {
    write(STDOUT_FILENO, "¡Seg Fault!     \n",10);
}

int main()
{
    struct sigaction sa;
    sa.sa_handler = handler;

    sigaction(SIGINT, &sa, NULL);

    while (true)
    {
        printf("Perdiendo el tiempo [%d]\n", getpid());
        sleep(1);
    }
}
