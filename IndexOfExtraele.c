#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n-1];
    for(int i=0;i<n-1-1;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            printf("%d",i);
            break;
        }
    }
}