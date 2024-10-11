#include <stdio.h>    
#include <string.h>          
 
#define MAX_LEN 100 
 
int main() {  
    char str[MAX_LEN];
    int len, i, isPalindrome = 1; // Assume it is a palindrome

    // Input the string from the user
    printf("Enter a string: "); 
    fgets(str, MAX_LEN, stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;  

    len = strlen(str);

    // Check for palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) { 
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }
 
    // Output the result
    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
