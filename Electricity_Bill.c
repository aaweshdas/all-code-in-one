//electricity bill
#include<stdio.h>
int main()
{ 
    int units;
    float amount;
    printf("Enter the number of units: ");
    scanf("%d",&units);

    if (units>=1 && units<=30){
        amount=units*2.5;
    }
    else if (units>=31 && units<=70){
        amount=30*2.5 +(units-30)*4.00;
    }
    else if (units>=71 && units<=150){
        amount=30*2.5 + 160 + (units-70)*4.00 ;
    }
    else if (units>=151 && units<=250){
        amount=75+160+480+(units-150)*6.00;
    }
    else if (units>=250){
        amount=75+160+480+800+(units-150)*8.00;
    }
    else {
        printf("Please enter valid units");
    }

    printf("Electricity bill = %.2f",amount);

}


// #include <stdio.h>

// int main() {
//     int units;
//     float amount = 0.0; // Initialize amount
//     printf("Enter the number of units: ");
//     scanf("%d", &units);

//     if (units >= 1 && units <= 30) {
//         amount = units * 2.5;
//     }
//     else if (units >= 31 && units <= 70) {
//         amount = 30 * 2.5 + (units - 30) * 4.00;
//     }
//     else if (units >= 71 && units <= 150) {
//         amount = 30 * 2.5 + 40 * 4.00 + (units - 70) * 4.00; // Corrected base charge
//     }
//     else if (units >= 151 && units <= 250) {
//         amount = 30 * 2.5 + 40 * 4.00 + 80 * 4.00 + (units - 150) * 6.00; // Corrected base charge
//     }
//     else if (units > 250) {
//         amount = 30 * 2.5 + 40 * 4.00 + 80 * 4.00 + 100 * 6.00 + (units - 250) * 8.00; // Corrected base charge
//     }
//     else {
//         printf("Please enter valid units");
//         return 1; // Exit the program with an error code
//     }

//     printf("Electricity bill = %.2f\n", amount);
//     return 0; // Exit the program successfully
// }