#include<stdio.h>
int main(){
    int n;
    int s;
    scanf("%d%d",&n,&s);
    int a[n+n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            a[i][j]=s;
             printf("%d ",a[i][j]);
        }
        printf("\n");
        s=s+1;
        
    }
    s--;
    int k=n;
    for(int i=n;i<n+n;i++){
        
        for(int j=0;j<k;j++){
            a[i][j]=s;
            printf("%d ",a[i][j]);
        }
        k=k-1;
        s=s-1;
        printf("\n");
        
    }

   
}