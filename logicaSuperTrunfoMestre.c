#include <stdio.h>

int main() {

    int resultado1, resultado2;
    int primeiroatributo, segundoatributo;

    //inserir informações da carta 1
    char estado1[20] = "A";
    char codigocarta1[4]= "A01";
    char cidade1[20] = "Mogi";
    double populacao1 = 451000;
    float areakm1 = 725;
    double pib1 = 19000000000;
    int pontosturisticos1 = 10;
    float densidadepopul1 = populacao1 / areakm1;
    float pibpercapita1 = pib1 / populacao1;
    double superpoder1 = populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapita1 + densidadepopul1;
    
    //inserir informações da carta 2
    char estado2[20] = "B";
    char codigocarta2[4] = "B01";
    char cidade2[20] = "Angra";
    double populacao2 = 179000;
    float areakm2 = 813;
    double pib2 = 11000000000;
    int pontosturisticos2 = 15;
    float densidadepopul2 = populacao2 / areakm2;
    float pibpercapita2 = pib2 / populacao2;
    double superpoder2 = populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapita2 + densidadepopul2;

    //perguntar ao usuário qual atributo deseja comparar
    printf("**** Super Trunfo Países ****\n");
    printf("Escolha um atributo para comparar as cidades de Mogi/SP e Angra/RJ.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &primeiroatributo);
    
    //armazenar o primeiro atributo no resultado1
    switch (primeiroatributo){
        case 1:
        printf("Escolhido População.\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Escolhido Área.\n");
        resultado1 = areakm1 > areakm2 ? 1 : 0;
        break;

        case 3:
        printf("Escolhido Pib.\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        printf("Escolhido Pontos Turísticos.\n");
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;

        case 5:
        printf("Escolhido Densidade Demográfica.\n");
        resultado1 = densidadepopul1 < densidadepopul2 ? 1 : 0;
        break;

        default:
        printf("Opção inválida");
        break;
    }
    //perguntar ao usuário qual o segundo atributo deseja comparar
    printf("\nEscolha um segundo atributo para comparar as cidades de Mogi/SP e Angra/RJ.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    
    printf("Escolha a segunda comparação: \n");
    scanf("%d", &segundoatributo);
    //caso ele escolher o mesmo atributo
    if (primeiroatributo == segundoatributo) {
        printf("Você escolheu o mesmo atributo!\n");
    } else{
        //armazenar o segundo atributo no resultado2
        switch (segundoatributo){
            case 1:
            printf("Escolhido População.\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;

            case 2:
            printf("Escolhido Área.\n");
            resultado2 = areakm1 > areakm2 ? 1 : 0;
            break;
            
            case 3:
            printf("Escolhido Pib.\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;

            case 4:
            printf("Escolhido Pontos Turísticos.\n");
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            break;

            case 5:
            printf("Escolhido Densidade Demográfica.\n");
            resultado2 = densidadepopul1 < densidadepopul2 ? 1 : 0;
            break;

            default:
            printf("Opção inválida");
            break;
        }

        //fazer a comparação lógica dos resultados
    if (resultado1 && resultado2) {
        printf("Você venceu!!!\n");
    } else if (resultado1 != resultado2) {
        printf("Empatou!\n");
        } else {
            printf("Você perdeu.\n");
        }
    
    }
 

    return 0;
}