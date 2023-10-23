#include<bits/stdc++.h>
using namespace std;
void solve()
{
        int n,tar;
        cin>>n>>tar;
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;i++)
        {
                int val=0;
                cin>>val;
                arr[i]={val,i};
 
        }
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        while(i<j)
        {
                if(arr[i].first+arr[j].first ==tar)
                {
                        cout<<arr[i].second+1<<" "<<arr[j].second+1<<endl;
                        break;
                }
                else if(arr[i].first+arr[j].first <tar)
                {
                        i++;
                }
                else
                {
                        j--;
                }
        }
        cout<<"IMPOSSIBLE"<<endl;
}
int main()
{
        solve();
        return 0;
}