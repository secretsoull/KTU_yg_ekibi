#include <stdio.h>

int main(){

    int i,sayi,asallik = 1;

    printf("bir sayi griniz:  ");
    scanf("%d", &sayi);

    if (sayi < 2){
        asallik = 0;
    }
    else {
        for (i = 2; i <= sayi/2; i++){

            if (sayi % i == 0){
                asallik = 0;
                break;
            }
        }

}