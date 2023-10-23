#include<bits/stdc++.h>
using namespace std;
void solve()
{
        int n;
        cin>>n;
        vector<int>arr(n+1,0);
        for(int i=0;i<n-1;i++)
        {
                int val=0;
                cin>>val;
                arr[val]=1;
 
        }
        //sort(arr.begin(),arr.end());
       for(int i=1;i<=n;i++)
       {
          if(arr[i]==0)
          {
                cout<<i<<endl;
                break;
          }
       }
}
int main()
{
        solve();
        return 0;
}