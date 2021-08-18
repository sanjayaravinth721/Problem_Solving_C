#include<stdio.h>
int main(){
    char a[100];
    scanf("%s",a);
    char b[100];
    scanf("%s",b);
    int n;
    int m;
    for(n=0;a[n];n++);
    n--;
    for(m=0;b[n];m++);
    m--;
    int ind=0;
    int ind1=0;
    while(a[ind]){
        if(a[ind]==b[ind1]){
            ind++;
            ind1=1;
            while(a[ind]&&b[ind1]&&a[ind]==b[ind1]){
                ind++;
                ind1++;
            }
            if(b[ind1]==0 || a[ind]==0){
                break;
            }
        }
        else{
            ind++;
        }
    }
    
 
        printf("%d",ind-m);
    
}