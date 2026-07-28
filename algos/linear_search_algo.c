#include<stdio.h>
#include <stdbool.h>

int main(){
     int numbers[10] = {9,7,5,3,1,2,4,6,8,0};
     int search_no;
     bool found = false;

     printf("Search: ");
     scanf("%d", &search_no);
     for(int i = 0; i < 10; i++){
        if(numbers[i] == search_no){
            found = true;
            printf("found %d \n", numbers[i]);
            break;
        }
        if(i == 9){
            if(!found){
                printf("%d is not found \n", search_no);
            }
        }
     }

    return 0;
}