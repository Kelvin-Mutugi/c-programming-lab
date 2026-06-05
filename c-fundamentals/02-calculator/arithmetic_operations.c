/*TASK 3:
Write a C program that allows the user to perform basic arithmetic operations (addition, 
subtraction, multiplication, division) based on users choice. The program should prompt 
the user to enter two numbers and then select the operation they want to perform. Use a 
switch statement to handle the different operations. */

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    char calc = 'y';

    while (calc == 'y'){
    
        int a = 0;
        char arithmetic_operations = '+';
        int c = 0;
        printf("Enter first digit: ");
        scanf("%d", &a);
        printf("operator(+,-,*,/,%): ");
        scanf(" %c", &arithmetic_operations);
        printf("Enter second digit: ");
        scanf("%d", &c);
        
        switch (arithmetic_operations)
        {
        case '+':
            printf("Answer: %d \n", a + c);
            break;
        case '-':
            printf("Answer: %d \n", a - c);
            break;
        case '*':
            printf("Answer: %d \n", a * c);
            break;
        case '/':
            printf("Answer: %d \n", a / c);
            break;
        case '%':
            printf("Answer: %d \n", a % c);
            break;
        
        default:
            printf("Error: Invalid operator!\n");
            break;
        }

        printf("Do another arithmetic operation (y/n): ");
        scanf(" %c", &calc);

    };

    
    
};