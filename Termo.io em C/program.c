#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

//fase 1
void um (){
    char fase0 [] = "leite";
    char tentativa [7];
    char coringa [7] = "_____";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 6; i++) {
            if (tentativa [i] == fase0[i]){
                coringa[i] = fase0[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 5; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase0, tentativa);



        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");

    }
}

//fase dois
void dois (){
    char fase1 [] = "amendoim";
    char tentativa [11];
    char coringa [11] = "___________";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 10; i++) {
            if (tentativa [i] == fase1[i]){
                coringa[i] = fase1[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 9; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase1, tentativa);



        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}

//fase 3
void tres (){
    char fase [] = "gregoriano";
    char tentativa [12];
    char coringa [12] = "__________";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 11; i++) {
            if (tentativa [i] == fase[i]){
                coringa[i] = fase[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 10; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase, tentativa);



        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}
//fase 4
void quatro (){
    char fase [] = "pitot";
    char tentativa [7];
    char coringa [7] = "_____";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 7; i++){
        //atribuindo coringa
        for (int i = 0; i < 6; i++) {
            if (tentativa [i] == fase[i]){
                coringa[i] = fase[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 5; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase, tentativa);


        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}

//fase 5
void cinco (){
    char fase [] = "torta";
    char tentativa [7];
    char coringa [7] = "_____";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 6; i++) {
            if (tentativa [i] == fase[i]){
                coringa[i] = fase[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 5; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase, tentativa);


        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}

//fase 6
void seis (){
    char fase [] = "proparoxitona";
    char tentativa [15];
    char coringa [15] = "_____________";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 14; i++) {
            if (tentativa [i] == fase[i]){
                coringa[i] = fase[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 13; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase, tentativa);


        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}

//fase 7
void sete (){
    char fase [] = "alexandre";
    char tentativa [11];
    char coringa [11] = "____________";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 10; i++) {
            if (tentativa [i] == fase[i]){
                coringa[i] = fase[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 9; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase, tentativa);


        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}

//fase 8
void oito (){
    char fase [] = "capital";
    char tentativa [9];
    char coringa [9] = "_______";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 8; i++) {
            if (tentativa [i] == fase[i]){
                coringa[i] = fase[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 7; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase, tentativa);


        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}

//fase 9
void nove (){
    char fase [] = "estrogenio";
    char tentativa [12];
    char coringa [12] = "__________";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 11; i++) {
            if (tentativa [i] == fase[i]){
                coringa[i] = fase[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 10; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase, tentativa);


        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}

//fase 10

void dez (){
    char fase [] = "microsoft";
    char tentativa [11];
    char coringa [11] = "_________";

    printf ("\n\n\n");

    //laço mestre
    for (int i = 0; i < 6; i++){
        //atribuindo coringa
        for (int i = 0; i < 10; i++) {
            if (tentativa [i] == fase[i]){
                coringa[i] = fase[i];
            }
        }

        //laço que imprime os acertos
        printf ("\n [");
        for (int i = 0; i < 9; i++){
            printf(" %c", coringa[i]);
        }
        printf(" ]");
        printf("\n");


        printf ("\n--> Tentativa %d: ", i+1);
        scanf("%s", &tentativa);
        int aux = strcmp(fase, tentativa);


        if (aux == 0)
        {
            printf("\nPrimeira fase concluída!!");
            break;
        }
        if (i == 5){
            printf("\nNúmero de tentativas excedidas\n");
            break;
        }
        Sleep(400);
        system("cls");
    }
}

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i;
    int nivel = 0;
    int aux2 = 0;

    int escolha_nivel;


    while (aux2 == 0) {
        printf("\n\a Escolha um nível: ");
        scanf ("%d", &nivel);

        switch (nivel){

        case 1:
            um();
            break;
        case 2:
            dois();
            break;
        case 3:
            tres();
            break;
        case 4:
            quatro();
            break;
        case 5:
            cinco();
            break;
        case 6:
            seis();
            break;
        case 7:
            sete();
            break;
        case 8:
            oito();
            break;
        case 9:
            nove();
            break;
        case 10:
            dez();
            break;
        default:
            printf("Opção invalida");
            break;
        }

        printf ("\n\n\aGostaria de jogar outro nível?:\n1 - Sim\n2 - Não \n\a-> ");
        scanf("%d", &escolha_nivel);

        if (escolha_nivel != 1){
            printf("\n\aJogo encerrado!\n\n");
            aux2++;
        }

    }
return 0;
}
