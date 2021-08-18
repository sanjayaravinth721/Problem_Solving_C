#include<stdio.h>
#include<string.h>
int main(){
    int p1=0;
    int p2=0;
    int e=0;
    
    char a[100];
    scanf("%[^\n]s",a);
    int n = strlen(a);
    for(int i=0;a[i];i++){
        if(a[i]=='w'|| a[i]=='n'){
            e++;
        }
        else if(a[i]>='0' && a[i]<='9'){
            if(a[i]==a[0] || a[i]==a[n-1] || a[i]==a[n/2]){
                p1=p1+(a[i]-48);
            }
            else{
                p2=p2+(a[i]-48);
            }
        }
    }
    printf("P1 = %d ",p1);
    printf("\nP2 = %d ",p2);
    printf("\nExtras = %d ",e);
}