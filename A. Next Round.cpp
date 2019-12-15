#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    int a[100];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    int alo=a[k-1];
    for(int i=0;i<n;i++){
        if(a[i]>=alo && a[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
