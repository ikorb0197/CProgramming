/*
    Practice with non-void functions

*/

#include <stdio.h>

// Function prototypes
// The function named getFive which returns an integer and takes no arguments
int getFive(void);

// Function named printCourse which returns nothing and takes one integer argument
void printCourse(int course_number);

// Void function that takes an integer and describes the weather
void describeWeather(int temp);

// The function that converts the given number of miles to kilometers
double milesToKm(int miles);

// The function that converts the given number of kilometers to miles
double kmsToMiles(int kms);

int main(void) {
    int var = 0;

    // Call getFive function
    var = getFive();

    printf("var is %d\n", var);

    // Call printCourse
    printCourse(2271);

    // Test describeWeather
    int temp = 0;
    printf("Enter a temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);

    // Test milesToKm
    int miles = 0;
    printf("Enter a number of miles: ");
    scanf("%d", &miles);
    double kms_conv = milesToKm(miles);
    printf("%d miles is %f kilometers\n", miles, kms_conv);

    // Test kmsToMiles
    int kms = 0;
    printf("Enter a number of kilometers: ");
    scanf("%d", &kms);
    double miles_conv = kmsToMiles(kms);
    printf("%d kilometers is %f miles\n", kms, miles_conv);

    return 0;
}

// getFive implementation
int getFive(void) {
    int five = 5;

    return five;
}

/***********************/
void printCourse(int course_number){
    printf("You are in COP%d course.\n", course_number);

}

/**********************/
void describeWeather(int temp){
    // if statement
    if (temp > 70) {
        puts("HOT");
    }
    if (temp <= 70) {
        puts ("COLD");
    }
}

/**********************/
double milesToKm(int miles) {
    double kms_conv = miles * 1.609;
    return kms_conv;
}

double kmsToMiles(int kms) {
    double miles_conv = kms / 1.609;
    return miles_conv;
}