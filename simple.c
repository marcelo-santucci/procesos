#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    fork();
    printf("Soy el proceso con identificador [%d] pero... ¿Padre o Hijo?\n", getpid());
}
