#include<stdio.h>

void swap(int *a,int *b){
    int t = *a;
    *a=*b;
    *b=t;
}
int search(int a,int b[],int n){
    int c;
    for(int i=0;i<n;i++){
        if(b[i]==a){
            if(i+1==n){
                c=0;
                break;
            }
            c=b[i+1];
            break;
        }
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>b[j]){
                swap(&b[i],&b[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        int k = search(a[i],b,n);
        if(i<n-1){
            if(k==0){
                printf("%d->, ",a[i]);
            }
            else{
                printf("%d->%d, ",a[i],k);
            }
        }else{
            if(k==0){
                printf("%d->",a[i]);
            }
            else{
               printf("%d->%d",a[i],k);
            }
        }
    }

}