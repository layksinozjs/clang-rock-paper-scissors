#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int userChoice();
int computerChoice();
void checkWin(int user, int computer);

int main() {
    srand(time(NULL));

    printf("TAŞ - KAĞIT - MAKAS OYUNU\n");

    int user = userChoice();
    int computer = computerChoice();

    const char* secimler[] = {"Taş", "Kağıt", "Makas"};
    printf("Siz: %s\n", secimler[user]);
    printf("Bilgisayar: %s\n", secimler[computer]);

    checkWin(user, computer);
    
    printf("%d", computer);

    return 0;
}

int userChoice() {
    int choice;
    do {
        printf("Seçiminizi yapın (1 = Taş, 2 = Kağıt, 3 = Makas): ");
        scanf("%d", &choice);
        if (choice < 0 || choice > 3) {
            printf("Geçersiz seçim. Lütfen tekrar deneyin.\n");
        }
    } while (choice < 0 || choice > 3);
    return choice;
}

int computerChoice() {
    return rand() % 3 + 1; // 0, 1 veya 2 döndürür
}

void checkWin(int user, int computer) {
    switch (user) {
        case 1: // Taş
            switch (computer) {
                case 1: printf("Berabere!\n"); break;
                case 2: printf("Bilgisayar kazandı!\n"); break;
                case 3: printf("Kazandınız!\n"); break;
            }
            break;

        case 2: // Kağıt
            switch (computer) {
                case 1: printf("Kazandınız!\n"); break;
                case 2: printf("Berabere!\n"); break;
                case 3: printf("Bilgisayar kazandı!\n"); break;
            }
            break;

        case 3: // Makas
            switch (computer) {
                case 1: printf("Bilgisayar kazandı!\n"); break;
                case 2: printf("Kazandınız!\n"); break;
                case 3: printf("Berabere!\n"); break;
            }
            break;

        default:
            printf("Hatalı kullanıcı seçimi!\n");
    }
}
