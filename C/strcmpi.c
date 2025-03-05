#include<stdio.h>
#include<string.h>
int main(){
    
   char first_str[] = "zfz";
   char second_str[] = "Gfg";

   int res = strcmpi(first_str, second_str);
   if (res==0){
    printf("Strings are equal");
   }
   else {
    printf("Strings are unequal");
   }
   printf("\nValue of result: %d", res);


}