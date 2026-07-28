#include <stdio.h>
#include <stdbool.h>


int main(){
    int unsorted[7] = {5,2,8,3,1,9,0};
    int i = 0;
    int temp;
    bool swaped = true;

    while(swaped == true){
        swaped = false;
        i = 0;
        while(true){
            if (i+1 < 7){
                if(unsorted[i] >= unsorted[i+1]){
                    temp = unsorted[i];
                    unsorted[i] = unsorted[i+1];
                    unsorted[i+1] = temp;
                    swaped = true;
                }
                i++;
            }
            else break;     
        }
    }

    for(int j = 0; j < 7; j++){
        printf("%d \n", unsorted[j]);
    }

    return 0;
}