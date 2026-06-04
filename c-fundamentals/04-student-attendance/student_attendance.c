/*
Student Attendance
Develop a program that prompts the user to enter the number of days attended by each of 10 students out of 30 total school days.
Using an attendance array and a loop, compute and display the class average attendance percentage to two decimal places.
*/

#include <stdio.h>
#define NO_OF_STUDENTS 3
#define SHOOL_DAYS 30

int main(){
    int attendance[NO_OF_STUDENTS];
    float average_attendance = 0.00;
    int current_day = 0;

    printf("ENTER THE ATTENDANCE");
    while (current_day < SHOOL_DAYS){
        printf("student %d", current_day + 1);

    }




    return(0);
}