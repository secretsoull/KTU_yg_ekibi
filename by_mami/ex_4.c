// basamak toplamı bulma

#include <stdio.h>

int main(){

    int sayi, toplam = 0;

    printf("bir sayi giriniz:  ");
    scanf("%d", &sayi);

    while (sayi > 0){
        toplam += sayi % 10; // sayinin son basamağını alır ve toplama ekler
        sayi /= 10; // sayinin son basamağını atar
    }
    printf("basamak toplami = %d", toplam);

    return 0;
}