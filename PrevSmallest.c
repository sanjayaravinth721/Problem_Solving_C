#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f=0;
    printf("%d ",-1);
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(a[i]>a[j]){
                f=0;
                printf("%d ",a[j]);
                break;
            }
            else{
                f=1;
            }
            
        }
        if(f==1){
            printf("%d ",-1);
        }
    }
}
