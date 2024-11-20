#include <stdio.h>
#include <unistd.h>

int main(){
    int a = 5;

    int pid = fork();
    while(1) {
        fork();
        printf("Soy el proceso hijo a = %d\n", a);
    }
    return 0;
}