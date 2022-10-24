#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float peso, altura, IMC;

    printf("Introduzca su peso en kilogramos caballero/a: ");
    scanf("%f", &peso);

    printf("Introduzca su altura en metros caballero/a: ");
    scanf("%f", &altura);

    IMC = peso / pow(altura, 2);

    printf("Tu IMC es: %.2f \n", IMC);

    if(IMC<16){
        printf("Te va a dar una pajara");
    }else if(IMC<17){
        printf("Come más");
    }else if(IMC<18){
        printf("Come algo");
    }else if(IMC<25){
        printf("Estas healthy");
    }else if(IMC<30){
        printf("Huesos anchos");
    }else if(IMC<35){
        printf("Sobrepeso cronico");
    }else if(IMC<41){
        printf("Estas premorbido");
    }else if(IMC>40){
        printf("Cachalote");
    }
    
     printf("\n");

    return 0;
}
