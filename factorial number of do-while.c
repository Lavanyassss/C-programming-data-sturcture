#include <stdio.h>
int main(){
  int i = 1, n, fact = i;
  printf("Enter the number: ");
  scanf("%d",&n);
  do {
    fact = fact * i;
    i++;
  } while (i <= n);
  printf("Factorial of %d is %d" , n, fact);
}
 