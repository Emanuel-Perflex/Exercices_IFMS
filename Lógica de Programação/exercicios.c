//letra a)
#include <stdio.h>
int main(){
   int numero = 1;
   while(numero <= 10){
       printf("%d\n", numero);
       numero ++;
   }
return 0;
}

//letra B
#include <stdio.h>
int main(){
   int contador = 100;
   while(contador >= 80){
       printf("%d\n", contador);
       contador --;
   }
return 0;
}

//Letra C)
#include <stdio.h>
int main(){
  int alfa = 30;
    while( alfa <= 180){
        if(alfa % 10 == 0){
        printf("%d\n", alfa);}
        alfa ++;}
return 0;}
//Letra D)
#include <stdio.h>
int main(){
    int numero = 1;
    while( numero <= 10){
        printf("%da %db %dc\n", numero, numero, numero);
        numero++;   
    }
return 0;
}
//Letra E)
#include <stdio.h>
int main(){
   int impar = 3;
   while(impar <= 311){
       if(impar % 2 == 1){
           printf("%d\n", impar);
       }
        impar ++;
   }
return 0;
}

//Letra F)
#include <stdio.h>
    int main(){
    int numero;
    while (numero <= 1024) {
        if (numero % 4 == 0){
            printf ("%dc %db %da\n", numero, numero, numero);
        }
        numero ++;
    }  
return 0;
}

//Letra G)
#include <stdio.h>
int main(){
    int numero = 1;
    while(numero <= 403){
        if (numero % 4 != 0){
        printf("%d\n", numero);
    }
    numero ++;
}
return 0;
}

//Letra H)
#include <stdio.h>
int main(){
    int numero = 1;
    int contador;
   for (int contador; contador <= 10; contador++) {
       numero = numero * 2;
       printf("%d\n",numero);
   }  
return 0;
}

//Letra I)
#include <stdio.h>
int main(){
    int numero = 4;
    while(numero <= 50){
        printf("3%d\t", numero);
        numero ++;
    }  
return 0;
}
//Letra J)
#include <stdio.h>
int main(){
    int numero = 1;

    while(numero <= 1000){
        printf("%d\t%d\t%d\t%d\t%d\n", numero, numero + 1, numero + 2, numero + 3, numero + 4);
        numero += 5;
    }
return 0;
}

//Letra K) 
#include <stdio.h>
int main(){
    int i = 1;
    int linha; 
    int coluna;
    for (linha = 1; linha <= 15; linha++){
        for (coluna = 1; coluna <= linha; coluna++){
            printf("%d ",i);
            i++;
        }
      printf("\n");
    }
return 0;
}
//Letra L)
#include <stdio.h>
int main(){
    int numero = 1;
    int fileiras = 1;
    while (fileiras <= 6){
        printf("%d %d %d %d %d\n", numero, numero + 1, numero + 2, numero + 3, numero + 4);
        printf("%d %d %d %d %d\n", numero * 10,(numero + 1) * 10, (numero + 2) * 10, (numero + 3) * 10, (numero + 4) * 10);
        numero += 5;
        fileiras ++;
    }
return 0;
}




//Letra M)

#include <stdio.h>
int main(){
    int numero = 1;
    int i;
    for (i = 1; i < 101; i++){
        printf("%d %d %d %d\n", numero, numero * 10, numero * 100, numero * 1000);
        numero ++;
    }
return 0;
}

//Letra N)
#include <stdio.h>
int main(){
    int numero1, numero2;
    scanf("%d%d", &numero1, &numero2);
    if (numero1 > numero2){
        printf("\nO menor número é: %d", numero2);        
    }
    else{
        printf("\nO menor número é: %d", numero1);
    }
return 0;
}

//Letra O)
#include <stdio.h>
int main(){
    int numero1, numero2, numero3;
    scanf("%d%d%d", &numero1,&numero2,&numero3);
    if (numero1 > numero2 > numero3)
        printf("\nO maior número é: %d", numero1);
    if (numero2 > numero1 > numero3)
        printf("\nO maior número é: %d", numero2);
    else
        printf("\nO maior número é: %d", numero3);
return 0;
}
//Letra P)
#include <stdio.h>
int main(){
    int a,b,auxiliar;
    printf ("\nInsira 2 valores inteiros: ");
    scanf ("%d %d", &a,&b);
    printf("\nOs valores Inseridos foram: %d %d", a,b);
    auxiliar = a;
    a = b;
    b = auxiliar;
    printf("\nOs números trocados são: %d %d", a, b);
return 0;
}

//Letra Q)
#include <stdio.h>
int main(){
   int nota1, nota2;
    printf("\nInsira a nota do estudante 1 e 2 consecultivamente:\n "); scanf("%d %d", &nota1, &nota2);
    if(nota1 < nota2){
        printf("\nO primeiro amigo pagará R$25,00 nos 2 ingressos e o segundo amigo entrará gratuitamente\n");}
    else{
        printf("\nO segundo amigo pagará R$25,00 nos 2 ingressos e o primeiro amigo entrará gratuitamente\n");}
return 0;
}

//Letra R)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(void){
    setlocale(LC_ALL,"");
    float a, b, c, delta, x1, x2;
    printf("Insira o coeficiente quadrático: "); scanf("%f", &a);
    printf("Insira o coeficiente linear: "); scanf("%f", &b);
    printf("Insira o coeficiente natural: "); scanf("%f", &c);
    delta = (b*b) - 4 * a * c;
    if(delta < 0){
        printf("\nNão possui raízes\n");}
    else{   
        if(delta == 0){
            x1 = - b / (2 * a);
            printf("\nAmbas as raízes correspondem a: %f, pois delta é zero", x1);}
        else{
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("\nDELTA = %8.2f \nx'   = %8.2f\nx''  = %8.2f\n\n", delta, x1, x2);
        }
    }
    return 0;
}
//Letra S)
#include <stdio.h>
int main(){
  float massa;
  float altura, imc;
  printf("Informe o peso (em kgs):\n");
  scanf("%f", &massa);
  printf("\nInforme a altura (em metros):\n");
  scanf("%f", &altura);
  imc = massa / (altura * altura);
    if (imc < 20)
        printf("abaixo do peso");
    else if ((imc >= 20) && (imc < 25))
        printf("peso normal");
    else if ((imc >= 25) && (imc < 30))
        printf("sobrepeso");
    else if ((imc >= 30) && (imc < 34))
        printf("obeso I");
	else
        printf("Obeso II");
return 0;    
}

