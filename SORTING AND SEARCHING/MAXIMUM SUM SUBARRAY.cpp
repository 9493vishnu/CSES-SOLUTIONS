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
long long  res=INT_MIN;
ll maxi=0;
for(ll i=0;i<n;i++)
{ 
        
        if((maxi<0 and arr[i]>0) or (maxi<0 and arr[i]>maxi))
        {
                maxi=0;
                
        }
        maxi+=arr[i];
        
                res=max(res,maxi);
        
}
cout<<res<<endl;
}
int main()
{
        solve();
        return 0;
}