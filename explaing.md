🧮 Explicação da Calculadora em C

Biblioteca

#include <stdio.h>


– Permite usar printf e scanf (escrever e ler no ecrã).

Função principal

int main() {


– Todo programa em C começa a partir do main().

Declaração de variáveis

char op;
double num1, num2;


– op guarda o símbolo da operação (+, -, *, /).
– num1 e num2 guardam os números que o utilizador digita.

Entrada de dados

printf("Escolha a operação (+, -, *, /): ");
scanf(" %c", &op);
printf("Digite dois números: ");
scanf("%lf %lf", &num1, &num2);


– scanf(" %c", &op) lê um caractere (a operação).
– scanf("%lf %lf", &num1, &num2) lê dois números decimais (double).

Decisão com switch

switch (op) {


– Analisa a operação escolhida e executa o caso correspondente.

Casos

case '+': printf("Resultado: %.2lf\n", num1 + num2); break;
case '-': printf("Resultado: %.2lf\n", num1 - num2); break;
case '*': printf("Resultado: %.2lf\n", num1 * num2); break;


– Cada case corresponde a uma operação.
– break impede que continue para os próximos casos.

Divisão com verificação

case '/':
    if (num2 != 0)
        printf("Resultado: %.2lf\n", num1 / num2);
    else
        printf("Erro: divisão por zero!\n");
    break;


– Antes de dividir, garante que o divisor não é zero.

Caso inválido

default: printf("Operação inválida!\n");


– Executa se o utilizador digitar símbolo errado.

Fim do programa

return 0;
}


– Indica que o programa terminou corretamente.

👉 Resumão:

O programa pede operação e números.

Usa switch para decidir qual conta fazer.

Imprime o resultado ou avisa erro (divisão por zero / operação inválida).