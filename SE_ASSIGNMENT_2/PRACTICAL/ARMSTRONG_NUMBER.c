#include <stdio.h>
#include <math.h>

void main() {
    int a, original, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &a);

    original = a;

    for (original = a; original != 0; ++n) {
        original /= 10;
    }

    original = a;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == a) {
        printf("%d is an Armstrong number.\n", a);
    } else {
        printf("%d is not an Armstrong number.\n", a);
    }
}

