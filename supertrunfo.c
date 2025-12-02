#include <stdio.h>
int main()
{
    /* Cadastrando as Informações da primeira carta */
    char estado;
    char carta[10];
    char cidade[12];
    int população;
    float area;
    float pib;
    int pontos;   
    
    
    /*Inserindo as Informções da carta 01*/
    
        printf("Insira os Dados da Carta 1\n");
        printf("Insira o Estado do estado de A ate H:");
    scanf("%s", &estado);    
        printf("Insira o codigo da carta\n");
    scanf("%s" , &carta);
     printf("Insira o nome da cidade\n");
    scanf("%s", &cidade);
        printf("Insira o total da população\n");
    scanf("%d", &população);
        printf("Insira a area da cidade em km\n");
    scanf("%f" , &area);
     printf("Insira o PIB\n");
    scanf("%f" , &pib);
        printf("Insira os pontos turisticos\n");
    scanf("%d" , &pontos);

    /*Imprimindo as informações da carta 01*/
        printf("O estado e: %s\n", &estado);
        printf("O codigo da carta e: %s\n" , &carta);
        printf("O nome da cidade é : %s\n", &cidade);
        printf("O total da populacao é: %d\n", população);
        printf("A area total e: %.2f\n" , area);
        printf("O PIB e: %.2f\n" , pib);
        printf("A quantidade de pontos turisticos e: %d\n" , pontos);

    return 0;
}
