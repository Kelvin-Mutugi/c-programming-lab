#include <stdio.h>

int main() {
    int student_marks[5][4];
    int student_total_marks[5][1];

    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            printf("enter marks for student %d: ", i+1);
            scanf("%d", &student_marks[i][j]);
            
        }
        printf("\n");
    };



    

    return 0;
}
