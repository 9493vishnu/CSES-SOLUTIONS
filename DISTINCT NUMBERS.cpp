#include<bits/stdc++.h>
using namespace std;
void solve()
{
        int n;
        cin>>n;
        vector<int>arr(n);
        int res=0;
        set<int>st;
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
                st.insert(arr[i]);
        }
        cout<<st.size()<<endl;
 
 
}
int main()
{
        solve();
        return 0;
}