#include <stdio.h>
#include <stdbool.h>

int main() {
    char calc = 'y';

    while (calc == 'y'){
    
    int a = 0;
    char b;
    int c = 0;
    printf(": ");
    scanf("%d", &a);
    printf("operator: ");
    scanf(" %c", &b);
    printf(": ");
    scanf("%d", &c);

    if (b == '+'){
        printf("Answer: %d \n", a + c);
    }
    else if (b == '-'){
        printf("Answer: %d \n", a - c);
    }
    else if (b == '*'){
        printf("Answer: %d \n", a * c);
    }
    else if (b == '/')
    {
        printf("Answer: %d \n", a / c);
    }
    else {
        printf("Error: Invalid operator!\n");
    };
    printf("do another calculation (y/n): ");
    scanf(" %c", &calc);
};
    
    
};