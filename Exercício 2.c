##Exercício 2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, num1, num2;

do {
    printf("\n1 - Soma\n2"Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n\n");
    scanf("%d", &opcao);

    if(opcao > 0 && opcao < 5){
        printf("Digite dois valores: ");
        scanf("%d%d",&num1, &num2):
    }

    switch(opcao) {
    case 0:
        printf("Saindo...\n");
        break;
    case 1:
        printf("Soma: %d\n", num1 + num2);
        break;
    case 2:
        printf("Subtracao: %d\n", num1 - num2);
    case 3:
        printf("Multiplicacao: %d\n", num1 * nm2);
    case 4:
        while(num2 == 0) {
            printf("Nao existe divisao por zero!\nDigite outro valor: ");
            scanf("%d", &num2);
        }
        printf("Divisao; %d\n", num1 / num2);
        break;
    default:
        printf(Opcao inválida.\nDigite outra opcao; ");  
    } 
  } while(opcao != 0)
}

//Parte 2
1 - Inicio
2  - Variaveis
     salario, desconto tipo floap
     Exibir("Digite o salario:")
     Leia(salario)
     se (salario*0.11) > 318.20
         desconto 318.20
    senao
        desconto = (salario*0.11)
    fimse
    exibir("O desconto e:", desconto)

    salario = float(input("Digite o salario:"))
    if salario*0.11 > 318.20
else:
    desconto = salario * 0.11
print("O desconto e:",desconto)

Digite o salario: 1000
o desconto é: 110


//Parte 3
1 - Inicio
// funcao inicio(){
   real valorReal, valorDolar, valorEuro // variaveis do tipo real
   // valor de referência $1 = R$5,20

   escreva("Digite o valor a ser convertido: R$")
   leia(valorReal)

   valorDolar + valorReal / 5.2

   escreva("\n\nValor convertido $", valorDolar, "\n\n")
  }
}

//Parte 4
funcao inicio()
{
    inteiro idade
     
    escreva("Informe sua idade:")
    leia(idade)

    se(idade >= 5 e idade <= 7)

    escreva("Sua categoria é: INFANTIL A")

    senao se(idade >= 8 e idade <= 10) {
        escreva("Sua categoria é; INFANTIL B")

    }senao se(idade>= 11 e idade <= 13){

        escreva("Sua categorian é:JUVENIL A")

    }senao se(idade >= 14 e)