#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=n;i<=k;i++){
        if(k>=100){
            printf("%03d ",i);
        }
        else if(k>=10){
            printf("%02d ",i);
        }
        else{
            printf("%d ",i);
        }
    }
}