#include <stdio.h>

int main(void)
{
    const int num1 = 16;
    const int num2 = 3;
    const char op = '+';
    int resultat;

    switch (op) {
    case '+':
        resultat = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, resultat);
        break;
    case '-':
        resultat = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, resultat);
        break;
    case '*':
        resultat = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, resultat);
        break;
    case '/':
        if (num2 == 0) {
            fprintf(stderr, "Division par zero impossible.\n");
            return 1;
        }
        resultat = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, resultat);
        break;
    case '%':
        if (num2 == 0) {
            fprintf(stderr, "Modulo par zero impossible.\n");
            return 1;
        }
        resultat = num1 % num2;
        printf("%d %% %d = %d\n", num1, num2, resultat);
        break;
    case '&':
        resultat = num1 & num2;
        printf("%d & %d = %d\n", num1, num2, resultat);
        break;
    case '|':
        resultat = num1 | num2;
        printf("%d | %d = %d\n", num1, num2, resultat);
        break;
    case '~':
        printf("~%d = %d\n", num1, ~num1);
        break;
    default:
        fprintf(stderr, "Operateur inconnu: %c\n", op);
        return 1;
    }

    return 0;
}
