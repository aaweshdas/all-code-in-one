#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for coefficients and roots
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients from the user
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if 'a' is zero
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero. Not a quadratic equation.\n");
        return 1; // Exit with an error code
    }

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Determine the nature of the roots
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // One double root
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {  
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0; // Exit successfully
}
