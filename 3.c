
#include <stdio.h>

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function and store the result in sum
    sum = addNumbers(num1, num2);

    printf("Sum: %d\n", sum);

    return 0;
}
