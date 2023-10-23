#include<bits/stdc++.h>
using namespace std;
void solve()
{
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>arr(n),arr1(m);
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }
        for(int i=0;i<m;i++)
        {
                cin>>arr1[i];
        }
        int res=0;
        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());
        int i=0,j=0;
        while(i<n and j < m)
        {
                if(abs(arr[i]-arr1[j])<=k)
                {
                        res++;
                        i++;
                        j++;
                }
                else if(arr[i]>arr1[j])
                {
                        j++;
                }
                else
                {
                        i++;
                }
        }
        cout<<res;
}
int main()
{
        solve();
        return 0;
}