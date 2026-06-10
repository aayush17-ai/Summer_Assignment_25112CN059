#include<stdio.h>
int main(){
int i,row;

printf("Enter the number of rows:");
scanf("%d",&row);

for(i=1;i<=row;i++){
    for(int j=5;j>=i;j--){

        printf(" * ");
    }
    printf("\n");
}
return 0;
}