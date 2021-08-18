#include<stdio.h>
void swap(char *a,char *b){
    char temp=0;
    temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    char a[15];
    char b[4];
    int k=0,l=0;
    scanf("%s",a);
    scanf("%s",b);
    int n= sizeof(a)/sizeof(a[0]);
    int m =sizeof(b)/sizeof(b[0]);
   printf("len of a =%d",n);
    for(int i=0;b[i];i++){
        if(b[i]>b[i+1]){
            swap(&b[i],&b[i+1]);
            int i=-1;
        }
    }
    printf("\n%s",b);
    for(int i=0;a[i];i++){
        if(a[i]==b[i]){
            k=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==b[i]){
            l=i;
            break;
        }
    }
    for(int i=k;i<=l;i++){
        printf("\n%c",a[i]);
    }

    
    
}