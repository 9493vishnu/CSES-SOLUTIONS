#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   ll n;
   cin>>n;
   vector<ll>arr(n);
   for(ll i=0;i<n;i++)
   {
        cin>>arr[i];
 
   } 
   ll mini=arr[0];
   ll diff=0;
   ll res=0;
   for(ll i=1;i<n;i++)
   {
        if(arr[i]<arr[i-1])
        {
                res+=arr[i-1]-arr[i];
                arr[i]=arr[i-1];
        }
   }
   cout<<res<<endl;
}
int main()
{
        solve();
        return 0;
}