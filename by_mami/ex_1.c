/// kullanıcıdan alınan 3 adet sayının sıralaması

#include <stdio.h>

int main(){

    int sayi1, sayi2, sayi3;

    printf("3 adet sayi giriniz:\n");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);

    if (sayi1 >= sayi2 && sayi1 >= sayi3){
        printf("en buyuk sayi %d\n", sayi1);
    }
    else if (sayi2 >= sayi1 && sayi2 >= sayi3){
        printf("en buyuk sayi %d\n", sayi2);
    }
    else if (sayi3 >= sayi1 && sayi3 >= sayi2){
        printf("en buyuk sayi %d\n", sayi3);
    }

    if (sayi1 <= sayi2 && sayi1 <= sayi3){
        printf("en kucuk sayi %d\n", sayi1);
    }
    else if (sayi2 <= sayi1 && sayi2 <= sayi3){
        printf("en kucuk sayi %d\n", sayi2);
    }
    else if (sayi3 <= sayi1 && sayi3 <= sayi2){
        printf("en kucuk sayi %d\n", sayi3);
    }

    return 0;



}