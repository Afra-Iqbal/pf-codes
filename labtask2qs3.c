#include <stdio.h>

int main () {
    int num;         
    float result;

    printf("enter an integer: ");
    scanf("%d", &num);
 
    result = num;

    printf("integer value: %d\n", num);
    printf("float value (after implicit casting): %.2f\n", result);

    return 0;
}
