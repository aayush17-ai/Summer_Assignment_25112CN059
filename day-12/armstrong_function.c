#include<stdio.h>
int armstrong(int n){

int d,temp,s=0;


temp=n;
while(n>0){
d=n%10;
s=s+d*d*d;
n=n/10;
}
return (s==temp);
}

int main(){
    int n;

    printf("Enter the number");
    scanf("%d",&n);

    if(armstrong(n))
    printf("Armstrong number\n");
    else printf("Not an armstrong number\n");

    return 0;
}