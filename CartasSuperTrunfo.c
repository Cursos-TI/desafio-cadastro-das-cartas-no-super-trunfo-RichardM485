#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato

int main() {

    char estado1, estado2;
    char codigodacarta1[4], codigodacarta2[4];
    char nomecidade1[50], nomecidade2[50];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int numpontosturisticos1, numpontosturisticos2; 
    //Variáveis criadas para o scrip

    printf("Bem vindo ao cadastro de cartas do jogo SuperTrunfo\n");
    printf("Vamos começar cadastrando 2 cartas para o jogo, por favor insira os valores: \n");
    //Apresentação do programa/inicialização.

    printf("\nCARTA 1! \n");
    printf("Escreva uma letra de 'A' até 'H' para sua carta: ");
    scanf(" %c", &estado1);
    //O scrip vai ler e gravar a letra enviada pelo usuário.

    printf("Escreva o código que esta carta irá ter, usando a letra escolhida anteriormente mais uma combinação de número de '01'a'04': ");
    scanf("%s", codigodacarta1);
    //O scrip vai ler e gravar a combinação enviada pelo usuário.

    printf("Escreva o nome da cidade: "); 
    scanf("%s", nomecidade1);
    //"O fgets() seria o mais recomendado neste caso pois não precisariamos nos limitar a escrever nomes 
    //de cidades que não possuem nome composto, porém para deixar o codigo mais simples e não utilizar o
    //while irei utilizar o printf() mesmo"

    printf("Informe a população da cidade: ");
    scanf("%d", &pop1);
    //O scrip vai ler e gravar o pop enviada pelo usuário.

    printf("Informe a área em Km² desta cidade: ");
    scanf("%f", &area1);
    //O scrip vai ler e gravar a area da cidade.

    printf("Escreva o PIB desta cidade: ");
    scanf("%f", &pib1);
    //O scrip vai ler e gravar o valor de PIB que essa cidade possui.

    printf("Escreva quantos pontos turísticos tem essa cidade: ");
    scanf("%d", &numpontosturisticos1);
    //O scrip vai ler e gravar a quantidade dos pontos.
    
    //Primeira carta finalizada indo para a carta 2.

    printf("\nCARTA 2!: \n");
    printf("Escreva uma letra de 'A' até 'H' para sua carta: ");
    scanf(" %c", &estado2);
    //O scrip vai ler e gravar a letra enviada pelo usuário.

    printf("Escreva o código que esta carta irá ter, usando a letra escolhida anteriormente mais uma combinação de número de '01'a'04': ");
    scanf("%s", codigodacarta2);
    //O scrip vai ler e gravar a combinação enviada pelo usuário.

    printf("Escreva o nome da cidade: "); 
    scanf("%s", nomecidade2);
    //"O fgets() seria o mais recomendado neste caso pois não precisariamos nos limitar a escrever nomes 
    //de cidades que não possuem nome composto, porém para deixar o codigo mais simples e não utilizar o
    //while irei utilizar o printf() mesmo"

    printf("Informe a população da cidade: ");
    scanf("%d", &pop2);
    //O scrip vai ler e gravar o pop enviada pelo usuário.

    printf("Informe a área em Km² desta cidade: ");
    scanf("%f", &area2);
    //O scrip vai ler e gravar a area da cidade.

    printf("Escreva o PIB desta cidade: ");
    scanf("%f", &pib2);
    //O scrip vai ler e gravar o valor de PIB que essa cidade possui.    

    printf("Escreva quantos pontos turísticos tem essa cidade: ");
    scanf("%d", &numpontosturisticos2);
    //O scrip vai ler e gravar a quantidade dos pontos.

    //Resultados compilados.
    printf("\n----------------------------------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d", numpontosturisticos1);

    printf("\n----------------------------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d", numpontosturisticos2);

    return 0;
}
