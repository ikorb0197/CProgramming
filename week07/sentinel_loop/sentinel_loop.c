#include <stdio.h>

double avgStudentGradesSentinel(void);
double getGrade(void);

int main(void) {
    printf("%.2lf\n", avgStudentGradesSentinel());
    
    return 0;
}

double avgStudentGradesSentinel(void) {
    double grade = 0;
    double total_grade = 0;
    int n_grades = 0;
    while (grade != -1) { // -1 - sentinel value
        // Get the grade
        grade = getGrade();
        
        // Get the total
        if (grade >= 0) {
            total_grade += grade;
            n_grades++;
        }
    }

    if (n_grades == 0) {
        puts("No grades were entered");
        return 0;
    }

    return total_grade / n_grades;
}

double getGrade(void) {
    // Return only grades in the range [-1, 100]

    double grade = 0;
    
    // do while loop
    do {
        printf("Enter the grade (-1 to exit): ");
        scanf("%lf", &grade);
        if (grade < -1 || grade > 100) {
            puts("INCORRECT GRADE! Try again.");
        }
    } while (grade < -1 || grade > 100);

    return grade;
}