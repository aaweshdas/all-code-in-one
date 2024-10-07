//Program for Switch case      
           
#include<stdio.h>    
int main()         
{    
    int n1,n2;        
    char a;  
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    printf("Enter the operator (+,-,*,/): ");
    scanf("\n%c",&a);
    switch(a)    
    {      
        case '+':
        printf("%d + %d = %d",n1,n2,n1+n2);
        break;
        case '-': 
        printf("%d - %d = %d",n1,n2,n1-n2);
        break;
        case '*':
        printf("%d * %d = %d",n1,n2,n1*n2);
        break;
        case '/':
        printf("%d / %d = %d",n1,n2,n1/n2);
        break; 
        default:
        printf("Error! Please Enter the Correct Operater , Ha HA ha");
        break;
    }
    return 0;
}