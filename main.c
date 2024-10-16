#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    if (a>=1 ) {
        printf("The given number is a Natural Number\n");
    } else{
        printf("The given number is not a Natural Number\n");
    }
  return 0 ; 
}