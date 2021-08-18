#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    int n=strlen(s);
    char m[100];
    for(int i=0;i<n;i++){
        m[i]=s[i];
    }
    for(int i=0;i<n;i++){
        
        if(s[i]>=48 && s[i]<=57){
            if(s[i]!='9'){
               printf("%c",m[i]);
            }
            if(s[i]=='9'){
                s[i]=' ';
            }
            while(s[i]=='9'){
                break;
            }
           
        }
       
        
    
    }
   
    
}