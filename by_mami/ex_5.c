// tipe göre indirim veren sistem

#include <stdio.h>

int main(){

    float indirim = 0, tutar = 0;
    char tips;

    printf("alisveris tutarinizi giriniz:  ");
    scanf("%f", &tutar);
    
    printf("tipinizi giriniz: (o - ogrenci, t - ogretmen, n - normal):   ");
    scanf(" %c", &tips);

    if (tips == 'o' || tips == 'O'){
        indirim = tutar*0.5;
    }
    else if (tips == 't' || tips == 'T'){
        indirim = tutar*0.3;
    }
    else if (tips == 'n' || tips == 'N'){
        indirim = tutar*0;
    }
    else {
        printf("yanlis tuslama yaptiniz. indirim 0 tl olarak belirlendi.\n");
        indirim = tutar*0;
    }

    printf("indirimsiz tutar: %.2f\ntoplam indirim: %.2f TL\nindirimli tutariniz: %.2f TL\n", tutar, indirim, tutar - indirim);

    return 0;
    
}
