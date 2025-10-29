#include <stdio.h>

int main() {

    // Carta 1 - Curitiba
    char estado1[3] = "PR";
    char cidade1[50] = "Curitiba";
    int populacao1 = 1773718;
    double pib1 = 98000000000.00;
    double area1 = 435.036;
    int pontos_turisticos1 = 34;
    double densidade1 = 4209.8;
    double pib_per_capita1 = 45318.46;

    // Carta 2 - São Paulo
    char estado2[3] = "SP";
    char cidade2[50] = "São Paulo";
    int populacao2 = 11890000;
    double pib2 = 3500000000000.00;
    double area2 = 1521;
    int pontos_turisticos2 = 40;
    double densidade2 = 7527.8;
    double pib_per_capita2 = 60805.18;

    // Carta 3 - Rio de Janeiro
    char estado3[3] = "RJ";
    char cidade3[50] = "Rio de Janeiro";
    int populacao3 = 6720000;
    double pib3 = 331280000000.00;
    double area3 = 1200;
    int pontos_turisticos3 = 58;
    double densidade3 = 5556;
    double pib_per_capita3 = 53078.23;

    // Carta 4 - Brasila (Super Trunfo)
    char estado4[3] = "DF";
    char cidade4[50] = "Brasilia";
    int populacao4 = 2980000;
    double pib4 = 286900000000.00;
    double area4 = 5761;
    int pontos_turisticos4 = 32;
    double densidade4 = 489.1;
    double pib_per_capita4 = 116713.39;

    // Mostrar as cartas
    printf("===== CARTAS DISPONÍVEIS =====\n");
    printf("1 - %s (%s)\n", cidade1, estado1);
    printf("2 - %s (%s)\n", cidade2, estado2);
    printf("3 - %s (%s)\n", cidade3, estado3);
    printf("4 - %s (%s) [SUPER TRUNFO]\n\n", cidade4, estado4);

    int carta_jogador, carta_pc, atributo;

    // Escolher cartas
    printf("Escolha sua carta (1 a 4): ");
    scanf("%d", &carta_jogador);

    printf("Escolha a carta do computador (1 a 4): ");
    scanf("%d", &carta_pc);

    // Escolher o atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População (maior vence)\n");
    printf("2 - PIB (maior vence)\n");
    printf("3 - Área (maior vence)\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per capita (maior vence)\n");
    printf("6 - Pontos Turísticos (maior vence)\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo);

    printf("\n--- RESULTADO ---\n");

    // Se alguém tiver o SUPER TRUNFO (DF), ele vence automaticamente
    if (carta_jogador == 4 && carta_pc != 4) {
        printf("Você escolheu o SUPER TRUNFO (%s) e venceu!\n", cidade4);
        return 0;
    } 
    if (carta_pc == 4 && carta_jogador != 4) {
        printf("O computador escolheu o SUPER TRUNFO (%s) e venceu!\n", cidade4);
        return 0;
    }

    // Variáveis para armazenar os valores comparados
    double valor_jogador = 0, valor_pc = 0;
    char cidade_jogador[50], cidade_computador[50];

    // Atribui cidade e valores conforme as escolhas
    if (carta_jogador == 1) sprintf(cidade_jogador, "%s", cidade1);
    if (carta_jogador == 2) sprintf(cidade_jogador, "%s", cidade2);
    if (carta_jogador == 3) sprintf(cidade_jogador, "%s", cidade3);
    if (carta_jogador == 4) sprintf(cidade_jogador, "%s", cidade4);

    if (carta_pc == 1) sprintf(cidade_computador, "%s", cidade1);
    if (carta_pc == 2) sprintf(cidade_computador, "%s", cidade2);
    if (carta_pc == 3) sprintf(cidade_computador, "%s", cidade3);
    if (carta_pc == 4) sprintf(cidade_computador, "%s", cidade4);

    // Seleciona o atributo e compara
    if (atributo == 1) { // População
        if (carta_jogador == 1) valor_jogador = populacao1;
        if (carta_jogador == 2) valor_jogador = populacao2;
        if (carta_jogador == 3) valor_jogador = populacao3;
        if (carta_jogador == 4) valor_jogador = populacao4;

        if (carta_pc == 1) valor_pc = populacao1;
        if (carta_pc == 2) valor_pc = populacao2;
        if (carta_pc == 3) valor_pc = populacao3;
        if (carta_pc == 4) valor_pc = populacao4;

        printf("População: %.0f x %.0f\n", valor_jogador, valor_pc);
        if (valor_jogador > valor_pc) printf("Você venceu!\n");
        else if (valor_jogador < valor_pc) printf("O computador venceu!\n");
        else printf("Empate!\n");
    }

    if (atributo == 2) { // PIB
        if (carta_jogador == 1) valor_jogador = pib1;
        if (carta_jogador == 2) valor_jogador = pib2;
        if (carta_jogador == 3) valor_jogador = pib3;
        if (carta_jogador == 4) valor_jogador = pib4;

        if (carta_pc == 1) valor_pc = pib1;
        if (carta_pc == 2) valor_pc = pib2;
        if (carta_pc == 3) valor_pc = pib3;
        if (carta_pc == 4) valor_pc = pib4;

        printf("PIB: %.2f x %.2f\n", valor_jogador, valor_pc);
        if (valor_jogador > valor_pc) printf("Você venceu!\n");
        else if (valor_jogador < valor_pc) printf("O computador venceu!\n");
        else printf("Empate!\n");
    }

    if (atributo == 3) { // Área
        if (carta_jogador == 1) valor_jogador = area1;
        if (carta_jogador == 2) valor_jogador = area2;
        if (carta_jogador == 3) valor_jogador = area3;
        if (carta_jogador == 4) valor_jogador = area4;

        if (carta_pc == 1) valor_pc = area1;
        if (carta_pc == 2) valor_pc = area2;
        if (carta_pc == 3) valor_pc = area3;
        if (carta_pc == 4) valor_pc = area4;

        printf("Área: %.2f km² x %.2f km²\n", valor_jogador, valor_pc);
        if (valor_jogador > valor_pc) printf("Você venceu!\n");
        else if (valor_jogador < valor_pc) printf("O computador venceu!\n");
        else printf("Empate!\n");
    }

    if (atributo == 4) { // Densidade populacional (menor vence)
        if (carta_jogador == 1) valor_jogador = densidade1;
        if (carta_jogador == 2) valor_jogador = densidade2;
        if (carta_jogador == 3) valor_jogador = densidade3;
        if (carta_jogador == 4) valor_jogador = densidade4;

        if (carta_pc == 1) valor_pc = densidade1;
        if (carta_pc == 2) valor_pc = densidade2;
        if (carta_pc == 3) valor_pc = densidade3;
        if (carta_pc == 4) valor_pc = densidade4;

        printf("Densidade: %.1f x %.1f (menor vence)\n", valor_jogador, valor_pc);
        if (valor_jogador < valor_pc) printf("Você venceu!\n");
        else if (valor_jogador > valor_pc) printf("O computador venceu!\n");
        else printf("Empate!\n");
    }

    if (atributo == 5) { // PIB per capita
        if (carta_jogador == 1) valor_jogador = pib_per_capita1;
        if (carta_jogador == 2) valor_jogador = pib_per_capita2;
        if (carta_jogador == 3) valor_jogador = pib_per_capita3;
        if (carta_jogador == 4) valor_jogador = pib_per_capita4;

        if (carta_pc == 1) valor_pc = pib_per_capita1;
        if (carta_pc == 2) valor_pc = pib_per_capita2;
        if (carta_pc == 3) valor_pc = pib_per_capita3;
        if (carta_pc == 4) valor_pc = pib_per_capita4;

        printf("PIB per capita: %.2f x %.2f\n", valor_jogador, valor_pc);
        if (valor_jogador > valor_pc) printf("Você venceu!\n");
        else if (valor_jogador < valor_pc) printf("O computador venceu!\n");
        else printf("Empate!\n");
    }

    if (atributo == 6) { // Pontos turísticos
        if (carta_jogador == 1) valor_jogador = pontos_turisticos1;
        if (carta_jogador == 2) valor_jogador = pontos_turisticos2;
        if (carta_jogador == 3) valor_jogador = pontos_turisticos3;
        if (carta_jogador == 4) valor_jogador = pontos_turisticos4;

        if (carta_pc == 1) valor_pc = pontos_turisticos1;
        if (carta_pc == 2) valor_pc = pontos_turisticos2;
        if (carta_pc == 3) valor_pc = pontos_turisticos3;
        if (carta_pc == 4) valor_pc = pontos_turisticos4;

        printf("Pontos Turísticos: %.0f x %.0f\n", valor_jogador, valor_pc);
        if (valor_jogador > valor_pc) printf("Você venceu!\n");
        else if (valor_jogador < valor_pc) printf("O computador venceu!\n");
        else printf("Empate!\n");
    }

    return 0;
}
