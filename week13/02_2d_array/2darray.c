#include <stdio.h>

int main(void) {
    double arr[5][5] = {
        {1.00, 2.00, 3.00, 4.00, 5.00},
        {6.00, 7.00, 8.00, 9.00, 10.00},
        {11.00, 12.00, 13.00, 14.00, 15.00},
        {16.00, 17.00, 18.00, 19.00, 20.00},
        {21.00, 22.00, 23.00, 24.00, 25.00} 
    };

    arr[0][1] = 24.0;
    arr[2][2] = 43.0;
    arr[4][4] = 377.00;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.2lf ", arr[i][j]);
        }
        puts("");
    }
    puts("");

    return 0;
}