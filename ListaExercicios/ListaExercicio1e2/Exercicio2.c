#include <stdio.h>

main(){

    float ht, vh, pd, sb, td, sl;

    printf("Informe o total de horas trabalhadas: ");
    scanf("%f", &ht);

    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &vh);

    printf("Informe o percentual total de descontos: ");
    scanf("%f", &pd);

    sb = ht * vh;
    td = (pd/100) * sb;
    sl = sb - td;

    printf("\nO total de horas trabalhadas e %.2f, o salário bruto e R$ %.2f, foram descontados R$ %.2f e o salario liquido e R$ %.2f \n", ht, sb, td, sl);

    }
