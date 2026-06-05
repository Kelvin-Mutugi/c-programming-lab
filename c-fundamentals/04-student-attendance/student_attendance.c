/*
Student Attendance
Develop a program that prompts the user to enter the number of days attended by each of 10 students out of 30 total school days.
Using an attendance array and a loop, compute and display the class average attendance percentage to two decimal places.
*/

#include <stdio.h>
#define NO_OF_STUDENTS 10
#define SHOOL_DAYS 30

int main(){
    int attendance[NO_OF_STUDENTS] = {0};
    float average_attendance = 0.00;
    int current_student = 0;
    int user_input;
    int total_attendance = 0;

    printf("ENTER THE ATTENDANCE \n");
    while (current_student < NO_OF_STUDENTS){
        printf("student %d: ", current_student + 1);
        scanf("%d", &user_input);

        attendance[current_student] = user_input;

        current_student++;
    }


    for (int i = 0; i < NO_OF_STUDENTS; i++){
        total_attendance += attendance[i];
    }

    average_attendance = ((float)total_attendance / (NO_OF_STUDENTS * SHOOL_DAYS)) * 100;
    printf("Average attendance of the class: %.2f %\n", average_attendance);


    return(0);

}