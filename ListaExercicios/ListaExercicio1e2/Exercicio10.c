#include <stdio.h>

main(){

    float ladox, ladoy, ladoz, somaladosxy, somaladosyz, somaladoszx;

    printf("Insira o tamanho do lado x: ");
    scanf("%f", &ladox);

    printf("Insira o tamanho do lado y: ");
    scanf("%f", &ladoy);

    printf("Insira o tamanho do lado z: ");
    scanf("%f", &ladoz);

    somaladosxy = ladox + ladoy;
    somaladosyz = ladoy + ladoz;
    somaladoszx = ladoz + ladox;

    if (ladox > somaladosyz){
    printf("Os valores dados não correspondem a lados de um triangulo!");
    } else if (ladoy > somaladoszx){
    printf("Os valores dados não correspondem a lados de um triangulo!");
    } else if (ladoz > somaladosxy){
    printf("Os valores dados não correspondem a lados de um triangulo!");
    } else if (ladox == ladoy && ladoy == ladoz){
    printf("Os valos dados formam um triangulo equilatero!");
    } else if (ladox == ladoy || ladoy == ladoz || ladoz == ladox){
    printf("Os valores dados formam um trinagulo isosceles!");
    } else if (ladox != ladoy || ladoy != ladoz || ladoz != ladox){
    printf("Os valores dados formam um triangulo escaleno!");
    }

}
