#include <stdio.h>

int main() {
    int n, rev = 0, digit,a;

    printf("Enter a number: ");
    scanf("%d", &n);
    a=n;

    while (n > 0) {
        digit = n % 10;      
        rev = rev * 10 + digit; 
        n = n / 10; }       
    if(a==rev)
        printf("The given number is palindrome");

    
    else printf("not a palindrome");
    

   

    return 0;
}