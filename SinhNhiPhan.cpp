#include <bits/stdc++.h>
using namespace std;

int a[100];int ok=1,n;
void sinh(int n, int a[]){
    int i=n-1;
    while(i>=0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0){
        ok=0;
    }else a[i]=1;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        a[i]=0;
    }

    while(ok == 1){
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
        sinh(n,a);

    }

    return 0;
}



