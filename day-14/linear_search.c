#include<stdio.h>
int main(){

    int arr[100],n,k,i;

    printf("Enter number of terms");
    scanf("%d",&n);

    printf("Enter elements-\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search-");
    scanf("%d",&k);

    for(i=0;i<n;i++){
        if(arr[i]==k){
            printf("Element found at postion-%d\n",i+1);
            break;
        }
    }

    if(i==n){
        printf("Element not found\n");
    }
return 0;
}