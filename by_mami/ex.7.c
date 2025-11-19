#include <stdio.h>

int main(){

    int i = 1, j = 1;

   do {
    j =1;
    do {
        printf("%d x %d = %d\t", i ,j, i * j);
        j++;
    }
    while (j <= 10);
    i++;
   }
   while ( i <= 10);

    return 0;
}