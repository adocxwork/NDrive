#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum;
    printf("For 1st complex number\n");
    printf("Enter real and imaginary part respectively: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("For 2nd complex number\n");
    printf("Enter real and imaginary part respectively: ");
    scanf("%f %f", &num2.real, &num2.imag);
    sum = addComplex(num1, num2);
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
