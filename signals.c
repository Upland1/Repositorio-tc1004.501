#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void * no_me_matas(int signum){
    printf("recibi la senal %d\n", signum);
    printf("no me puedes matar");
}

int condicion;
void termina_ciclo(int signum){
    printf("cambiando el valor de condicion\n");
    condicion = 20;
}

int main() {
    //signal(2, no_me_matas);
    signal(10, termina_ciclo);
    condicion = 1;
    while(1){
        printf("trabajando \n");
        sleep(2);
    }
    printf("terminado");

    return 0;
}