//Letra T)
#include<stdio.h>
int main() {
    float lado1, lado2, lado3;
    printf("Digite os 3 lados: ");
    scanf("%f%f%f", &lado1, &lado2, &lado3);
    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        printf("Os 3 lados formam um triangulo!\n");
        if(lado1 == lado2 && lado1 == lado3)
            printf("que é Equilatero\n");
        else
            if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
                printf("que é Isosceles\n");
            else
                printf("que é Escaleno\n");
    }
    else{
        printf("Os 3 lados nao formam um triangulo!\n");}
return 0;    
}





//Letra U)
#include<stdio.h>
int main() {
    
    int graus, quadrantes, voltas, auxiliar;
    
    //Insira a quantidade de graus
    printf("Insira a quantidade de graus: "); scanf("%d", &graus);
    
    quadrantes = graus - 360;
    
    //Sentido horário funcionando
    while(graus > 360){
        auxiliar = quadrantes;
        quadrantes = graus;
        graus = auxiliar;
    }
        if(graus >= 0 && graus <= 89)
            printf("Localizado no quadrante 1");
        else
            if(graus >= 90 && graus <= 179)
                printf("Localizado no quadrante 2");
        else
            if(graus >= 180 && graus <= 269)
                printf("Localizado no quadrante 3");
        else
            if (graus >= 270 && graus <= 359)
                printf("Localizado no quadrante 4");
return 0;    
}

//Letra v) 

#include <stdio.h>

int main(){
    int a,b,c;
    int valor;

    scanf("%d %d %d",&a, &b, &c);
    scanf("%d", &valor);
        
    switch ( valor ){
    case 1 :
    if(a > b && a > c && b > c){
        printf("\nA ordem é: %d %d %d\n", a, b, c);}
    //acb
    if(a > b && a > c && c > b){
        printf("\nA ordem é: %d %d %d\n", a, c, b);}
    //bac
    if(b > a && b > c && a > c){
        printf("\nA ordem é: %d %d %d\n", b, a, c);}
    //bca
    if(b > a && b > c && c > a){
        printf("\nA ordem é: %d %d %d\n", b, c, a);}
    //cba
    if(c > b && c > a && b > a){
        printf("\nA ordem é: %d %d %d\n", c, b, a);}
    //cab
    if(c > a && c > b && a > b){
        printf("\nA ordem é: %d %d %d\n", c, a, b);}
        
    printf("\n");
    break;
    
    case 2 :
    scanf("%d %d %d", &a, &b, &c);
        if (a > c) {
            int tmp = c;
            c = a;
            a = tmp;

        }if (a > b) {
            int tmp = b;
            b = a;
            a = tmp;
        
            
        }if (b > c) {
            int tmp = c;
            c = b;
            b = tmp;
        }
        printf("\nA ordem é: %d %d %d", a, b, c);
        printf("\n");
    break;
    
    case 3 :
         if(a > b && a > c){
        printf("\nO maior é: %d\n", a);}
    
    if(b > a && b > c){
        printf("\nA maior é: %d\n", b);}
    
    if(c > a && c > a){
        printf("\nA maior é: %d\n", c);}
    
    printf("\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
 
return 0;
}

#include <stdio.h>
void dobro(float numero){
    float dobro = numero * 2;
    printf("%.2f", dobro);
}
int main(){
    float numero;
    scanf("%f", &numero);
    dobro (numero);
return 0;    
}


#include <stdio.h>
void maior(float n1, float n2){
    if(n1>n2){
        printf("%.1f", n1);    
    }else{
        printf("%.1f", n2);}
}
int main(){
    float n1, n2;
    scanf("%f %f", &n1, &n2);
    maior(n1, n2);
return 0;    
}

//
#include <stdio.h>
void maior500(float n1){
    if(n1 > 500){
        printf("É maior que 500");    
    }else{
        printf("É menor que 500");}
}
int main(){
    float n1;
    scanf("%f", &n1);
    maior500(n1);
return 0;    
}

//

#include <stdio.h>
void entre_10_50(float i){
    for(int i = 10; i < 51; i++){
        printf("%d\n", i);}
}
int main(){
    float i = 0;
    entre_10_50(i);
return 0;    
}

//

#include <stdio.h>
void entre_x_y(float x, float y){
    if(x > y){
    for(int i = x; x >= y; x--){
        printf("%.2f\n", x);}
    }else{
        for(int i = x; x <= y; x++){
        printf("%.2f\n", x);} 
    }        
}
int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    entre_x_y(x,y);
return 0;    
}

//Funções

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float triplo(float triplo_numero){
    return triplo_numero * 3;
}
int main(){
    float triplo_numero, resultado;
    scanf("%f", &triplo_numero);
    resultado = triplo(triplo_numero);
    printf("%f", resultado);   
return 0;
}

//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float triplo(float triplo_numero){
    return triplo_numero * 3;
}
int main(){
    float triplo_numero, resultado;
    scanf("%f", &triplo_numero);
    resultado = triplo(triplo_numero);
    printf("%f", resultado);   
return 0;
}

//
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int aleatorio(int n1){
    for(int i = 0; i < n1; i++){
        printf("rand():%d\n", rand());
    }
return 0;    
}
int main(){
    int n1;
    scanf("%d", &n1);
    aleatorio(n1);
return 0;
}

//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int aleatorio_quant(int n1){
    printf("Para aumentar as chances do sorteio, insira um número entre 0 e 100\n");
    scanf("%d", &n1);
    int n2;
    
    for(int i = 0; i < 1000; i++){
        n2 = rand () % 100;
            if(n1 != n2){
                printf("%d\n", rand() % 100);
            }else{
                printf("%d", n2);
                break;
        }
    }    
return 0;    
}
int main(){
    int n1;
    aleatorio_quant(n1);
return 0;
}

//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//receba dois números reais e retorne a soma deles

float soma(float n1, float n2){
    return n1 + n2;
}

int main(){
    float n1, n2;
    scanf("%f %f", &n1, &n2);
    
    float soma2 = soma(n1, n2);
    printf("%.2f", soma2);
return 0;
}

//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//receba dois números reais e retorne a subtração do
//primeiro pelo segundo

float sub(float n1, float n2){
    return n1 - n2;
}

int main(){
    float n1, n2;
    scanf("%f %f", &n1, &n2);
    
    float sub2 = sub(n1, n2);
    printf("%.2f", sub2);
return 0;
}

//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//receba dois números reais e retorne a multiplicação 
//deles


float mul(float n1, float n2){
    return n1 * n2;
}

