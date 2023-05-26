#include <stdio.h>

struct Complex;
struct Complex addComplex(struct Complex num1, struct Complex num2);

struct Complex {
    float real;
    float imaginer;
};

int main() {
    struct Complex num1, num2, sum;

    printf("1. enter the real part of the complex number: ");
    scanf("%f", &num1.real);

    printf("1. enter the imaginer part of the complex number: ");
    scanf("%f", &num1.imaginer);

    printf("2. enter the real part of the complex number: ");
    scanf("%f", &num2.real);

    printf("2. enter the imaginer part of the complex number: ");
    scanf("%f", &num2.imaginer);


    sum = addComplex(num1, num2);

    printf("result: %.2f + %.2fi\n", sum.real, sum.imaginer);

    return 0;
}


struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imaginer = num1.imaginer + num2.imaginer;

    return result;
}
