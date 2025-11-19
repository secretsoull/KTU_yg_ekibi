/// çarpım tablosu

#include <stdio.h>

int main(){

   int i = 1, j = 1;

   while (i <=10){

    j = 1;
    while (j <=10){
    printf("%d x %d = %d\t", i , j , i * j);
    j++;
    }
    i++;
    printf("\n");
   }
   return 0;
}