int main(){
    float n1, n2;
    scanf("%f %f", &n1, &n2);
    
    float mul2 = mul(n1, n2);
    printf("%.2f", mul2);
return 0;
}

//
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//receba dois números reais e retorne a divisão do primeiro pelo segundo
float divisao(float n1, float n2){
    return n1 / n2;
}
int main(){
    float n1, n2;
    scanf("%f %f", &n1, &n2);   
    float divisao2 = divisao(n1, n2);
    printf("%.2f", divisao2);
return 0;
}

//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//recebe dois nC:meros reais E um caractere que representa o cC!lculo a
//relizar: '+', '-', '*' ou '/'. FaC'a chamadas para as funC'C5es anteriores
//e retorne o valor correto dependendo da operaC'C#o.


float
divisao (float n1, float n2)
{
  return n1 / n2;
}

float
mul (float n1, float n2)
{
  return n1 * n2;
}


float
sub (float n1, float n2)
{
  return n1 - n2;
}

float
soma (float n1, float n2)
{
  return n1 + n2;
}

int
main ()
{
  char operacao;
  float n1, n2;
  scanf ("%f%f", &n1, &n2);
  while (getchar () != '\n');
  scanf ("%s", &operacao);
  float coringa;

  switch (operacao)
    {

    case '+':
      coringa = soma (n1, n2);
      printf ("%.2f", coringa);
      break;

    case '-':
      coringa = sub(n1, n2);
      printf ("%.2f", coringa);
      break;

    case '*':
        coringa = mul(n1,n2);
        printf("%.2f", coringa);
      break;

    case '/':
        coringa = divisao(n1,n2);
        printf("%.2f", coringa);
      break;

    default:
      printf ("A operaC'C#o C) invC!lida");
    }
  return 0;
}

//

#include <stdio.h>
int main()
{
int i, n;
float c1, c2, c3, c4;
printf("informe um número inteiro: ");
scanf("%d", &n);
printf("\nSOMA \t\tSUB \t\tMULT \t\tDIV\n");
for (i=1; i<=10; i++)
{
c1 = calc(i, n, '+');
c2 = calc(i, n, '-');
c3 = calc(i, n, '*');
c4 = calc(i, n, '/');
printf("%f \t%f \t%f \t%f \n", c1, c2, c3, c4);
}
}

Área de anexos
//Atividade1: Calcular a média de 3 notas, de acordo com alista encaminhada pelo professor utilizando vetor, para cada aluno e armazenar em um vetor para cada nota_1, nota_2 e nota_3 e apresentar o vetor média.
//Atividade 2 - apresentar a situação final do aluno em aprovado nota >= 6, reprovado < 6
//Atividade 3 - (desafio) associar a situação e média ao nome do aluno.

//Inclusão das biliotecas utilizadas
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Função main, responsável por dizer ao compilador onde o algoritmo começa
int main(){

//Banco de dados contendo os nomes dos alunos
    char lista_nomes[41][60];
    strcpy(lista_nomes[1],  "ALAN BRITO DE QUEIROZ");
    strcpy(lista_nomes[2],  "ALGEMIRO MUNHOZ CALISTEL FILHO");
    strcpy(lista_nomes[3],  "ANA FLAVIA DE BRITO FERNANDES");
    strcpy(lista_nomes[4],  "ANA LUIZA ARAUJO TORRES");
    strcpy(lista_nomes[5],  "ANDRE SOUZA DE ARAUJO");
    strcpy(lista_nomes[6],  "ANGELYS KAILSON DE OLIVEIRA CLEMENTINO");
    strcpy(lista_nomes[7],  "ARTHUR RICARDO SANTANA DE SOUZA");
    strcpy(lista_nomes[8],  "BARBARA RIBEIRO LOPES");
    strcpy(lista_nomes[9],  "BRUNO CARLOS DA SILVA BEZERRA");
    strcpy(lista_nomes[10], "BRUNO DOS SANTOS SILVA");
    strcpy(lista_nomes[11],	"BRUNO MATHEUS FALCKETE FONSECA");
    strcpy(lista_nomes[12],	"CAMILA EDUARDA RUIS FONSECA BALDO");
    strcpy(lista_nomes[13],	"CARLOS HENRIQUE DE SOUZA GONÇALVES");
    strcpy(lista_nomes[14],	"CICERO JARIO BARBOSA JUNIOR");
    strcpy(lista_nomes[15],	"CRISTIANO VITORIO DA SILVA");
    strcpy(lista_nomes[16],	"EMANUEL OLIVEIRA BARBOSA DA SILVA");
    strcpy(lista_nomes[17],	"EMILLY VISCOVIN PEREIRA");
    strcpy(lista_nomes[18],	"FABIO BORGES GOMES");
    strcpy(lista_nomes[19],	"GABRIELE PAULA SILVA FERREIRA");
    strcpy(lista_nomes[20],	"GUILHERME BATISTA GOULART");
    strcpy(lista_nomes[21],	"HELIO RODRIGUES DE SOUZA JUNIOR");
    strcpy(lista_nomes[22],	"HUILTON JOSE DOMINGUES NETO");
    strcpy(lista_nomes[23],	"JEANE MARIA ALVES MARTINS");
    strcpy(lista_nomes[24],	"JOAO PEDRO KETELHUT GONZAGA");
    strcpy(lista_nomes[25],	"JOAO VITOR MESSIAS ALVES");
    strcpy(lista_nomes[26],	"KEILA RODRIGUES DOS SANTOS");
    strcpy(lista_nomes[27],	"LIVIA ALVES ROCHA");
    strcpy(lista_nomes[28],	"LUCAS FERREIRA DA SILVA LEAO");
    strcpy(lista_nomes[29],	"LUCAS OLIVEIRA DA SILVA SANTANA");
    strcpy(lista_nomes[30],	"LUIZ GUSTAVO ANDRADE TOSTA");
    strcpy(lista_nomes[31],	"MISAEL HENRIQUE DA SILVA");
    strcpy(lista_nomes[32],	"PABLO VITORINO PANCIERA");
    strcpy(lista_nomes[33],	"PAOLA ALBINO GUALDI");
    strcpy(lista_nomes[34],	"PAULO VINICIUS CRISTALDO ARGUELHO");
    strcpy(lista_nomes[35],	"RARIANE DOS SANTOS PEREIRA");
    strcpy(lista_nomes[36],	"RUDSON RAFAEL ALVES RIBEIRO");
    strcpy(lista_nomes[37],	"SARA EMILIANA DA SILVA MENDONCA");
    strcpy(lista_nomes[38],	"SAVIO SERPA PINTO VIANA");
    strcpy(lista_nomes[39],	"VANNY ALVES PEREIRA DA SILVA");
    strcpy(lista_nomes[40],	"VITOR DOS SANTOS LIMA");
    strcpy(lista_nomes[41],	"VITOR KAUA RODRIGUES DE LIMA");
   
    //Escreva a grade referente as notas
    printf("\n\t\tNOTAS NO SEMESTRE GRADE 1\n\n");
    //Declaração de um vetor com 41 posições para guardar as notas da primeira grade dos alunos
    float nota1[41];
    //Declaração de uma var inteira, que irá servir como um limitador no laço de repetição
    int limitador; 
    //Para um limitador começando em 0, e termininando em 41 adicione mais 1
        for (int limitador = 1; limitador <= 41; limitador++){  
            //Escreva a nota do aluno x na primeira grade
            printf("Nota de ''%s'' na primeira grade:  ",lista_nomes[limitador]);
            //leia a nota inserida
            scanf("%f",&nota1[limitador]);    
                }
    //Escreva espaço
    printf("\n\n");
    //Escreva a grade referente as notas
    printf("\n\t\tNOTAS NO SEMESTRE GRADE 2\n\n");
    //declaração de um vetor com 41 posições para armazenar as notas da segunda grade
    float nota2[41];
    //Começando em 1, enquanto não chegar na posição 41 repita mais 1x
        for (int limitador = 1; limitador <= 41; limitador++){  
            //Escreva a nota do aluno x na segunda grade
            printf("Nota de ''%s'' na segunda grade:  ",lista_nomes[limitador]);
            //Leia as notas
            scanf("%f",&nota2[limitador]);    
              }
    //Escreva um espaço pela estética;
    printf("\n\n");

    //Escreva a grade referente das notas
    printf("\n\t\tNOTAS NO SEMESTRE GRADE 3\n\n");
    //Declaração de um vetor com 41 posições para armazenar as notas da terceira grade
    float nota3[41];
    //Começando em 1, enquanto não chegar na posição 41 repita mais 1x
        for (int limitador = 1; limitador <= 41; limitador++){  
            //Escreva a nota do aluno x na terceira grade
            printf("Nota de ''%s'' na terceira grade:  ",lista_nomes[limitador]);
            //Leia as notas da terceira grade
            scanf("%f",&nota3[limitador]);    
        }
       //Escreva o resultado
        printf("\n\t\t\t\tRESULTADO\n\n");
        //Para um limitador começando em 0, enquanto não chegar em 41 adicione +1
        for(int limitador = 1; limitador <= 41; limitador++){
            //Declaração de uma var que somas as notas e divide por 3
            float media_aritmetica = (nota1[limitador] + nota2[limitador] + nota3[limitador]) / 3; 
            //Se a media do aluno for maior ou igual a 6, então...
            if (media_aritmetica >= 6){
                //Escreva que o aluno foi aprovado e sua média
                printf("\nO aluno %s foi aprovado, e sua média foi: %.2f", lista_nomes[limitador], media_aritmetica);
                }
            //Se não
            else{
                //Escreva que o aluno foi reprovado
                printf("\nO aluno %s foi reprovado, pois sua média foi: %.2f", lista_nomes[limitador], media_aritmetica);
          }
      }
  //Escreva um espaço
  printf("\n\n\n");       

//Fimse
return 0;    
}
1.c
Exibindo 1.c.

