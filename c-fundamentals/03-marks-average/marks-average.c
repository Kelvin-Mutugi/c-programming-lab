#include  <stdio.h>
#define MAX_SIZE 5
#define MAX_MARKS 2

/*Develop a program in C that prompts a user to enter marks for five subjects. using marks array.
the program uses loop to prompt the user to enter marks for each
subject and stores them in the array.
It then computes the average and displays the result as
two decimal point value
*/

int main(){
    int marks[MAX_SIZE];
    int current_size = 0;
    int user_input = 0;
    float marks_total = 0;

    while (current_size < MAX_SIZE){
        printf("Enter Your marks for subject %d: ", current_size + 1);
        scanf("%d", &user_input);
        if (user_input > 99){
            printf("Marks can only be less than 2 digits \n");
        }
        else{
            marks[current_size] = user_input;
            current_size++;
        }
        
    };

    for (int i = 0; i < MAX_SIZE; i++){
        marks_total += marks[i];
    }

    float average = marks_total/MAX_SIZE;
    printf("The resuls average is: %.2f \n", average);


}