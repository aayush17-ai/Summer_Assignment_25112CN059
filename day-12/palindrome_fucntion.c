#include<stdio.h>

int palindrome(int num) {
int original = num, reverse = 0, rem;

while (num > 0) {
rem = num % 10;
 reverse = reverse * 10 + rem;
 num = num / 10; 
 }

 return (original == reverse);
}

int main() {
 int num;

printf("Enter a number: ");
scanf("%d", &num);

if (palindrome(num))
    printf("Palindrome Number\n");
 else
  printf("Not a Palindrome Number\n");

return 0;
}