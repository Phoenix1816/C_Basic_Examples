#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    char op;

    printf("Lütfen operatorunuzu giriniz (+,-): ");
    scanf(" %c", &op); // Boþluk karakteri, önceki girdiyi okumak için

    printf("Lütfen iki adet sayý giriniz: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("Ýþlem yapýlamaz.\n");
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
                printf("Yanlýþ operator girdiniz.\n");
        }
    }

    return 0;
}
