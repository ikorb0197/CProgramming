/*
    The program prints the student's info in the specific format:

*/

#include <stdio.h>

int main() {
    int courseID = 2271;
    int studentID = 10234;
    printf("Name: John Doe\n");
    printf("Course ID: %d\n", courseID);
    printf("Student ID: %d\n", studentID);
    printf("Student ID - Course ID is: %d\n", studentID - courseID);

    return 0;
}