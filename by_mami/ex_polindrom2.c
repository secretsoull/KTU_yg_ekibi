// polindrom with do while

#include <stdio.h>

int main(){

    int sayi, orjinal, basamak, ters = 0;

    printf("bir sayi giriniz:  ");
    scanf("%d", &sayi);

    orjinal = sayi;

    do {
        basamak = sayi % 10;
        ters = ters * 10 + basamak;
        sayi /= 10;
    }
    while (sayi > 0);

    if (orjinal == ters){
        printf("%d polindrom sayidir\n", orjinal);
    }
    else {
        printf("%d polindrom degildir\n", orjinal);
    }

    return 0;
}