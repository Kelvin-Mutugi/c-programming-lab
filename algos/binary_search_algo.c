#include <stdio.h>
#include <stdbool.h>

int main(){
    int numbers[10] = {9,7,5,3,1,2,4,6,8,0};
    int temp;
    int i = 0;
    bool swapped = true;
    const int n = 10;

    while(swapped){
        swapped = false;
        for(i = 0; i < n - 1; i++){
            if(numbers[i] > numbers[i+1]){
                temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
                swapped = true;
            }
        }
    }

    for(int i = 0; i <= 9; i++ ){
        printf("%d, \n", numbers[i]);
    }



    return 0;
}