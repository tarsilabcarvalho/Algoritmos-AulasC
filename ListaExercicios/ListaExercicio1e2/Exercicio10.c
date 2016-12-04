#include <stdio.h>

//Tipo de Triangulo

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

    if (ladox > somaladosyz || ladoy > somaladoszx ||ladoz > somaladosxy){
    printf("Os valores dados não correspondem a lados de um triangulo!");
    } else if (ladox == ladoy && ladoy == ladoz){
    printf("Os valores dados formam um triangulo equilatero!");
    } else if (ladox == ladoy || ladoy == ladoz || ladoz == ladox){
    printf("Os valores dados formam um triangulo isosceles!");
    } else if (ladox != ladoy || ladoy != ladoz || ladoz != ladox){
    printf("Os valores dados formam um triangulo escaleno!");
    }

}
