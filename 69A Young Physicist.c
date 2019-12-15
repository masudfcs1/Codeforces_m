#include<stdio.h>
 
 int main()
 {
     int i,n,sum1=0,sum2=0,sum3=0,a,b,c;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
     scanf("%d%d%d",&a,&b,&c);
     sum1+=a;
     sum2+=b;
     sum3+=c;
 
 
     }
     if(sum1==0&&sum2==0&&sum3==0){
        printf("YES\n");
     }
     else
        printf("NO\n");
 
 
 
 
     return 0;
 }
