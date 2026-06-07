#include <stdio.h>
int rev = 0;

int reverse(int n);
int main()
{
int n, c;

 printf("Enter the number: ");
scanf("%d", &n);

c = reverse(n);

 printf("The reverse number is = %d", c);

return 0;
}

int reverse(int n)
{
if (n > 0){
rev = rev * 10 + n % 10;
reverse(n / 10);
}
 return rev;
}