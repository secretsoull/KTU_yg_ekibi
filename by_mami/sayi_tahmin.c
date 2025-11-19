#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rastgeleSayi, tahmin;

    srand(time(NULL)); 
    
    rastgeleSayi = (rand() % 20) + 1; 

    printf("1-20 arasinda bir sayi tuttum. Tahmin et!\n");

    do {
        printf("Tahmininiz: ");
        scanf("%d", &tahmin);

        if (tahmin > rastgeleSayi) {
            printf("Daha kucuk!\n");
        } else if (tahmin < rastgeleSayi) {
            printf("Daha buyuk!\n");
        }

    } while (tahmin != rastgeleSayi);

    printf("Tebrikler! Dogru sayi %d idi.\n", rastgeleSayi);

    return 0;
}