#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++){
        int sum=0;
        if(a[i]>=0){
            for(int j=i+1;j<=i+k;j++){
                sum=sum+a[j%n];
                b[i]=sum;
            }
        }
        else{
            for(int j=i-1;j>=i+k;j--){
                sum=sum+a[(i+n)%n];
                b[i]=sum;
            }
        }
    }


    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}