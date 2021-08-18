#include<stdio.h>
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int A[n];
    printf("enter the array:");    
    for(int i =0 ;i<n ;i++){
        scanf("%d",&A[i]);
    }
    printf("the rotation of k :");
    int k=2;
    while(k){
        int m = A[n-1];
        for(int i =n-1;i>0;i--){
            A[i]=A[i-1];
        }
        A[0]=m;
        k--;
    }
    for(int i=0;i<n ; i++){
            printf("%d",A[i]);
    }
    return 0;
}