//a) 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(){

int idade[50];
int nascimento_cientistas[20];
int salario[30];
float altura_estudantes[1000];
float temperatura_semana[7];
float caldeira_temperaturas[48];
float notas_estudantes[30];
float notas_em_3_provas[25];
int coeficiente_rendimento[25];
int pessoas_familias[20];
int nascimento_pessoas[20];
float consumo_carros[20];
int gastos[1];
float vazao_liquidos[5];
float medidas_pressao[20];
    
return 0;    
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(){
    float posicoes[4];
    for (int i = 0; i < 5; i++){
        scanf("%f", &posicoes[i]);}
    for (int i = 0; i < 5; i++){
        printf("%.2f\n", posicoes[i]);}
return 0;    
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
    float posicoes[4];
    for (int i = 0; i < 5; i++){
        scanf("%f", &posicoes[i]);}
    for (int i = 0; i < 5; i++){
        printf("0%.0f\n", posicoes[i]);}
return 0;    
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
    float vetor[20];
    for(int i = 0; i < 20; i++){
       vetor[i] = rand() % 10;}
    for(int i = 1; i < 20; i++){
        printf("%.2f\n", vetor[i]);}
return 0;    
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(){
    float vetor[20];
    for(int i = 0; i < 20; i++){
       vetor[i] = rand() % 150;}
    for(int i = 1; i < 20; i++){
        printf("%.2f\n", vetor[i]);}
return 0;    
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
    float vetor[20];
    for(int i = 0; i < 20; i++){
       vetor[i] = rand() % 10 + 10;}
    for(int i = 1; i < 20; i++){
        printf("%.2f\n", vetor[i]);}
return 0;    
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
    int vetor[100];
    for(int i = 1; i <= 100; i++){
        vetor[i] = i;}
    for(int i = 0; i < 101; i++){
        printf("%d\n", vetor[i]);}
return 0;    
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
    int vetor[10];
    int counter = 0;
    for(int i = 99; i >= 89; i--){
        vetor[counter] = i;
        counter ++;}       
    for(int i = 0; i <= 10; i++){
        printf("%d\n", vetor[i]);}
return 0;    
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

//O usuário informa um número e executa-se o procedimento referente
//àquele número.

int main(){
    float posicoes[4];
    float vetor[20];
    int vetor10[10];
    int vetor100[100];
    int counter = 0;
    
    int valor;
    scanf("%d", &valor);
    
    switch (valor){
    case 1 :
        for (int i = 0; i < 5; i++){
            scanf("%f", &posicoes[i]);}
        for (int i = 0; i < 5; i++){
            printf("%.2f\n", posicoes[i]);}
    break;
    
    case 2 :
    for (int i = 0; i < 5; i++){
        scanf("%f", &posicoes[i]);}
    for (int i = 0; i < 5; i++){
        printf("0%.0f\n", posicoes[i]);}
    break;
    
    case 3 :
    for(int i = 0; i < 20; i++){
       vetor[i] = rand() % 10;}
    for(int i = 1; i < 20; i++){
        printf("%.2f\n", vetor[i]);}
    break;
    
    case 4 :
    for(int i = 0; i < 20; i++){
       vetor[i] = rand() % 150;}
    for(int i = 1; i < 20; i++){
        printf("%.2f\n", vetor[i]);}
    break;
    
    case 5 :
    for(int i = 0; i < 20; i++){
       vetor[i] = rand() % 10 + 10;}
    for(int i = 1; i < 20; i++){
        printf("%.2f\n", vetor[i]);}
    break;
    
    case 6 :
    for(int i = 1; i <= 100; i++){
        vetor100[i] = i;}
    for(int i = 0; i < 101; i++){
        printf("%d\n", vetor100[i]);}
    break;
    
    case 7 :
    for(int i = 99; i >= 89; i--){
        vetor10[counter] = i;
        counter ++;}       
    for(int i = 0; i <= 10; i++){
        printf("%d\n", vetor10[i]);}
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float vetor[7];
    for(int i=7; i>0;i--){
        scanf("%f", &vetor[i]);}
    for(int i=1; i<8; i++){
        printf("O número armazenado na posição %d é: %.1f\n",i, vetor[i]);}
return 0;
}
//

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float vetor[6];
    int contador;
    float counter;
    int position;
    for (contador = 0; contador<6; contador++){
        printf("Insira a posição e o número preferido respectivamente\n");
        scanf("%d%f",&position, &counter);
        while (getchar() != '\n');
        
        if (position <= 6){
            vetor[position] = counter;
        }else{
            printf("A posição inserida excede 6, tente novamente");
            break;
        }
    }    
    for(int i = 0; i < 6; i++){
        printf("O vetor na posição %d corresponde ao valor: %.2f\n", position, vetor[i+1]);
    }
return 0;
}

//

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int counter;
    int vetor[20];
    for(int i = 0; i<20; i++){
        vetor[i] = rand()%10 + 1;
    }  
    
    for(int counter = 0; counter < 20; counter++){
        printf("O número sorteado na posição: %d é %d\n",counter +1, vetor[counter]);}
    for(int counter = 0; counter < 20; counter++){
        if(vetor[counter] == 7){
            printf("\nA posição %d tem valor 7", counter+1);}
    }
return 0;
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int counter;
    int vetor[20];
    for(int i = 0; i<20; i++){
        vetor[i] = rand()%10 + 1;
    }  
    for(int counter = 0; counter < 20; counter++){
        printf("O número sorteado na posição: %d é %d\n",counter +1, vetor[counter]);}
    for(int counter = 0; counter < 20; counter++){      
        if(vetor[counter] % 2 == 0){
            printf("\nA posição %d tem valor valor par", counter+1);
        }else if (vetor[counter] % 2 != 0){
            printf("\nA posição %d tem valor ímpar", counter + 1);
        }
    }
return 0;
}

//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int valor;
    float vetor[7];
    float vetor6[6];
    int vetor20[20];
    int vetor201[20];
    int contador;
    float counter;
    int position;
    int counter2;
    
    printf("Insira o número do procedimento\n");
    scanf("%d", &valor);
    
    switch(valor){
        
   case 1:
    for(int i=7; i>0;i--){
        scanf("%f", &vetor[i]);}
    for(int i=1; i<8; i++){
        printf("O número armazenado na posição %d é: %.1f\n",i, vetor[i]);}
   break;

   case 2:
    for (contador = 0; contador<6; contador++){
        printf("Insira a posição e o número preferido respectivamente\n");
        scanf("%d%f",&position, &counter);
        while (getchar() != '\n');
        
        if (position <= 6){
            vetor6[position] = counter;
        }else{
            printf("A posição inserida excede 6, tente novamente");
            break;
        }
    }    
    for(int i = 0; i < 6; i++){
        printf("O vetor na posição %d corresponde ao valor: %.2f\n", position, vetor6[i+1]);
    }
   break;
   
   case 3:
 
    for(int i = 0; i<20; i++){
        vetor[i] = rand()%10 + 1;
    }  
    
    for(int counter2 = 0; counter2 < 20; counter2++){
        printf("O número sorteado na posição: %d é %d\n",counter2 +1, vetor20[counter2]);}
    for(int counter2 = 0; counter2 < 20; counter2++){
        if(vetor20[counter2] == 7){
            printf("\nA posição %d tem valor 7", counter2+1);}
    }
   break;
   
   case 4:
    for(int i = 0; i<20; i++){
        vetor201[i] = rand()%10 + 1;
    }  
    for(int counter2 = 0; counter2 < 20; counter2++){
        printf("O número sorteado na posição: %d é %d\n",counter2 +1, vetor201[counter2]);}
    for(int counter2 = 0; counter2 < 20; counter2++){      
        if(vetor201[counter2] % 2 == 0){
            printf("\nA posição %d tem valor valor par", counter2+1);
        }else if (vetor201[counter2] % 2 != 0){
            printf("\nA posição %d tem valor ímpar", counter2 + 1);
        }
    }
   break;
}
    
return 0;
}

