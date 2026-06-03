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
    float highest_temperature = 0.00;
    float lowest_temperature = 0.00;
    float average_temperature = 0.00;
    float max_temp = temperatures[0];
    float min_temp = temperatures[0];

    int current_loop = 0;
    //char days[NO_OF_DAYS] = {"Mon", "Tue", "Wed", "Thur", "Fri", "Sart", "Sun"};

    while (current_loop < NO_OF_DAYS){

        printf("Day %d temperature in Celsius: ", current_loop + 1);
        scanf("%f", &user_input);
        temperatures[current_loop] = user_input;
        current_loop++;

    };

    for ( int i = 0; i < NO_OF_DAYS; i++){
        if(temperatures[i] > max_temp ){
            max_temp = temperatures[i];
        };
        if (temperatures[i] < min_temp){
           min_temp = temperatures[i];
        };
        
    };



    return(0);
}