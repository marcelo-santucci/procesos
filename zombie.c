#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    while (true)
    {
        //Fork como función devuelve 0 cuando se trata de un proceso hijo
        if(fork() == 0) {
            printf("Proceso hijo inicia, pero... ¿termina?... [%d]\n", getpid());
            return 0;
        }
        else {
            printf("Continuare corriendo sin parar pero... Zombies :-O \n");
            sleep(2);
        }
    }
}
