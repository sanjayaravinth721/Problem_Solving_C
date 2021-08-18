#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1;
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int n2;
    scanf("%d",&n2);
    int b[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    int *new = (int*)calloc(n1+n2,sizeof(int));
    int k=n1+n2;
    //printf("Size of Allowcation is :%d",k);
    int p=0;
    for(int i=0;i<n1;i++){
        new[p++]=a[i];
    }

    for(int i=0;i<n2;i++){
        new[p++]=b[i];
    }
    
    for(int i=0;i<k;i++){
        printf("%d ",new[i]);
    }
 
}