#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    if(fork() == 0) {
        printf("Soy el Proceso Hijo y ejecutare algo: \n");
        
        ////Version con p -> hace uso de la variable path del sistema
        printf("Con execlp ejecuto un ls -al \n");
        execlp("ls","ls", "-al", NULL);

        ////Variante sin p -> no hace uso de la variable path del sistema
        ////obligando a indicar la ubicación específica del programa
        //printf("Con execl debo compartir la ubicación del programa \n");
        //execl("/bin/ls","ls", "-al", NULL);

        printf("Veamos si puedo hacer algo más...\n");
    }
    else {
        printf("Proceso Padre: [%d]\n", getpid());
    }
    
}
