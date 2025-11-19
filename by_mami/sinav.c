#include <stdio.h>

int main(){

    int gecenler = 0;
    int kalanlar = 0;
    int ogrenci = 1;
    int sonuc;

    while (ogrenci <= 10){
        printf("sonucu girin (1 gecti, 2 kaldi):  ");
        scanf("%d", &sonuc);


        if (sonuc == 1){
            gecenler = gecenler + 1;
            ogrenci = ogrenci + 1;
        }
        else if (sonuc == 2){
            kalanlar = kalanlar + 1;
            ogrenci = ogrenci + 1;
        }
        else {
            printf("gecerli bir islem yapiniz: \n");
        }
    }

    printf("gecen sayisi: %d\n", gecenler);
    printf("kalan sayisi:  %d\n", kalanlar);

    if (gecenler >= 8){
        printf("yuksek basari\n");
    }

    return 0;
}