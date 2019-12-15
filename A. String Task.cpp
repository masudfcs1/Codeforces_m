#include<cstring>
#include<cstdio>
 
int main()
{
    char arr[101];
    scanf("%s",arr);
    int len=strlen(arr);
    for(int i=0;i<len;i++){
 
        if(arr[i]!='a' &&arr[i]!='e'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u'&&arr[i]!='y'&&
           arr[i]!='A'&& arr[i]!='E'&&arr[i]!='I'&&arr[i]!='U'&&arr[i]!='O'&&arr[i]!='Y'){
            if(arr[i]<='Z') arr[i]+=32;
            printf(".%c",arr[i]);
           }
    }
    printf("\n");
    return 0;
}
