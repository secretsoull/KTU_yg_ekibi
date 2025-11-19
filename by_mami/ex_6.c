#include <stdio.h>

int main(){

    int i,j,satir;

    printf("bir sayi giriniz:  ");
    scanf("%d", &satir);

    for (i = satir; i>=1; i--){
        for (j = 1; j<=satir - i; j++){
            printf(" ");
        }
        for (j = 1; j<= 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}