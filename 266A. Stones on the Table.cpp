#include<stdio.h>
#include<string.h>
 int main()
 {
     int i,n,a=0,b=0,c=0;
     scanf("%d\t",&n);
     char arr[n];
        gets(arr);
    for(i=0;i<n;i++){
 
        if(arr[i]=='R') while(arr[i+1]=='R'){
            a++;
            i++;
 
        }
        if(arr[i]=='G') while(arr[i+1]=='G'){
            b++;
            i++;
        }
        if(arr[i]=='B') while(arr[i+1]=='B'){
            c++;
            i++;
        }
 
 
 
 
    }
    printf("%d\n",a+b+c);
 
    return 0;
 }
