#include <stdio.h>
#include <string.h>

void calculate(int arr1[],int arr2[],int n,int m){
   
    int i=n-1;
    int j=m-1;
    int k=n-1;
    int s=0;
    int carry=0;
    int sum[k];
    while(j>=0){
       s=arr1[i]+arr2[j]+carry;
       sum[k]=s%10;
       carry=s/10;
        i--;
        j--;
        k--;
    }
    while(i>=0){
        s=arr1[i]+carry;
        sum[k]=s%10;
        carry=s/10;
        i--;
        k--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum[i]);
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    
    if(n>=m){
        calculate(a,b,n,m);
    }
    else{
        calculate(b,a,m,n);
    }

    return 0;
}
