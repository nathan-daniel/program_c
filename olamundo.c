#include <stdio.h>

int main(){
    int idade;
    int quantidade = 1;
    float altura = 1.80;
    char letra = 'a';
    char nome[20] = "Nathan";
    
    printf("Qual o seu nome? ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("olá mundo, você sabe que o %s estuda programação e ele tem %d anos?\n", nome, idade);

    printf(" A altura do %s é: %.2f\n", nome, altura);
   
    }