//um()

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    int v[15];
    int v1[15];
    int v2[15];
    int a = 0;
    int b = 0;
    int i;
    
    for (i = 0; i < 15; i++){
        v[i] = rand() % 20 + 1;
    }
    
    for (i = 0; i < 15; i++){
        if (v[i] > 14){
            v1[a++] = v[i];
        }else{
            v2[b++] = v[i];
        }
    }
    
    printf("\nValores presentes no vetor 1: ");
    for (i = 0; i < 15; i++){
        printf("[%d]", v[i]);
    }
    
    printf("\nValores presentes no vetor 2: ");
    for (i = 0; i < a; i++){
        printf("[%d]", v1[i]);
    }
    
    printf("\nValores presentes no vetor 3: ");
    for (i = 0; i < b; i++){
        printf("[%d]", v2[i]);
    }
    
return 0;    
}

// dois()

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    int v[15];
    int v1[15];
    int v2[15];
    int a = 0;
    int b = 0;
    int i;
    
    for (i = 0; i < 15; i++){
        v[i] = rand() % 20 + 1;
    }
    
    for (i = 0; i < 15; i++){
        if (v[i] > 12){
            v1[a++] = v[i];
        }else{
            v2[b++] = v[i];
        }
    }
    
    printf("\nValores presentes no vetor 1: ");
    for (i = 0; i < 15; i++){
        printf("[%d]", v[i]);
    }
    
    printf("\nValores presentes no vetor 2: ");
    for (i = 0; i < a; i++){
        printf("[%d]", v1[i]);
    }
    
    printf("\nValores presentes no vetor 3: ");
    for (i = 0; i < b; i++){
        printf("[%d]", v2[i]);
    }
    
