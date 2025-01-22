#include <stdio.h>

int main() {
    int age_in_years;
    int age_in_minutes;

    // Write the prompt
    puts("Enter your age in years:");

    // Get the input
    scanf("%d", &age_in_years);

    // Do the math
    age_in_minutes = age_in_years * 365 * 24 * 60;

    // Create the output
    printf("%d years is %d minutes\n", age_in_years, age_in_minutes);

    return 0;
}