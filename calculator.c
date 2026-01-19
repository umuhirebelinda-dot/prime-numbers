#include <stdio.h>

int main() {
    int a, b, sum, quotient, product, difference;
    char oper;

    printf("enter the first number:\n");
    scanf("%d", &a);

    printf("enter the operator:\n");
    scanf(" %c", &oper);  // space before %c is important

    printf("enter the second number:\n");
    scanf("%d", &b);

    if (oper == '+') {
        sum = a + b;
        printf("the sum is %d\n", sum);

    } else if (oper == '-') {
        difference = a - b;
        printf("the difference is %d\n", difference);

    } else if (oper == '*') {
        product = a * b;
        printf("the product is %d\n", product);

    } else if (oper == '/') {
        if (b == 0) {
            printf("Error: cannot divide by zero.\n");
        } else {
            quotient = a / b;
            printf("the quotient is %d\n", quotient);
        }

    } else {
        printf("Invalid operator!\n");
    }

    printf("Test")

    return 0;
}
