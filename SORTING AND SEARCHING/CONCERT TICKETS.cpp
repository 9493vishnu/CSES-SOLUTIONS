#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m;
  cin>>n>>m;
  vector<int>arr(n),arr1(m);
  multiset<int>mt;
  for(int i=0;i<n;i++)
  {
       cin>>arr[i];
       mt.insert(arr[i]);
  }
 for(int i=0;i<m;i++)
 {
         cin>>arr1[i];
 }
 
 for(int i=0;i<m;i++)
 { 
        auto it=mt.upper_bound(arr1[i]);
        //int idx=distance(arr.begin(),it);
        
        if(it!=mt.begin())
        {
                cout<<*(--it)<<endl;
                mt.erase(it);
        }
        else 
        {
           cout<<-1<<endl;
        }
       // cout<<idx<<arr[idx]<<endl;
  }
}
int main()
{
        solve();
        return 0;
}