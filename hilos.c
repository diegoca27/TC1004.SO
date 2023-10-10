#include <pthread.h>
#include <stdio.h>

int saldo;

void * holaHilo(){
    printf("Hola desde un hilo\n");
}

void * incrementaSaldo(){
printf("El saldo actual es %d\n", saldo);
saldo = saldo+100;
printf("El nuevo saldo es %d\n", saldo);
}

int main(){
    saldo = 0;
    for(int i = 0; i<100; i++){
    pthread_t t;
    pthread_create(&t, NULL, incrementaSaldo, NULL);
    }
    pthread_exit(NULL);
}