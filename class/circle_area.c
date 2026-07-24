#include <stdio.h>
const float PI = 3.14159f;

int main(){
    
    char cal = 'y';

    while (cal == 'y'){
        float area = 0;
        float radius = 0;
        printf("Enter The circle Radius: ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("The area of the circle is: %.2f \n", area);

        printf("Calculate agin(y/n): ");
        scanf(" %c", &cal);
    }
    
    

    return 0;
}
