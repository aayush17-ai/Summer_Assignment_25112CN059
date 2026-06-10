#include<stdio.h>
int main(){
int i;

for (i=0;i<=5;i++){
    for(int j=0;j<=5-i;j++){
        printf(" ");
    }

for(int j=0;j<=i;j++){
    printf("%c",'A'+j);
}
for(int j=i-1;j>=0;j--){
    printf("%c",'A'+j);
}
printf("\n");
}
return 0;
}