#include<stdio.h>
int swap(int *a,int *b){
    int t = *a;
    *a=*b;
    *b=t;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int j=i+1;
        if(a[i]>a[j]){
            swap(&a[i],&a[j]);
            i=-1;
        }
    }

    for(int i=0,j=n-1;i<n;i++,j--){
        printf("%d %d ",a[j],a[i]);
    }

}