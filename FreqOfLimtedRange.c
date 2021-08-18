#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p;
    int count=1;
    int k=0;
    scanf("%d",&p);
    for(int i=0;i<n;i++){
        int b=a[k];
        if(b==a[i]){
            count++;
        }
        printf("\n%d occurs %d times ",b,count);
        k++;
    }

    
}