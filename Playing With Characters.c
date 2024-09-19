#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
int main()  
{       
  char a;
  char b[10];  
  char sentence[200];
    
  
  scanf("%c",&a);
  getchar();

  scanf("%s",b);
  getchar();
  fgets(sentence,200,stdin);
  
  printf("%c",a);
  
  printf("\n%s",b);
   printf("\n%s",sentence);
    return 0;
}  
