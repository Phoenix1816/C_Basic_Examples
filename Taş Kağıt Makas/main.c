#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char choice[2]; // Karakter dizileri için boyut belirtildi
    char choiceAI0[2]; // Karakter dizileri için boyut belirtildi
    printf("Choose an option (t-k-m): ");
    scanf(" %c", &choice[0]); // Boþluk karakterini atlamak için bir boþluk býrakýldý
    choice[1] = '\0'; // String sonlandýrýcýsý eklendi

    srand(time(NULL)); // Rastgele sayý üretmek için seed belirlendi
    int choiceAI = rand() % 3 + 1; // 1, 2 veya 3 üretecek þekilde düzeltildi
    if (choiceAI == 1) {
        choiceAI0[0] = 't'; // Karakter dizilerine tek karakter atamak için düzeltildi
    } else if (choiceAI == 2) {
        choiceAI0[0] = 'k'; // Karakter dizilerine tek karakter atamak için düzeltildi
    } else {
        choiceAI0[0] = 'm'; // Karakter dizilerine tek karakter atamak için düzeltildi
    }
    choiceAI0[1] = '\0'; // String sonlandýrýcýsý eklendi

    if (choice[0] == choiceAI0[0]) {
        printf("Draw\n");
    } else if ((choice[0] == 't' && choiceAI0[0] == 'm') || (choice[0] == 'm' && choiceAI0[0] == 'k') || (choice[0] == 'k' && choiceAI0[0] == 't')) {
        printf("You won\n");
    } else {
        printf("You lost\n");
    }

    return 0;
}

