#include <stdio.h>

int add(int, int);

int main() {
    int a;
    int b;
    int result;

    printf("Enter the first operand\n");
    scanf("%d", &a);
    printf("Enter the second operand\n");
    scanf("%d", &b);

    result = add(a, b);

    printf("%d + %d = %d\n", a, b, result);


    return 0;
}

int add(int num1, int num2) {
    return (num1 + num2);
}