#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for (ll i= 0; i < n; ++i)
  {
          /* code */
        cin>>arr[i];
  }
  ll res=0;
  sort(arr.begin(),arr.end());
 ll tar=arr[n/2];
 for(ll i=0;i<n;i++)
 {
     res+=abs(arr[i]-tar);
 }
  cout<<res<<endl;
}
int main()
{
        solve();
        return 0;
}