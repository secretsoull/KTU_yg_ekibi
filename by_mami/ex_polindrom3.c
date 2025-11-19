// polindrom with while

#include <stdio.h>

int main(){

    int sayi, basamak, orjinal, ters = 0;

    printf("bir sayi giriniz:  ");
    scanf("%d", &sayi);

    orjinal = sayi;

    while (sayi > 0){
        basamak = sayi % 10;
        ters = ters * 10 + basamak;
        sayi /= 10;
    }

    if (orjinal == ters){
        printf("%d polindromdur.\n", orjinal);
    }
    else {
        printf("%d not polindrom", orjinal);
    }

    return 0;
}