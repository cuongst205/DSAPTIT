#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   int i=0;
   int s=0;
   while(i<=n){
    s+=pow(-1,i+1)*i;
    i++;
   }
   cout<<s;
    return 0;
}



