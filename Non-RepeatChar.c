
#include<stdio.h>

int main() {

    char a[100];
    scanf("%s",a);
    int b[256]={0};
    
    for(int i=0;a[i];i++){
        (b[a[i]])++;
        char p = a[i];
        
    }
    int f=1;
    int j=0;
    for(int i=0;a[i];i++){
        for(int j=0;j<256;j++){
            if(b[j]>=1){
                if(j==a[i] && b[j]==1){
                    printf("%c",a[i]);
                    f=0;
                    break;
                    
                }
            }
        }
        if(f==0){
            break;
        }
    }
 
    return 0;
}
