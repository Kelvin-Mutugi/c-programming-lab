#include<stdio.h>

int main(){
    int i,j;

    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            printf("%d", i);//you can change the i to j to print the numbers likr 1, 12, 123, 1234
        }
        printf("\n");
    }

    return 0;
}