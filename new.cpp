#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>n/2;i--)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}