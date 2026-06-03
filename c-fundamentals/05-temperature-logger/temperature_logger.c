#include <stdio.h>
#include <stdbool.h>
#define NO_OF_DAYS 7

/*
Temperature Logger
Develop a program that prompts the user to enter temperature readings for 7 days. Using a temperatures array,
store each reading via a loop. Compute and display the highest, lowest, and average temperature,
each to two decimal places.
*/

int main (){

    float temperatures[NO_OF_DAYS];
    float user_input = 0.00;
    float total_temp = 0.00;
    float average_temperature = 0.00;

    int current_loop = 0;

    while (current_loop < NO_OF_DAYS){

        printf("Day %d temperature in Celsius: ", current_loop + 1);
        scanf("%f", &user_input);
        temperatures[current_loop] = user_input;
        current_loop++;

    }

    float max_temp = temperatures[0];
    float min_temp = temperatures[0];

    for ( int i = 0; i < NO_OF_DAYS; i++){
        if(temperatures[i] > max_temp ){
            max_temp = temperatures[i];
        }
        if (temperatures[i] < min_temp){
           min_temp = temperatures[i];
        }
        total_temp += temperatures[i];
    }

    average_temperature = total_temp/NO_OF_DAYS;

    printf("highest temp: %.2f\n", max_temp);
    printf("Lowest temp: %.2f\n", min_temp);
    printf("average temp: %0.2f\n", average_temperature);


    return(0);
}