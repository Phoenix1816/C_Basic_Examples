#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    char op;

    printf("L�tfen operatorunuzu giriniz (+,-): ");
    scanf(" %c", &op); // Bo�luk karakteri, �nceki girdiyi okumak i�in

    printf("L�tfen iki adet say� giriniz: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("��lem yap�lamaz.\n");
    } else {
        printf("1/%d %c 1/%d\n", a, op, b);
        switch (op) {
            case '+':
                printf("%d/%d\n", a + b, a * b);
                break;
            case '-':
                printf("%d/%d\n", a - b, a * b);
                break;
            default:
                printf("Yanl�� operator girdiniz.\n");
        }
    }

    return 0;
}
