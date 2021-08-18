#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i;
    for(i=1;i<n;i=i+2){
        for(int j=i+2;j<n;j=j+2){
        if(a[i]>a[j]){
            int t = a[i];
            a[i]=a[j];
            a[j]=t;
         
        }
        }
    }
    int k;
    for( k=0;k<n;k=k+2){
        for(int j=k+2;j<n;j=j+2){
        if(a[k]<a[j]){
            int t = a[k];
            a[k]=a[j];
            a[j]=t;
        }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
   
}