#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    scanf("%s",a);
    //int b[100];
    
    for(int i=0;a[i];i++){
        if(a[i]>='0' && a[i]<='9'){
            for(int j=0;j<(a[i]-48);j++){
                printf("%c",a[i-1]);
            }
        }
    }

    
}