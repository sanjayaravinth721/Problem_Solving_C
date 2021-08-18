#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char a[17];
    scanf("%s",a);

    long long int d=0;
    int val;
    int n=strlen(a);
    n=n-1;

    for(int i=0;a[i]!='\0';i++){
        if(a[i]>='0' && a[i]<='9'){
            val = a[i]-48;
        }
        else if(a[i]>='a' && a[i]<='g'){
            val= a[i]-97+10; 
        }
        else if(a[i]>='A' && a[i]<='G'){
            val = a[i]-65+10;
        }

        d=d+val*pow(17,n);
        n--;
    }

    printf("%lld",d);



}