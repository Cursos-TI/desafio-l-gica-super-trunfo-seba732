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

int ataque; //Declaração da variável ataque, que será usada para armazenar a escolha do jogador (de 1 a 7).
char jogarNovamente; //A variável jogarNovamente é usada para saber se o jogador quer repetir o ataque com as mesmas cartas.
 do{
//Início de um laço do...while que garante que o jogador repeta a jogada com a mesma carta.
// Pesquisei sobre loops para não precisar repetir tudo em cada teste.
printf("## Super Trunfo Logica ##\n"); //Exibe o nome do Jogo.
printf("Escolha uma opção de Ataque:\n"); //Exibe o menu de opções para o jogador escolher qual atributo deseja usar para o ataque. 
printf("1. Ataque população\n"); 
printf("2. Ataque área\n");
printf("3. Ataque PIB\n");
printf("4. Ataque Ponto Turístico\n");
printf("5. Ataque Densidade\n");
printf("6. Ataque PIB per capita\n");
printf("7. Ataque Super poder\n");
printf("8. ataque combinado\n");
printf("Digite o número da opção: ");
scanf("%d", &ataque);  //O valor digitado é armazenado na variável ataque.


switch (ataque) {   // O switch avalia o valor de ataque e executa o bloco correspondente.
    case 1: //Cada case trata um atributo diferente das cartas.
        printf("Ataque população:\n"); 
        if (populacao > populacao2) //Se o jogador escolheu o ataque de população, o código compara a população da carta 1 com a da carta 2.
            printf("Carta 1 venceu! %s\n", cidade); //Imprime o nome da cidade vencedora ou "Empate".
        else if (populacao < populacao2) 
            printf("Carta 2 venceu! %s\n", cidade2); //Imprime o nome da cidade vencedora ou "Empate".
        else
            printf("Empate!\n"); //Imprime "Empate".
        break;

    case 2:
        printf("Ataque área:\n");
        if (area > area2)
            printf("Carta 1 venceu! %s\n", cidade);
        else if (area < area2)
            printf("Carta 2 venceu! %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("Ataque PIB:\n");
        if (pib > pib2)
            printf("Carta 1 venceu! %s\n", cidade);
        else if (pib < pib2)
             printf("Carta 2 venceu! %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Ataque Ponto Turístico:\n");
        if (pontoturistico > pontoturistico2)
            printf("Carta 1 venceu! %s\n", cidade);
        else if (pontoturistico < pontoturistico2)
            printf("Carta 2 venceu! %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Ataque Densidade (menor é melhor!):\n");
        if (densidade < densidade2) //nesse, o menor valor vence)
            printf("Carta 1 venceu! %s\n", cidade);
        else if (densidade > densidade2)  //nesse, o menor valor vence)
            printf("Carta 2 venceu! %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 6:
        printf("Ataque PIB per capita:\n");
        if (pibpercapita > pibpercapita2)
            printf("Carta 1 venceu! %s\n", cidade);
        else if (pibpercapita < pibpercapita2)
             printf("Carta 2 venceu! %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 7:
        printf("Ataque Super Poder:\n");
        if (superPoder > superPoder2)
            printf("Carta 1 venceu! %s\n", cidade);
        else if (superPoder < superPoder2)
             printf("Carta 2 venceu! %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

     case 8: // criei a opção de ataque combinado, jogador tera a escolha de combinar os atributos de ataque 
        printf("Ataque Combinado!\n");
        printf("Escolha dois atributos para combinar:\n"); // Pesquisei para tornar mais limpo, estava com muita lishas para o menu opçoes 
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade (menor é melhor)\n6. PIB per capita\n");

        int atributo1, atributo2;  // Iniciei essas caixas para armazenar a opção de escolha do jogador 
        printf("Digite o número do primeiro atributo: "); // Peço para digitar o atributo 1
        scanf("%d", &atributo1);
        printf("Digite o número do segundo atributo: "); // Peço para digitar o atributo 2
        scanf("%d", &atributo2); 

    
    if (atributo1 == atributo2) { // Nao sei de foi a melhor opção mais evita repetir o atributo. 
        printf("Os atributos devem ser diferentes!\n"); // Mostra informação que precisa ser atributos diferentes 
        break;
    }

    float valor1 = 0, valor2 = 0; // essas duas variáveis vão armazenar a soma dos atributos escolhidos para cada carta

    // Pega o valor do primeiro atributo da carta  
    // Se digitar 1 valor1  assume  o numero que esta registrado em populaçao na primeira carta, e o valor2 assume a população da segunda carta,
    if (atributo1 == 1) { valor1 += populacao; valor2 += populacao2; } // soma população com segundo atributo 
    if (atributo1 == 2) { valor1 += area; valor2 += area2; } // segue a mesma logica para area
    if (atributo1 == 3) { valor1 += pib; valor2 += pib2; } // segue a mesma logica para PIB
    if (atributo1 == 4) { valor1 += pontoturistico; valor2 += pontoturistico2; } // segue a mesma logica para pontos turisticos 
    if (atributo1 == 5) { valor1 += 1.0 / densidade; valor2 += 1.0 / densidade2; } // segue a mesma logica para densidade, porem invertida pois a regra é quanto menor melhor 
    if (atributo1 == 6) { valor1 += pibpercapita; valor2 += pibpercapita2; } // segue a mesma logica para area

    // Pega o valor do segundo atributo da carta 1 da carta 2
    // Achei mais limpo separar por linhas 
    // Se digitar 1, valor1 a assume  o numero que esta registrado em populaçao na primeira carta, e o valor2 assume a população da segunda carta,
    if (atributo2 == 1) { valor1 += populacao; valor2 += populacao2; } // soma população com primeiro atributo
    if (atributo2 == 2) { valor1 += area; valor2 += area2; } // segue a mesma logica para area
    if (atributo2 == 3) { valor1 += pib; valor2 += pib2; } //segue a mesma logica para PIB
    if (atributo2 == 4) { valor1 += pontoturistico; valor2 += pontoturistico2; } // segue a mesma logica para pontos turisticos 
    if (atributo2 == 5) { valor1 += 1.0 / densidade; valor2 += 1.0 / densidade2; } // segue a mesma logica para densidade, porem invertida pois a regra é quanto menor melhor 
    if (atributo2 == 6) { valor1 += pibpercapita; valor2 += pibpercapita2; } // segue a mesma logica para PIB percapta

    // Compara os resultados e mostra quem vencedor 
    printf("#### Detalhes do ataque combinado ####\n");
    if (valor1 > valor2) // se valor1 for maior que valor2, carta 1 venceu exibe a cidade 
        printf("Carta 1 venceu! %s\n", cidade);
    else if (valor1 < valor2) // // se valor1 for menor que valor2, carta 2 venceu exibe a cidade 
        printf("Carta 2 venceu! %s\n", cidade2);
    else
        printf("Empate!\n"); //exibe empate 
       
    printf("A soma dos atributos da cidade: (%s): %.2f\n", cidade, valor1); //imprimi a primeira cidade e a soma dos atributos dela 
    printf("A soma dos atributos da segunda cidade (%s): %.2f\n", cidade2, valor2); //imprimi a  segunda cidade e a soma dos atributos dela 
    printf("os atributos escolhidos sao:\n"); //mostra os atributos 

    printf("Atributo 1: ");
if (atributo1 == 1) printf("População\n"); // se digitar 1 populçao 
else if (atributo1 == 2) printf("Área\n"); // se digitar 2 area 
else if (atributo1 == 3) printf("PIB\n"); // se digitar 3 PIB 
else if (atributo1 == 4) printf("Pontos turísticos\n"); // se digitar 4 Pontos turisticos  
else if (atributo1 == 5) printf("Densidade (menor é melhor)\n"); // se digitar 5 densidade  
else if (atributo1 == 6) printf("PIB per capita\n"); // se digitar 6 PIB per capita 
else printf("Inválido\n");

    printf("Atributo 2: ");  // segue a mesma logica 
if (atributo2 == 1) printf("População\n");
else if (atributo2 == 2) printf("Área\n");
else if (atributo2 == 3) printf("PIB\n");
else if (atributo2 == 4) printf("Pontos turísticos\n");
else if (atributo2 == 5) printf("Densidade (menor é melhor)\n");
else if (atributo2 == 6) printf("PIB per capita\n");
else printf("Inválido\n");

break;

    default:
        printf("Opção inválida.\n"); //Caso o jogador digite um número fora do intervalo de 1 a 8, exibe mensagem de erro.
}

printf("\nDeseja escolher outro ataque com as mesmas cartas? (S/N):\n");
    scanf(" %c", &jogarNovamente);
   //Após cada ataque, o jogador pode decidir repetir a comparação com as mesmas cartas (sem gerar novas).
}while(jogarNovamente == 'S' || jogarNovamente == 's'); // Pesquisei essa função de reptição para ter que ficar digitando tudo outra vez


return 0;   

  
}