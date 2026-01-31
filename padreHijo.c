#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    //Fork como función devuelve 0 cuando se trata de un proceso hijo
    if(fork() == 0) {
        printf("Yo soy tu Hijo: [%d]\n", getpid());
    }
    else {
        printf("Yo soy tu Padre: [%d]\n", getpid());
    }
    
}
