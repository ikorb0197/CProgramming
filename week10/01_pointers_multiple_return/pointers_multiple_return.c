#include <stdio.h>

/*
    Split the given 2-digit integer into tens and ones.
    Return 0 if the number is 2-digit; 1 - otherwise
*/

int splitDigits(int n, int *tens_ptr, int *ones_ptr);

/*
    TODO
*/

void sumAndAvg(double d1, double d2, double *sum, double *avg);

int main(void) {
    int n = 0;
    printf("Enter a 2-digit number: ");
    scanf("%d", &n);
    
    int tens = 0, ones = 0;
    splitDigits(n, &tens, &ones);
    
    printf("%d has %d tens and %d ones\n", n, tens, ones);
    
    // We have ones and tens
    double sum = 0; // the sum of ones and tens
    double avg = 0; // the avg of ones and tens
    
    sumAndAvg((double) tens, (double) ones, &sum, &avg);
    printf("The sum %lf\nThe average %lf\n", sum, avg);
    
    return 0;
}

int splitDigits(int n, int *tens_ptr, int *ones_ptr) {
    if (n < 10 || n > 99) {
        puts("Not a 2-digit number");
        return 1;
    }
    *tens_ptr = n / 10;
    *ones_ptr = n % 10;
    
    return 0;
}

void sumAndAvg(double d1, double d2, double *sum, double *avg) {
    *sum = d1 + d2;
    *avg = (d1 + d2) / 2;
}