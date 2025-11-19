#include <stdio.h>

void yazdir(int n){
    
    if (n==0)
        return;
    yazdir(n-1);
        printf("%d\n", n);

}

int main(){

    int sayi;
    printf("bir sayi girin.");
    scanf("%d", &sayi);
    printf("1'den %d ye kadar\n", sayi);

    yazdir(sayi);

    return 0;
}

//fibonacci problemi
// - pi = 4 - 4/3 + 4/5 + 4/6 + ..... 
            // SONSUZDAN FAYDALANARAK Pİ DEGERİNİ HESAPLA.
            //HE RTERİMDEN SONRA Pİ YE NE KADAR YAKLASTIGINI GOSTER.
            //3.14, 3.141, 3.1415, 3.14159 BULABİLMEK ICIN SERININ HER TERIMINI KULLANMAK GEREKIR.

//1234567 FOR WHİLE DO WHILE KULLANILCAK
//3 8 13 18 23
//20 14 8 2 -4 -10
//19 27 35 43 51