return 0;    
}

//tres()

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
    int vetor_atividade3[8];
    int soma = 0;
    int soma2 = 0;
    for (int i = 0; i < 8; i++){
        scanf("%d", &vetor_atividade3[i]);}
    int x, y;
    scanf("%d %d", &x, &y);
    
    for (int i = 0; i < x; i++){
        soma = soma + vetor_atividade3[i];}
    
    for (int i = 0; i < y; i++){
        soma2 = soma2 + vetor_atividade3[i];}
    
    printf("%d %d", soma, soma2);
return 0;    
}

// quatro()

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    int tam, x;
    scanf("%d %d", &tam, &x);
    
    int vetor[tam];
    
    for (int i = 0; i < tam; i++ ){
        if (vetor[i] == x){
            printf("Aparece o elemento %d na posição: [%d]\n\n", x, i+1);
        }else{
            printf("Na posição %d não aparece o elemento: [%d]\n", i+1, x);
        }
    }
return 0;    
}

//cinco ()

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    int v[15];
    
    for (int i = 0; i < 15; i++){
        v[i] = rand()%30 + 20;}
        
    for (int i = 0; i < 15; i++) {
        printf("[%d] = |%d|\n", i + 1, v[i]);}
return 0;    
}

// seis()

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    int v[10];
    
    for (int i = 0; i < 10; i++){
        v[i] = rand()%5 + 1;
    }
    printf("Números sorteados aleatoriamente:\n\n ");
    for (int i = 0; i < 10; i++){
        printf("|%d|\t", v[i]);
    }
    puts("\n");
    printf("\tv\t1\t2\t3\t4\t5\n");
    
    for (int i = 0; i < 10; i++){
        if(v[i] == 1){
        printf("[%d]\t\tX\n", v[i]);
    }if (v[i] == 2){
        printf("[%d]\t\t\tX\n", v[i]);
    }if (v[i] == 3){
        printf("[%d]\t\t\t\tX\n", v[i]);
    }if (v[i] == 4){
        printf("[%d]\t\t\t\t\tX\n", v[i]);
    }else if (v[i] == 5){
        printf("[%d]\t\t\t\t\t\tX\n", v[i]);
    }
}
return 0;    
}

// sete()

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    int v[10];
    int um = 0;
    int dois = 0;
    int tres = 0;
    int quatro = 0;
    int cinco = 0;
    for (int i = 0; i < 10; i++){
        v[i] = rand()%5 + 1;
    }
    printf("Números sorteados aleatoriamente:\n\n ");
    for (int i = 0; i < 10; i++){
        printf("|%d|\t", v[i]);
    }
    puts("\n");
    printf("\tv\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", v[0],v[1],v[2],v[3],v[4],v[5],v[6],v[7],v[8],v[9]);
    
    for (int i = 0; i < 10; i++){
        if (v[i] == 1){
            um++;
        }else if(v[i] == 2){
            dois++;
        }else if(v[i] == 3){
            tres++;
        }else if(v[i] == 4){
            quatro++;
        }else if(v[i] == 5){
            cinco++;
        }
    }
    
    puts("\n");
    
    if (um == 1){
        printf("[1]\tX");
    }else if(um == 2){
        printf("[1]\tX\tX");
    }else if(um == 3){
        printf("[1]\tX\tX\tX");
    }else if(um == 4){
        printf("[1]\tX\tX\tX\tX");
    }else if(um == 5){
        printf("[1]\tX\tX\tX\tX\tX");
    }
    
    printf("\n");
    
    if (dois == 1){
        printf("[2]\tX");
    }else if(dois == 2){
        printf("[2]\tX\tX");
    }else if(dois == 3){
        printf("[2]\tX\tX\tX");
    }else if(dois == 4){
        printf("[2]\tX\tX\tX\tX");
    }else if(dois == 5){
        printf("[2]\tX\tX\tX\tX\tX");
    }
    
    printf("\n");
    
    if (tres == 1){
        printf("[3]\tX");
    }else if(tres == 2){
        printf("[3]\tX\tX");
    }else if(tres == 3){
        printf("[3]\tX\tX\tX");
    }else if(tres == 4){
        printf("[3]\tX\tX\tX\tX");
    }else if(tres == 5){
        printf("[3]\tX\tX\tX\tX\tX");
    }
    
    printf("\n");
    
    if (quatro == 1){
        printf("[4]\tX");
    }else if(quatro == 2){
        printf("[4]\tX\tX");
    }else if(quatro == 3){
        printf("[4]\tX\tX\tX");
    }else if(quatro == 4){
        printf("[4]\tX\tX\tX\tX");
    }else if(quatro == 5){
        printf("[4]\tX\tX\tX\tX\tX");
    }
    
    printf("\n");
    
    if (cinco == 1){
        printf("[5]\tX");
    }else if(cinco == 2){
        printf("[5]\tX\tX");
    }else if(cinco == 3){
        printf("[5]\tX\tX\tX");
    }else if(cinco == 4){
        printf("[5]\tX\tX\tX\tX");
    }else if(cinco == 5){
        printf("[5]\tX\tX\tX\tX\tX");
    }
return 0;    
}

// oito ()

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
    int v[10];
    //ok
    for (int i = 0; i < 10; i++){
        v[i] = rand()%5 + 1;}
    //ok
    for (int i = 0; i < 10; i++){
            printf("|%d| ", v[i]);}
    //ok    
    char v2[5];
    //ok
    printf("\n");
    //
    for (int i = 0; i < 5; i++){
        scanf("%c", &v2[i]);
    }
    
    for (int i = 0; i < 10; i++){
       
        if (v[i] == 1){
            printf("%c", v2[0]);
        }else if (v[i] == 2){
            printf("%c", v2[1]);
        }else if (v[i] == 3){
            printf("%c", v2[2]);
        }else if (v[i] == 4){
            printf("%c", v2[3]);
        }else if (v[i] == 5){
            printf("%c", v2[4]);
        }
    }
           
return 0;    
}
//um()

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
    int matriz [3][4]; 
    int aux = 0;
    int aux2 = 0;
    
    for(int i = 0; i < 3; i++){
        for(int i = 0; i < 4; i++){
        scanf("%d", &matriz[aux][i]);
    }
    aux ++;
    }
    
    
    
    for(int i = 0; i < 3; i++){
        printf("\n Os itens da %d coluna é:   ", i+1);
        for(int i = 0; i < 4; i++){
        printf("%d\t", matriz[aux2][i]);
    }
    printf("\n");
    aux2 ++;
    }
    

