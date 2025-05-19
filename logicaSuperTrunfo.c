#include <stdio.h>

int main() { 
    //variaveis da primera carta 1
    char estado = 'a'; // uso de char para armazenar um caractere 
    char codigo1, codigo2, codigo3; // variáveis para códigos de 3 caracteres
    char cidade [25];  // array de caracteres para o nome da cidade
    int populacao; //numero intero populção
    float area;  // float que aceita casas decimais area km²
    float pib; // float que aceita casas decimais pib em bilhoes 
    int pontoturistico; // numero inteiro 
    float densidade; // A densidade é calculada dividindo o número total de habitantes pela área da cidade
    float pibpercapita; // PIB per Capita é calculada dividindo o número total do PIB / habitantes
    double superPoder; // Pontuação total calculada da primeira carta 

    //Agora vou declarar as variaveis da carta 2
    char estado2 = 'b'; // código do estado da carta 2
    char codigo4, codigo5, codigo6; // variáveis para códigos de 3 caracteres
    char cidade2 [24]; // nome da cidade da carta 2
    int populacao2; //numero inteiro população
    float area2; // área em km²
    float pib2; // PIB em bilhões
    int pontoturistico2; // pontos turísticos
    float densidade2; // A densidade é calculada dividindo o número total de habitantes pela área da cidade
    float pibpercapita2; // PIB per Capita é calculada dividindo o número total do PIB / habitantes
    double superPoder2; // Pontuação total calculada da carta 2

    //aqui peço para digitar os dados da carta 1
    printf("Digite o codigo do estado de A-H: "); 
    scanf(" %c", &estado);

    printf("Digite o codigo da carta de A01-A04: "); //digitar 3 digitos
    scanf("  %c %c %c", &codigo1, &codigo2, &codigo3); // leitura de 3 caracteres

    printf("Digite o Nome da cidade: " ); //ao digitar, nao usar nome composto
    scanf("%s", cidade); // leitura de palavra única de até 24 caracteres

    printf("Digite o nmero de habitantes: ");
    scanf("%d", &populacao); //leitura  da populção

    printf("Digite a area da cidade em kM²: "); //digitar a arem em km²
    scanf("%f", &area); 

    printf("Digite o pib: "); //digitar o pib em bilhoes 
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: "); //digitar pontos turisticos 
    scanf("%d", &pontoturistico);

    densidade = (float) populacao / area; // O cast (float) garante que a divisão seja feita com casas decimais exata
    pibpercapita = (float) (pib * 1e9) / populacao; // O PIB foi fornecido em bilhões, Essa foi a forma que encontre para converter em reais.
    
    //Superpoder é a soma de todos os critérios da carta. Quanto menor a densidade, maior o valor do inverso
    superPoder = pib + (float) populacao + area + (float)pontoturistico + pibpercapita + (1.0f/ densidade);

   
    //peço para digitar os dados da carta 2, 
    printf("Digite o estado da carta 2 de A-H "); //Peço que digite valores diferentes da primeira 
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2 de A01- A04: "); //digitar 3 digitos 
    scanf(" %c %c %c", &codigo4, &codigo5, &codigo6);

    printf("Digite o nome da segunda cidade:  "); //Usar diferente do primeiro, não usar nome composto
    scanf("%s", cidade2); // leitura de palavra única de até 24 caracteres

    printf("Digite o nmero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a area em KM²: ");
    scanf("%f", &area2);

    printf("Digite o pib: "); //digitar o pib em bilhoes
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoturistico2);

    densidade2 = (float) populacao2 / area2; // O cast (float) garante que a divisão seja feita com casas decimais exata
    pibpercapita2 =  (float) (pib2 * 1e9) / populacao2; // O PIB foi fornecido em bilhões, Essa foi a forma que encontre para converter em reais.

    // Superpoder é a soma de todos os critérios da carta. Quanto menor a densidade, maior o valor do inverso
    superPoder2= pib2 + (float) populacao2 + area2 + (float)pontoturistico2 + pibpercapita2 + (1.0f/ densidade2);


    //aqui eu faço print das respostas da carta1 
    printf("O estado é: %c\n", estado); //exibe a letra do estado 
    printf("O codigo da carta é: %c%c%c\n", codigo1, codigo2, codigo3); //exibe 3 caracteres 
    printf("O nome da cidade é: %s\n", cidade); //exibe o nome da cidade
    printf("A populçao é: %d habitantes\n", populacao); //exibe o numero de habitantes
    printf("A area da cidade é: %.2f km²\n", area); // exibe a area da cidade 
    printf("O pibe da cidade é: %.2f bilhoes de reais\n", pib); //exibe o pib da cidade  
    printf("O numero de pontostos turisticos é: %d\n", pontoturistico); // exibe o numero de pontos turisticos
    printf("A densidade é: %.2f hab/km²\n" , densidade );
    printf("O pib percapita é: %.2f reais\n" , pibpercapita );
    

    //agora o print da segunda carta
    printf(" O estado é: %c\n", estado2); //exibe a letra do estado 2 
    printf("O codigo da carta é: %c%c%c\n", codigo4, codigo5, codigo6); //exibe 3 caracteres
    printf("O nome da cidade é: %s\n", cidade2); //exibe o nome da cidade 2
    printf("A populção é: %d habitantes\n", populacao2); //exibe o numero de habitantes 2
    printf("A area da cidade é: %.2f km²\n", area2 ); // exibe a area da cidade 2
    printf("O pibe da cidade é: %.2f bilhoes de reais\n", pib2); //exibe o pib da cidade 2
    printf("O numero de pontos turisticos é: %d\n", pontoturistico2);
    printf("A densidade é: %.2f hab/km²\n" , densidade2 );
    printf("O pib percapita é: %.2f reais\n" , pibpercapita2 );
        

    // Exibe o valor total de cada carta  
    printf("A pontuação da carta 1: %.2lf\n", superPoder);
    printf("A pontuação da carta 2: %.2lf\n", superPoder2);

    // Compara a população das duas cidades
    if (populacao > populacao2){
        printf("vencedor em populçao: %s\n", cidade); // Imprime o nome da cidade com maior população
    }
    else if (populacao < populacao2) {
        printf("Vencedor em População: %s\n ", cidade2); // Imprime o nome da segunda cidade se ela tiver maior população
    }
    else{
        printf("Empate em População \n"); // Se as populações forem iguais, imprime que houve empate
    }

    // Compara a área das duas cidades
    if (area > area2){
        printf("Vencedor em Area: %s\n", cidade); // Imprime a cidade com maior área
    }
    else if (area < area2){
        printf("vencedor em Area: %s\n", cidade2); // Imprime a segunda cidade se ela tiver maior área
    }
    else{
        printf("Empate em Area \n"); // Imprime empate caso as áreas sejam iguais
    }

    // Compara o PIB total das cidades
    if (pib > pib2){
        printf("Vencedor em PIB: %s\n", cidade); // imprime Cidade com maior PIB
    }
    else if (pib < pib2){
        printf("vencedor em PIB: %s\n", cidade2); // Imprime a segunda cidade se ela tiver com maior PIB
    }
    else{
        printf("Empate em PIB \n"); // Empate em PIB
    }
        // Compara a quantidade de pontos turísticos
    if (pontoturistico > pontoturistico2){
        printf("Vencedor em Pontos Turisticos: %s\n", cidade); // Cidade com mais pontos turísticos
    }
    else if (pontoturistico < pontoturistico2){
        printf("vencedor em Pontos Turisticos: %s\n", cidade2); // Segunda cidade com mais pontos turísticos
    }
    else{
        printf("Empate em Pontos Turisticos \n"); //Empate em Pontos turisticos 
    }

    // Compara a densidade demográfica (o critério é densidade MENOR)
     if (densidade < densidade2){
        printf("Vencedor em Dencidade: %s\n", cidade); // Cidade com menor densidade vence (mais espaço por pessoa)
    }
    else if (densidade > densidade2){
        printf("vencedor em Densidade: %s\n", cidade2); // Segunda cidade tem menor densidade
    }
    else{
        printf("Empate em Densidade \n"); //Empate em densidade 
    }

    // Compara o PIB per capita
     if (pibpercapita > pibpercapita2){
        printf("Vencedor em PIB Per capita: %s\n", cidade); // Cidade com maior PIB per capita
    }
    else if (pibpercapita < pibpercapita2){
        printf("vencedor em PIB Per capita: %s\n", cidade2);  // Se a Segunda cidade com maior PIB per capita
    }
    else{
        printf("Empate em PIB Per capita \n");  // Empate em PIB per capita
    }

    // Compara a pontuação geral (superPoder) de cada cidade
    if (superPoder > superPoder2){
        printf("Venceu a cidade: %s\n", cidade); // Cidade com maior pontuação geral vence
    }
    else if (superPoder < superPoder2){
        printf("A Vencedora com mais Pontos foi a Cidade: %s\n", cidade2); // Segunda cidade vence no total
    }
    else{
        printf("Empate na Soma total "); // Empate na soma total de pontos
    }



    return 0; //finaliza o programa 



}


