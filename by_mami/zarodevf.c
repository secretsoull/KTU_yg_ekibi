#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zar_at(void){

    int zar1 = 1 + (rand() % 6);
    int zar2 = 1 + (rand() % 6);
    int toplam = zar1 + zar2;

    printf("gelen zarlar %d + %d = %d\n", zar1, zar2, toplam);

    return (toplam);
}

int main(void){

    int toplam;
    int puan;
    int oyun_durumu = 0;

    srand(time(NULL));

    printf("--- OYUNA HOSGELDINIZ ---\n");
    printf("zar atmak icin ENTER tusuna basiniz. \n");

    toplam = zar_at();

    if (toplam == 7 || toplam == 11){
        oyun_durumu = 1;
    }
    else if (toplam == 2 || toplam == 3 || toplam == 12 ){
        oyun_durumu = 2;
    }
    else {
        oyun_durumu = 0;
        puan = toplam;
        printf("puaniniz: %d. kazanmak icin tekrar %d atiniz.\n", puan, puan);
    }

    while (oyun_durumu == 0){

        printf("tekrar zar atmak icin ENTER tusuna basiniz. \n");
        getchar();

        toplam = zar_at();

        if (toplam == puan){
            oyun_durumu = 1;
        }
        else if (toplam == 7){
            oyun_durumu = 2;
        }

    }

    if (oyun_durumu == 1){
        printf("TEBRIKLER. kazandiniz.\n");
    }
    else {
        printf("KAYBETTINIZ. \n");
    }

    return 0;
}