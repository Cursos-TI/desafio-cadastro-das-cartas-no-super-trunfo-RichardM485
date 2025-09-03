#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Mestre

int main() {

    char estado1, estado2;
    char codigodacarta1[4], codigodacarta2[4];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int numpontosturisticos1, numpontosturisticos2;
    float densidadepop1, densidadepop2;
    float pibpcap1, pibpcap2;
    float Superpoder1, Superpoder2;
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
    scanf("%lu", &pop1);
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

    pibpcap1 = pib1 / pop1;
    densidadepop1 = pop1 / area1;
    Superpoder1 = pop1 + area1 + pib1 + numpontosturisticos1 + (1/densidadepop1) + pibpcap1;
    //O scrip vai efetuar os calculos de densidade populacional,PIB per capita e super poder da carta 1.
    //vale lembrar que se o usuário inserir 0 na população ou na area o programa irá quebrar,
    //mas como foi solicitado para não fazer validações, tive que deixar assim.
        
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
    scanf("%lu", &pop2);
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

    pibpcap2 = pib2 / pop2;
    densidadepop2 = pop2 / area2;
    Superpoder2 = pop2 + area2 + pib2 + numpontosturisticos2 + (1/densidadepop2) + pibpcap2;
    //O scrip vai efetuar os calculos de densidade populacional,PIB per capita e super poder da carta 2.
    //vale lembrar que se o usuário inserir 0 na população ou na area o programa irá quebrar,
    //mas como foi solicitado para não fazer validações, tive que deixar assim.

    //Resultados compilados.
    printf("\n----------------------------------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numpontosturisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadepop1);
    printf("PIB per Capita: %.2f reais\n", pibpcap1);

    printf("\n----------------------------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontosturisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais\n", pibpcap2);

    printf("\n----------------------------------------------------------------------\n");
    printf("Pontuação de cada carta, caso o resultado for 1 a carta 1 vence, se for 0 a carta 2 vence:\n");
    printf("A carta que possui a maior população vence: %d\n", (pop1)>(pop2));
    printf("A carta que possui a maior área vence: %d\n", (area1)>(area2));
    printf("A carta que possui o maior PIB vence: %d\n", (pib1)>(pib2));
    printf("A carta que possui o maior número de pontos turísticos vence: %d\n", (numpontosturisticos1)>(numpontosturisticos2));
    printf("A carta que possui a menor densidade populacional vence: %d\n", (densidadepop1)<(densidadepop2));
    printf("A carta que possui o maior PIB per capita vence: %d\n", (pibpcap1)>(pibpcap2));
    printf("A carta que possui o maior Superpoder vence: %d\n", (Superpoder1)>(Superpoder2));
    printf("----------------------------------------------------------------------\n");

    return 0;
}
