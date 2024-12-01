#include <stdio.h>

// Calculate grade based on average mark
char get_grade(float avg_mark) {
    if (avg_mark >= 0 && avg_mark < 40)
        return 'Fail'; // Fail
    else if (avg_mark >= 40 && avg_mark < 50)
        return 'D';
    else if (avg_mark >= 50 && avg_mark < 60)
        return 'C';
    else if (avg_mark >= 60 && avg_mark < 70)
        return 'B';
    else if (avg_mark >= 70 && avg_mark <= 100)
        return 'A';
    else
        return 'I'; // Invalid
}

int main() {
    char continue_input = 'Y';

    // Loop for multiple students
    while (continue_input == 'Y' || continue_input == 'y') {
        int admission_number;
        char surname[50];
        float mark1, mark2, mark3, avg_mark;
        char grade;

        // Input student details
        printf("Enter the student's admission number: ");
        scanf("%d", &admission_number);
        printf("Enter the student's surname: ");
        scanf("%s", surname);

        // Input marks for three subjects
        printf("Enter the mark for subject 1: ");
        scanf("%f", &mark1);
        printf("Enter the mark for subject 2: ");
        scanf("%f", &mark2);
        printf("Enter the mark for subject 3: ");
        scanf("%f", &mark3);

        // Check if marks are valid
        if ((mark1 < 0 || mark1 > 100) || (mark2 < 0 || mark2 > 100) || (mark3 < 0 || mark3 > 100)) {
            printf("Invalid marks entered. Marks should be between 0 and 100.\n");
            continue;
        }

        // Calculate average mark
        avg_mark = (mark1 + mark2 + mark3) / 3;

        // Calculate grade based on average mark
        grade = get_grade(avg_mark);  // Fixed the function name

        // Display student details and grade
        printf("\nStudent Information\n");
        printf("-------------------\n");
        printf("Admission Number: %d\n", admission_number);
        printf("Surname: %s\n", surname);
        printf("Marks: %.2f, %.2f, %.2f\n", mark1, mark2, mark3);
        printf("Average Mark: %.2f\n", avg_mark);

        if (grade == 'I') {
            printf("Grade: Invalid marks\n");
        } else if (grade == 'F') {
            printf("Grade: Fail\n");
        } else {
            printf("Grade: %c\n", grade);
        }

        // Ask if the user wants to continue for another student
        printf("\nDo you want to compute for another student? (Y/N): ");
        scanf(" %c", &continue_input);  // Added space before %c to avoid newline issues
        printf("\n");
    }

    printf("Exiting the program. Goodbye!\n");
    return 0;
}