#include <stdio.h>

int main()
{
    char op;
    double num1, num2;

    printf("Escolha a operacao (+, -, *, /)");
    scanf(" %c", &op);

    printf("Digite dois numeros");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("Resultado: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %.2lf\n", num1 / num2);
            else
                printf("Erro: divisao por zero!\n");
            break;
        default:
            printf("Operação invalida!\n");
    }
    
    return 0;
}