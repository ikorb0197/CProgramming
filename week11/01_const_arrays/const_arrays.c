#include <stdio.h>

#define SIZE 10

// Print the doubled values of the given array
void printDoubledArray(const int *arr, int size);
// Searching in arrays (linear search)
/*
    Search for the location of the first zero in the array and return it.
    Return -1 if there are no zeros.
*/
int firstZero(const int *arr, int size);
int lastZero(const int *arr, int size);

/*
    Return 1 if there is an even number of zeroes
    Return 0 if there is an odd number of zeroes or there are no zeroes
*/
int hasEvenZeroes(const int *arr, int size);

int nthZero(const int *arr, int size, int n);

int main(void) {
    int a[SIZE] = {1, 2, 3, 4, 5, 6};
    
    printDoubledArray(a, SIZE);
    
    int first_zero = firstZero(a, SIZE);
    int last_zero = lastZero(a, SIZE);
    if (first_zero == -1) {
        puts("There are no zeroes");
    }
    else {
        printf("The index of the first zero is %d\n", first_zero);
        printf("The index of the last zero is %d\n", last_zero);
    }
    
    // Get the location of the second 0 in the array
    int nth_zero = nthZero(a, SIZE, 2);
    
    return 0;
}

void printDoubledArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i] * 2);
    }
    puts("");
}

int firstZero(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }
    
    // no zeroes
    return -1;
}

int lastZero(const int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            return i;
        }
    }
    
    // no zeroes
    return -1;
}

int hasEvenZeroes(const int *arr, int size) {
    int n_zeroes = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            n_zeroes++;
        }
    }
    if (n_zeroes % 2 == 1 || n_zeroes == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

int nthZero(const int *arr, int size, int n) {
    
}