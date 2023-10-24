#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll res=1;
    sort(arr.begin(),arr.end());
        for(ll i=0;i<n;i++)
        {
          if(arr[i]<=res) res+=arr[i];
          else break;       
        }
        cout<<res<<endl;
}
int main()
{
        solve();
        return 0;
}