return 0;    
}

//dois ()

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main(){
    int matriz [2][4]; 
    int negativo = 0;
    int negativo2 = 0;
    float media_linha1;
    float media_linha2;

    for(int i = 0; i < 2; i++){
        for(int counter = 0; counter < 4; counter++){
        scanf("%d", &matriz[i][counter]);
        }
    }
    
    for(int i = 0; i < 4; i++){
        if(matriz[0][i] < 0){
            negativo++;
        }
    }
    
    for(int i = 0; i < 4; i++){
        if(matriz[1][i] < 0){
            negativo2++;
        }
    }

    
    media_linha1 = (matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[0][3]) / 4;
    media_linha2 = (matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[1][3]) / 4;
        
    float media_coluna =  (matriz[0][0] + matriz[1][0]);
    float media_coluna2 = (matriz[0][1] + matriz[1][1]);
    float media_coluna3 = (matriz[0][2] + matriz[1][2]);
    float media_coluna4 = (matriz[0][3] + matriz[1][3]);
    
    printf("\n\nNa primeira linha há %d números negativos", negativo);
    printf("\nNa segunda linha há %d números negativos\n\n", negativo2);
    
    printf("Na primeira coluna a média é: %.2f\n", media_coluna);
    printf("Na segunda coluna a média é: %.2f\n", media_coluna2);
    printf("Na terceira coluna a média é: %.2f\n", media_coluna3);
    printf("Na quarta coluna a média é: %.2f\n\n", media_coluna4);
    
    printf("Na primeira linha a média é: %.2f\n", media_linha1);
    printf("Na segunda linha a média é: %.2f", media_linha2);
return 0;    
}


//tres ()

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int vetor[15];
    int matriz[3][5];

    for (int i = 0; i < 15; i++){
        scanf("%d", &vetor[i]);    
    }
   
    for (int counter = 0; counter < 3; counter++){
        for (int i = 0; i < 5; i++){
        matriz[counter][i] = vetor[(counter * 5) + i];}
    }
   
    for(int counter = 0; counter < 3; counter++){
            printf("\n");
        for (int i = 0; i < 5; i++){
            printf("%d\t", matriz[counter][i]);}
    }
return 0;
}

// quatro()

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //declaração de variaveis
   float notas[15][5];
   int posicao = 1;
   float media = 0;
   int aprovados = 0;
   int reprovados = 0;

    //Salvando notas dos alunos
    for (int counter = 0; counter < 15; counter ++){
        for (int i = 0; i < 5; i++){
           notas [counter][i] = rand()%101 / 10;}
    }   
    
    printf("----------------------------------------------------------------\n");
    printf("#\tNota1\tNota2\tNota3\tNota4\tNota5\tMédia\tSituação\n");
    printf("----------------------------------------------------------------\n");
    //printf das notas
    for (int counter = 0; counter < 15; counter ++){
        printf("\n");
        printf("%d\t", posicao);
        posicao++;
    
    for (int i = 0; i < 5; i++){
       printf("%.1f\t", notas[counter][i]);
        media = media + notas[counter][i];}
        media = media / 5;
    
    if (media >= 5){
        printf("%.2f\tAprovado", media);
        aprovados ++;
    }else if(media < 5){
        printf("%.2f\tReprovado", media);
        reprovados++;
    }
    
    media = 0;    
    } 
    
    printf("\n--------------------------------------------------------------\n");
    
    printf("Estudantes: %d\n", posicao);
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    
    printf("\n--------------------------------------------------------------\n");
       
return 0;
}

// cinco ()

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    
    int m1[20][4];
    int m2[20][4];
    int r[20][4];
    
    //Números aleatorios nas matrizes
    
    for (int linha = 0; linha < 20; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
                m1[linha][coluna] = rand() % 10 + 1;
                m2[linha][coluna] = rand() % 10 + 1;
        }
    }
    
        printf("M1\n");
       
        for (int linha = 0; linha < 20; linha++){
            for (int coluna = 0; coluna < 4; coluna++){
                printf("%d\t", m1[linha][coluna]);}
            printf("\n");
        }
        
        printf("\n\n");
        printf("M2\n");
        
        for (int linha = 0; linha < 20; linha++){
            for (int coluna = 0; coluna < 4; coluna++){
                printf("%d\t", m2[linha][coluna]);}
            printf("\n");
        }
            
    
    printf("\n");
    
    printf("SOMA\n\n");
    
        for (int linha = 0; linha < 20; linha++){
            for (int coluna = 0; coluna < 4; coluna++){
                printf("%d + %d\t", m1[linha][coluna], m2[linha][coluna]);}
        printf("\n");
    }
    
    printf("\n");
    
    printf("R\n\n");
    
    for (int linha = 0; linha < 20; linha++){
            for (int coluna = 0; coluna < 4; coluna++){
                printf("%d\t", m1[linha][coluna] + m2[linha][coluna]);}
        printf("\n");
    }
    
    
return 0;
}

//1 usando while: Escrever um algoritmo que escreve todos os inteiros pares entre 0 e 1 milhão;

//Inclusão das bibliotecas utilizada
#include<stdio.h>
//Função main, responsável por dizer ao compilador onde o algoritmo começa
int main(){
    //Declaração de variaveis
    int pares = 1;
    //Enquanto a var que começa em 1 não ser igual a 1 milhão...
    while (pares <= 1000000){
        //E com a condição de que o numero seja par
        if (pares % 2 == 0){
            //Escreva o número
            printf("%i\n", pares);
      }
      //adicione mais para continuar o loop
      pares++;
    }
//fimse
return 0;
}
//Atividade 2 utilizando WHILE: Escreva um algoritmo que mostre todos os números ímpares entre 1 e - 1 milhão

//Inclusão das bibliotecas utilizadas
#include<stdio.h>
//Função main, responsável por dizer ao compilador onde começa o algoritmo
int main(){ 
    // Declaração das variaveis
    int impar = -1000000;
    //Enquanto a var impar for menor que - 1 milhão
    while (impar <= 1){
        //E se o número for impar
        if (impar % 2 != 0){
            //Escreva o número
            printf("%i\n", impar);
        }
    //adicione 1 para prosseguir o loop
    impar++;
    }
//fimse    
return 0;
}
//Atividade 3 utilizando while: Escreva um algoritmo que mostre na tela todos os números divisiveis 
//por 23 entre 0 e 1000;

