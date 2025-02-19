#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   int i=0;
   float s=0;
   while(i<=n){
    s+=(2*i+1)/(float)(2*i+2);
    i++;
   }
   cout<<s;
    return 0;
}



