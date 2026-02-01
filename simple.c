#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    fork();
    printf("Soy un proceso... pero... ¿Padre o Hijo? mi process id es el: [%d]\n", getpid());
}
