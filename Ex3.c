#include <stdio.h>
#include <stdlib.h>

int main() {
    int total, horas, minutos, segundos, resto;
    scanf("%d", &total);
    horas = total/3600;
    resto = total%3600;
    minutos = resto/60;
    segundos = resto%60;
    printf("%d:%d:%d\n",horas,minutos,segundos);
}
