#include <stdio.h>

    int main () {
        char estado[10]; //Dados da Carta 1
        char codigo[10];
        char cidade[50];
        unsigned long int populacao;
        int pontos;
        float area, pib, densidade, pib_per_capita;
        
        //Carta 2
        char estado1[10];
        char codigo1[10];
        char cidade1[50];
        unsigned long populacao1;
        int pontos1;
        float area1, pib1, densidade1, pib_per_capita1;

        //Coleta de dados Carta 1

        printf("Carta 1:\n");
        printf("Digite o Estado (A-H): ");
        scanf("%s", &estado);

        printf("Digite o código (ex: A01): ");
        scanf("%s", &codigo);

        printf("Digite o nome da cidade: ");
        scanf("%s", &cidade);

        printf("Digite a População: ");
        scanf("%lu", &populacao);

        printf("Digite Área: ");
        scanf("%f", &area);

        printf("Digite o PIB: ");
        scanf("%f", &pib);

        printf("Digite os pontos turísticos: ");
        scanf("%d", &pontos);
        
        //Exibição Carta 1

        printf("Carta 1:\n"); 
        printf("Estado: %s\n", estado);
        printf("Código da Carta: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %lu\n", populacao);
        printf("Aréa: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Pontos Turísticos: %d\n", pontos);
        
        //Cálculo da carta 1
        
        densidade = populacao / area;
        printf("Densidade: %.2f\n", densidade);

        pib_per_capita = populacao / pib;
        printf("PIB per Capita: %.2f reais\n", pib_per_capita);

         //Coleta de dados Carta 2

        printf("Carta 2:\n");
        printf("Digite o Estado (A-H): ");
        scanf("%s", &estado1);

        printf("Digite o código (ex: A02): ");
        scanf("%s", &codigo1);

        printf("Digite o nome da cidade: ");
        scanf("%s", &cidade1);

        printf("Digite a População: ");
        scanf("%lu", &populacao1);

        printf("Digite Área: ");
        scanf("%f", &area1);

        printf("Digite o PIB: ");
        scanf("%f", &pib1);

        printf("Digite os pontos turísticos: ");
        scanf("%d", &pontos1);
        
        //Exibição Carta 2

        printf("Carta 2:\n");
        printf("Estado: %s\n", estado1);
        printf("Código da Carta: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %lu\n", populacao1);
        printf("Aréa: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Pontos Turísticos: %d\n", pontos1);
        
        //Cálculo da carta 2

        densidade1 = populacao1 / area1;
        printf("Densidade: %.2f\n", densidade1);

        pib_per_capita1 = populacao1 / pib1;
        printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

        //Menu e Comparação

        int opcao;
        
        printf("Opções para a comparação:\n");
        printf("1. População\n");
        printf("2. Pontos Turísticos\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Densidade\n");
        printf("6. PIB per Capita\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            printf("População ");
            if (populacao == populacao1)
            {
                printf("As Cartas Empataram!");
            } else if (populacao > populacao1)
            {
                printf("Cidade %s venceu!\n", cidade);
            }else{
                printf("Cidade %s venceu!\n", cidade1);
            } 
            break;
        case 2:
            printf("Pontos Turísticos ");
            if (pontos == pontos1)
            {
                printf("As Cartas Empataram!");
            } else if (pontos > pontos1)
            {
                printf("Cidade %s venceu!\n", cidade);
            }else{
                printf("Cidade %s venceu!\n", cidade1);
            } 
            break;
        case 3:
            printf("Área ");
            if (area == area1)
            {
                printf("As Cartas Empataram!");
            } else if (area > area1)
            {
                printf("Cidade %s venceu!\n", cidade);
            }else{
                printf("Cidade %s venceu!\n", cidade1);
            } 
            break;
        case 4:
            printf("PIB ");
            if (pib == pib1)
            {
                printf("As Cartas Empataram!");
            } else if (pib > pib1)
            {
                printf("Cidade %s venceu!\n", cidade);
            }else{
                printf("Cidade %s venceu!\n", cidade1);
            } 
            break;
        case 5:
            printf("Densidade ");
            if (densidade == densidade)
            {
                printf("As Cartas Empataram!");
            } else if (densidade > densidade1)
            {
                printf("Cidade %s venceu!\n", cidade);
            }else{
                printf("Cidade %s venceu!\n", cidade1);
            } 
            break;
        case 6:
            printf("Pib per Capita ");
            if (pib_per_capita == pib_per_capita1)
            {
                printf("As Cartas Empataram!");
            } else if (pib_per_capita < pib_per_capita1)
            {
                printf("Cidade %s venceu!\n", cidade);
            }else{
                printf("Cidade %s venceu!\n", cidade1);
            } 
            break;
        default:
        printf("Opção inválida");
        }

        return 0;
    }
