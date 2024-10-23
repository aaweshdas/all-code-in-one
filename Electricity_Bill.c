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


//  #include <stdio.h>

// float calculate_electricity_bill(int units) {
//     float rate_per_unit = 2.50;
//     return units * rate_per_unit;
// }

// int main() {
//     int units;
//     float bill;

//     // Prompt the user for input
//     printf("Enter the number of units (1-30): ");
//     scanf("%d", &units);

//     // Validate the input
//     if (units >= 1 && units <= 30) {
//         bill = calculate_electricity_bill(units);
//         printf("Total electricity bill for %d units is: $%.2f\n", units, bill);
//     } else {
//         printf("Units must be between 1 and 30.\n");
//     }

//     return 0;
// }