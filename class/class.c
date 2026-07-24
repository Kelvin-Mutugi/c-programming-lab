#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    char operator;
    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);
    printf("enter operator: ");
    scanf(" %c", &operator);

    if(operator == '+'){
        printf("the answer is %d \n", num1 + num2);
    }
    else if(operator == '*'){
        printf("the answer is %d \n", num1 * num2);
    }
    else if(operator == '/'){
        printf("the answer is %d \n", num1 / num2);
    }
    else{
        printf("enter a valid operator");
    }


}