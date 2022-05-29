/*A atividade pedia para reconhecer o sexo masculino e feminino gerando assim dois arquivos e lendo eles. Mas no banco de dados não há a classe
genero. Como é o caso eu fiz um código simples de copiar dados de um para o outro e leitura do mesmo*/
#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *homem;
    FILE *mysql;

    mysql = fopen ("pessoa2.csv", "r");
    homem = fopen("homem.txt", "w");

    //código de cópia
    char counter[1000];
    while (fgets(counter, 1000, mysql) != NULL)
    fputs(counter, homem);

    fclose(homem);
    fclose(mysql);

    //Imprimindo arquivo copiado
    int id;
    char nome[30], sobrenome[30];
    char tipo_sanguineo[3];
    float peso;
    char estado[3];
    char telefone[14];

    FILE *homem2;
    do
    {
        homem2 = fopen("homem.txt", "r");

        if (homem2 == NULL)
        {
            printf("Erro ao abrir o arquivo!");
            return 1;
        }
    

        while (fscanf(homem2, "%d ", &id) != EOF)
        {
            fscanf(homem2, "%s ", &nome); // at� encontrar um \t
            fscanf(homem2, "%s ", &sobrenome);
            fscanf(homem2, "%s ", &tipo_sanguineo);
            fscanf(homem2, "%f ", &peso);
            fscanf(homem2, "%s ", &estado);
            fscanf(homem2, "%s", &telefone);

            printf("ID: %d \n", id);
            printf("nome: %s \n", nome);
            printf("sobrenome: %s \n", sobrenome);
            printf("sangue: %s \n", tipo_sanguineo);
            printf("peso: %.2f \n", peso);
            printf("estado: %s \n", estado);
            printf("telefone: %s \n\n\n", telefone);
            
        }
        fclose(homem2);
    }

    
    while (id > 0);
return 0;    
}