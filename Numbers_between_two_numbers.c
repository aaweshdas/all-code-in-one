#include <stdio.h>
int main()
 {
    int num1, num2, i;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("Numbers between %d and %d are:\n", num1, num2);
    for (i = num1 + 1; i < num2; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
