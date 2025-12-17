#include <stdio.h>

int main() {
    int num;         
    double result;    

    printf("enter an integer: ");
    scanf("%d", &num);

    result = (double) num;

    printf("integer value: %d\n", num);
    printf("double value (after explicit casting): %lf\n", result);

    return 0;
}