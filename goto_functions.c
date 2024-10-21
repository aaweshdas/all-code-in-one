#include <stdio.h>
 
int main() {
    int i = 0;
    printf("Starting loop...\n");

    // Label for the loop
    loop:
    printf("Iteration %d\n", i);

    // Increment i
    i++;

    // Check if i is less than 5
    if (i < 5) {
        // If true, jump to the label 'loop'
        goto loop;
    }

    printf("Loop ended.\n");
    return 0;
} 