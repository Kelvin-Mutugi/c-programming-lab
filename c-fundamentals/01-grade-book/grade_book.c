#include <stdio.h>

int main() {
    int student_marks[5][4];
    int student_total_marks[5];
    int student_average[5];

    // Initialize totals to 0
    for(int i = 0; i < 5; i++){
        student_total_marks[i] = 0;
    }

    // Input marks and calculate totals
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            printf("enter marks for student %d: ", i+1);
            scanf("%d", &student_marks[i][j]);
            student_total_marks[i] += student_marks[i][j];
        }
        student_average[i] = student_total_marks[i] / 4;
        printf("\n");
    }

    // Display grades
    for(int k = 0; k < 5; k++){
        char grade;
        if(student_average[k] >= 70){
            grade = 'A';
        }
        else if (student_average[k] >= 60){
            grade = 'B';
        }
        else if (student_average[k] >= 50){
            grade = 'C';
        }
        else if (student_average[k] >= 40){
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        printf("student %d scored: %c (average: %d)\n", k+1, grade, student_average[k]);
    }

    return 0;
}