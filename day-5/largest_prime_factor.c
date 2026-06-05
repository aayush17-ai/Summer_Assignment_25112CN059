#include<stdio.h>
int main(){
int n,i;

printf("Enter the number");
scanf("%d",&n);

 for (i = 2; i <= n; i++) {
 while (n % i == 0) {
 n = n / i;
  }
 }

 printf("Largest prime factor = %d\n", i - 1);

return 0;




}