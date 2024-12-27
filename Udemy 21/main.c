#include <stdio.h>

int main() {
    int n;
    printf("L�tfen tek bir say� giriniz: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("L�tfen tek bir say� giriniz.\n");
        return 1;
    }

    int matrix[n][n];

    // Dizinin i�ini doldur
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = (i + 1) * 10 + (j + 1); // Ortadaki rakamlar
            } else if (i == n / 2 || j == n / 2) {
                matrix[i][j] = (i + 1) * 100 + (j + 1); // Ortadaki sat�r ve s�tunlar
            } else {
                matrix[i][j] = (i + 1) * 1000 + (j + 1); // Di�er rakamlar
            }
        }
    }

    // Matrisi yazd�r
    printf("Olu�turulan dizi:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
