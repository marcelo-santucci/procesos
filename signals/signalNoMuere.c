#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <signal.h>

void handler(int num) {
    write(STDOUT_FILENO, "¡Me rehuso a ser eliminado!     \n",13);
}

int main()
{
    signal(SIGINT, handler);
    while (true)
    {
        printf("Perdiendo el tiempo [%d]\n", getpid());
        sleep(1);
    }
}
