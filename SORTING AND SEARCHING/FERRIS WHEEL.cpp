#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c;
    cin>>n>>c;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
  
    int res=0;
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i<=j)
    {
        if(arr[j]==c)
        {
                res++;
                j--;
        }
        else if(arr[i]+arr[j] <=c)
        {
          res++;
          i++;
          j--;
        }
        else
        {
                res++;
                j--;
        }
    }
    cout<<res;
}
int main()
{
        solve();
        return 0;
}