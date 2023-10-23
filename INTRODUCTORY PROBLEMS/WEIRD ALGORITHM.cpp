#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   ll n;
   cin>>n;
   cout<<n<<" ";
   while(n!=1 and n>0)
   { 
        if(n%2!=0)
        {
                n=n*3 +1;
                cout<<n<<" ";
        }
        else
        {
                n/=2;
                cout<<n<<" ";
        }
   }
}
int main()
{
        solve();
        return 0;
}