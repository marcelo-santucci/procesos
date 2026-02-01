#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <signal.h>

int main()
{
    while (true)
    {
        printf("Perdiendo el tiempo... [%d]\n", getpid());
        sleep(1);
    }
}
