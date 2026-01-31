#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <wait.h>

int main()
{
    while (true)
    {
        //Fork como función devuelve 0 cuando se trata de un proceso hijo
        if(fork() == 0) {
            printf("¡Proceso hijo inicia y termina! [%d]\n", getpid());
            return 0;
        }
        else {
            wait(NULL);
            printf("Continuare corriendo sin parar pero sin hijos zombies :-) \n");
            sleep(5);
        }
    }
}
