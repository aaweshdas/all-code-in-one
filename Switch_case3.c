// //calculator operations using switch case 
// #include<stdio.h>
// int main()
// {

//     int a,b;
//     char n;
//     printf("Enter two values: ");
//     scanf("%d %d",&a,&b);
   
//     printf("Enter arithmetic operation: ");
//     scanf("%c",&n);
//         switch(n)
//         {
//         case'+':
//         printf("%d + %d=%d",a,b,a+b);
//         break;
       
//         case'-':
//         printf("%d - %d=%d",a,b,a-b);
//         break;
        
//         case'*':
//         printf("%d * %d=%d",a,b,a*b);
//         break;

//         case'/':
//         printf("%d / %d=%d",a,b,a/b);
//         break;
   
//         default: 
//         printf("Invalid input");
//         }} 
#include <stdio.h>

int main()  
{
    int a, b;
    char n;

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    
    // Clear the input buffer before reading the character
    while (getchar() != '\n'); // This will consume any leftover characters in the buffer

    printf("Enter arithmetic operation (+, -, *, /): ");
    scanf(" %c", &n); // Add a space before %c to consume any whitespace characters

    switch (n) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;

        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;

        case '/':
            if (b != 0) {
                printf("%d / %d = %d\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default: 
            printf("Invalid input\n");
    }

    return 0;
}