//Inclusão da biblioteca utilizada
#include<stdio.h>
//Função main, responsável por dizer ao compilador onde o algoritmo começa
int main(){
    //Declaração de variaveis
    int divisor = 1;
    //Enquanto o divisor for menor que 1000
    while (divisor < 100){
        // E sendo divisivel por 23
        if (divisor % 23 == 0){
            //Escreva o numero
            printf("%i\n", divisor);
          }
    //Adicione mais um para um continuar o loop    
    divisor++;
  }
//fimse 
return 0;    
}
//Atividade 4: Escreva um algoritmo que mostre na tela todos os número primos entre 0 e 100;

//Inclusão da biblioteca utilizada
#include<stdio.h>
//Função main, responsável por dizer ao compilador onde começa o algoritmo
int main(){
    //Um número primo é definido por um algorimo inteiro que só é divisivel por 1 e por ele mesmo
    //De todos os modos possíveis de demonstração, o mais fácil são de eliminar número que são divisiveis
    //por 2, por 3, por 5 e por 7;
    
    //Escreva os divisores excludentes para que apareçam;
    printf("2\n3\n5\n7\n");
    //declaração de uma variavel inteira que começando em 6
    int primos = 6;
    //Enquanto a var for menor que 100
    while (primos <= 100){
        //E se não for divisiveis pelos seguintes números
        if (primos % 2 != 0 && primos % 3 != 0 && primos % 5 != 0 && primos % 7 != 0){
            //Escreva os números primos
            printf("%i\n", primos);
            }
        //Adicione 1 para manter o loop
        primos++;
      }
//fimse
return 0;    
}
//Atividade 4: Escreva um algoritmo que mostre na tela todos os número primos entre 0 e 100;

//Inclusão da biblioteca utilizada
#include<stdio.h>
//Função main, responsável por dizer ao compilador onde começa o algoritmo
int main(){
    //Um número primo é definido por um algorimo inteiro que só é divisivel por 1 e por ele mesmo
    //De todos os modos possíveis de demonstração, o mais fácil são de eliminar número que são divisiveis
    //por 2, por 3, por 5 e por 7;
    
    //Escreva os divisores excludentes para que apareçam;
    printf("2\n3\n5\n7\n");
    //declaração de uma variavel inteira que começando em 6
    int primos = 6;
    //Enquanto a var for menor que 100
    while (primos <= 100){
        //E se não for divisiveis pelos seguintes números
        if (primos % 2 != 0 && primos % 3 != 0 && primos % 5 != 0 && primos % 7 != 0){
            //Escreva os números primos
            printf("%i\n", primos);
            }
        //Adicione 1 para manter o loop
        primos++;
      }
//fimse
return 0;    
}

//Atividade 1: Escreva um algoritmo que leia os valores valorA, valorB, valorC e imprima se a soma de 
//valorA +valorB é maior que valorC.

//Inclusão da biblioteca utilada no programa
#include<stdio.h>
//Função main, responsavel por dizer ao compilador onde o programa começa
void main(){
 //declaração de váriaveis
 float a, b, c;
 //Escreva insira 3 valores
 printf("Insira 3 valores: \n");
 //escreva insira o primeiro valor
 printf("\nInsira o primeiro valor: ");
 //leia o primeiro valor
 scanf("%f", &a);
 //escreva o segundo valor
 printf("\nInsira um segundo número: ");
 //leia o segundo valor
 scanf("%f", &b);
 //escreva o terceiro valor
 printf("\nInsira outro número: ");
 //leia o terceiro valor
 scanf("%f", &c);
 //se a + b > C então
 if(a + b > c)
 //escreva C é menor que a+b
 printf("''C'' é menor que a + b");
 //se não
 else
 //escreva C é maior que a+B
 printf("''C'' é maior que a + b");
//fimse
}

//Atividade 2: Escrevam um algoritmo que determine se um numero inteiro é positivo, negativo ou nulo.

//inclusão da biblioteca utilizada
#include<stdio.h>
//função main, responsavel por dizer ao compilador onde começa o algoritmo
void main(){
 //declaração de váriaveis
 float numero1;
 //escreva um número
 printf("Insira um número: ");
 //leia o numero
 scanf("%f", &numero1);
 //se o numero for > 0
 if(numero1 > 0)
 //escreva o numero inserido é positivo
 printf("\nO número inserido é positivo");
 //se o numero inserido for = 0
 if(numero1 == 0)
 //escreva o numero inserido é nulo
 printf("\nO número inserido é nulo");
 //se o numero 1 < 0
 if(numero1 < 0)
 //escreva o numero inserido é negativo
 printf("O número inserido é negativo");
//fimse
}

//Atividade 4: Escreva um algoritmo que encontre o dobro de um número se ele for positivo e o triplo caso seja
//negativo.

//Inclusão da biblioteca que será utilizado no código
#include<stdio.h>
//Função main, responsável por demonstrar ao compilador onde o algoritmo começa
int main()
{
 //Declaração de váriaveis
 float numero1, dobro, triplo;
 //Escreva um número
 printf("Insira um número: ");
 //Leia um número
 scanf("%f", &numero1);
 // Dobro é igual ao número * 2
 dobro == numero1 * 2;
 // Triplo = ao numero * 3
 triplo == numero1 * 3;
 //Se o numero for maior que 0
 if(numero1 > 0)
 //escreva o dobro
 printf("%f", &dobro);
 //Se o numero for menor que 0
 if(numero1 < 0)
 //Insira o triplo
 printf("%f", &triplo);
//fimse
return 0;
}

//Atividade 4: Escreva um algoritmo que encontre o dobro de um número se ele for positivo e o triplo caso seja
//negativo.

//Inclusão da biblioteca que será utilizado no código
#include<stdio.h>
//Função main, responsável por demonstrar ao compilador onde o algoritmo começa
int main()
{
 //Declaração de váriaveis
 float numero1, dobro, triplo;
 //Escreva um número
 printf("Insira um número: ");
 //Leia um número
 scanf("%f", &numero1);
 // Dobro é igual ao número * 2
 dobro == numero1 * 2;
 // Triplo = ao numero * 3
 triplo == numero1 * 3;
 //Se o numero for maior que 0
 if(numero1 > 0)
 //escreva o dobro
 printf("%f", &dobro);
 //Se o numero for menor que 0
 if(numero1 < 0)
 //Insira o triplo
 printf("%f", &triplo);
//fimse
return 0;
}
