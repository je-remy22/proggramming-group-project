#include <stdio.h>
#include <string.h>

int main() {
    char new_student;  
    do {
        char surname[20];
        int admission_num,subject1, subject2, subject3;
        float average_mark;
        char grade[20];

        printf("Enter admission number: ");
        scanf("%d", &admission_num);  
        printf("Enter surname: ");
        scanf("%s", surname);  
        printf("Enter mark in subject1: ");
        scanf("%d", &subject1);
        printf("Enter mark in subject2: ");
        scanf("%d", &subject2);
        printf("Enter mark in subject3: ");
        scanf("%d", &subject3);

        average_mark = (subject1 + subject2 + subject3) / 3;

        if (average_mark >= 70) {
            strcpy(grade, "A");  
        } else if (average_mark >= 60) {
            strcpy(grade, "B");
        } else if (average_mark >= 50) {
            strcpy(grade, "C");
        } else if (average_mark >= 40) {
            strcpy(grade, "D");
        } else {
            strcpy(grade, "Fail");
        }
        

        printf("The admission number is %d\n", admission_num);
        printf("The surname is %s\n", surname);
        printf("The marks for various subjects are %d, %d, and %d\n", subject1, subject2, subject3);
        printf("The grade is %s\n", grade);

        
        printf("Do you wish to continue (Y/N)? ");
        scanf(" %c", &new_student);  

    } while (new_student == 'Y' );  

    return 0;  
}
