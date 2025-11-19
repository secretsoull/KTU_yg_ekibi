#include <stdio.h>

int main() {
    int kenar, i, j;

    printf("Karenin kenar uzunlugunu girin: ");
    scanf("%d", &kenar);

    for (i = 0; i < kenar; i++) {
        for (j = 0; j < kenar; j++) {
            
            if (i == 0 || i == kenar - 1 || j == 0 || j == kenar - 1) {
                printf("* ");
            } else {
            
                printf("  "); 
            }
        }
        printf("\n");
    }
    
    return 0;
}