#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int n = strlen(a);
    int m=n/2;
    char b[100]; //grampro
    int k=0;
    for(int i=m;i<n;i++){
        
        b[k++]=a[i];
    }
    for(int i=0;i<m;i++){
        b[k++]=a[i];
    }

    for(int i=0;i<n;i++){
        printf("%c ",b[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c$ ",b[j]);
        }
        printf("\n");
        
    }
}