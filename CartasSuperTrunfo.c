#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Variáveis para atributos calculados
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    
    // Cabeçalho do programa
    printf("        SUPER TRUNFO - PAÍSES\n");
    
    // Cadastro da primeira carta
    printf(">>> CADASTRO DA PRIMEIRA CARTA <<<\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    // Cadastro da segunda carta
    printf(">>> CADASTRO DA SEGUNDA CARTA <<<\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo dos atributos derivados
    densidade_populacional1 = (float)populacao1 / area1;
    densidade_populacional2 = (float)populacao2 / area2;
    
    pib_per_capita1 = pib1 / (float)populacao1 * 1000000000; // Convertendo para per capita real
    pib_per_capita2 = pib2 / (float)populacao2 * 1000000000;
    
    // Cálculo do Super Poder (soma de todos os atributos com densidade invertida)
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + 
                   (1.0f / densidade_populacional1) + pib_per_capita1;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + 
                   (1.0f / densidade_populacional2) + pib_per_capita2;
    
    // Exibição dos dados cadastrados
    printf("              DADOS DAS CARTAS CADASTRADAS\n");
    
    // Dados da primeira carta
    printf(">>> CARTA 1 <<<\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\n");
    
    // Dados da segunda carta
    printf(">>> CARTA 2 <<<\n");
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Comparação entre as cartas
    printf("              COMPARAÇÃO ENTRE CARTAS\n");
    
    printf("Resultado da comparação (1 = Carta 1 vence, 2 = Carta 2 vence):\n\n");
    
    // População (maior vence)
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("1 (Carta 1 vence - %lu > %lu)\n", populacao1, populacao2);
    } else {
        printf("2 (Carta 2 vence - %lu > %lu)\n", populacao2, populacao1);
    }
    
    // Área (maior vence)
    printf("Área: ");
    if (area1 > area2) {
        printf("1 (Carta 1 vence - %.2f > %.2f)\n", area1, area2);
    } else {
        printf("2 (Carta 2 vence - %.2f > %.2f)\n", area2, area1);
    }
    
    // PIB (maior vence)
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("1 (Carta 1 vence - %.2f > %.2f)\n", pib1, pib2);
    } else {
        printf("2 (Carta 2 vence - %.2f > %.2f)\n", pib2, pib1);
    }
    
    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("1 (Carta 1 vence - %d > %d)\n", pontos_turisticos1, pontos_turisticos2);
    } else {
        printf("2 (Carta 2 vence - %d > %d)\n", pontos_turisticos2, pontos_turisticos1);
    }
    
    // Densidade Populacional (MENOR vence)
    printf("Densidade Populacional: ");
    if (densidade_populacional1 < densidade_populacional2) {
        printf("1 (Carta 1 vence - %.2f < %.2f)\n", densidade_populacional1, densidade_populacional2);
    } else {
        printf("2 (Carta 2 vence - %.2f < %.2f)\n", densidade_populacional2, densidade_populacional1);
    }
    
    // PIB per Capita (maior vence)
    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("1 (Carta 1 vence - %.2f > %.2f)\n", pib_per_capita1, pib_per_capita2);
    } else {
        printf("2 (Carta 2 vence - %.2f > %.2f)\n", pib_per_capita2, pib_per_capita1);
    }
    
    // Super Poder (maior vence)
    printf("Super Poder: ");
    if (super_poder1 > super_poder2) {
        printf("1 (Carta 1 vence - %.2f > %.2f)\n", super_poder1, super_poder2);
    } else {
        printf("2 (Carta 2 vence - %.2f > %.2f)\n", super_poder2, super_poder1);
    }

    
    return 0;
}
