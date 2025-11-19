// polindrom with for

#include <stdio.h>

int main(){

    int sayi, orjinal, ters = 0;

    printf("bir sayi giriniz:  ");
    scanf("%d", &sayi);

    orjinal = sayi;

    for ( ; sayi !=0; sayi /=10){
        ters = ters *10 + (sayi /= 10);
    }
    
    if (orjinal == ters){
        printf("%d polindrom sayidir\n", orjinal);
    }
    else {
        printf("%d polindrom sayi degildir\n", orjinal);
    }

    return 0;
}