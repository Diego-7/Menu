#include <stdio.h>

//Gerador de Numeros
int gerar(){

    //variaveis
    int numFinal;
    int numInicio;

    printf("Gerador de Numeros:");
    printf("\n Insira o numero maior: ");
    scanf("%d", &numFinal);
    printf("Insira o numero menor: ");
    scanf("%d", &numInicio);

        for(numFinal; numFinal >= numInicio; numFinal--)
        printf("\n %d", numFinal);

       return 0;
    }

    //Gerador de Senhas
    #include <math.h>
#include <stdio.h>
#include <stdio.h>
#include <time.h>

// Função para gerar senhas aleatórias
void randomPasswordGeneration(int N){
    //Iniciando contagem
    int i = 0;
    int randomizer = 0;

    // numeros sempre serao diferentes
    srand((unsigned int)(time(NULL)));

    // Array de numeros
    char numbers[] = "0123456789";

    // Array de letras minusculas
    char letter[] = "abcdefghijklmnopqrstuvwxyz";

    // Array de letras maiusculas
    char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Array de caracteres especiais
    char symbols[] = "!@#$^&*?";

    //armazenamento de senhas aleatorias
    char password[N];

    //Selecionar a senha aleatoria
    randomizer = rand() % 4;

    //Intervalo
    for (i = 0; i < N; i++){

        if (randomizer == 1){
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if(randomizer == 2){
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if(randomizer == 3){
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else{
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
    printf("\n Essa foi sua senha \n");

}

int main(){

    //variaveis
    int opcao;

    //menu
    printf("*************************************\n");
    printf("* 1) Gerador de numeros             *\n");
    printf("* 2) Gerador de senhas              *\n");
    printf("* 3)                                *\n");
    printf("* 4)                                *\n");
    printf("* 5) Sair                           *\n");
    printf("*************************************\n");

    printf("\n Digite uma opcao: ");
    scanf("%d", &opcao);

    //funcoes
    if(opcao == 1){
        gerar();
    }
   
    if(opcao == 2){
        int N = 10;

        randomPasswordGeneration(N);;
    }

    if(opcao == 5){
        exit(0);
    }

    /* else{
        printf("\n opcao invalida! \n");

    }
    */
    system("pause");

    main();

    return 0;
}