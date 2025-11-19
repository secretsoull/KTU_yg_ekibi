// atm

#include <stdio.h>

int main(){

    float bakiye = 1000;
    float miktar;
    int secim;

    do {
    printf("---ATM---\n");
    printf("yapmak istediginiz islemi seciniz.\n");
    printf("1- Para cek\n2- Para yatir\n3- Bakiye sorgula\n4- Cikis\n");
    scanf("%d", &secim);

    switch(secim){
        case 1:
            printf("cekmek istediginiz miktari giriniz:  ");
            scanf("%f", &miktar);
            bakiye -= miktar;
            printf("kalan bakiyeniz:  %.3f\n", bakiye);
            break;
        case 2:
            printf("yatirmak istediginiz miktari giriniz:  ");
            scanf("%f", &miktar);
            bakiye -= miktar;
            printf("mevcut bakiyeniz:  %.3f", bakiye);
            break;
        case 3:
            printf("mevcut bakiyeniz %.3f\n", bakiye);
            break;
        case 4:
            printf("bye bye\n");
            break;
        
        default:
            printf("lutfen gecerli bir islem yapiniz..\n");
        
        
        }
    }
    while (secim !=4);

    return 0;
}
