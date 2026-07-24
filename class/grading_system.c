#include <stdio.h>

int main(){
    float score = 0.00f;
    //prompt the user to enter input
    printf("Enter the score: ");
    if(scanf("%f", &score)!=1){
        printf("enter input, Please enter a number. \n");
        printf("hello \n");
        return 0;
    }

    //validate the score
    if(score<0||score>100){
        printf("Error:Score must be between 0 and 100. \n");
        return 1;
    }

    //Determining grade
    printf("grade: ");
    if (score >=90){
        printf("A\n");
    }
    else if(score >=80){
        printf("B\n");
    }
    else if(score >=70){
        printf("C\n");
    }
    else if(score >=60){
        printf("D\n");
    }
    else{
        printf("Fail\n");
    }

    return 0;

}