#include<bits/stdc++.h>
using namespace std;
void solve()
{
   string s;
   cin>>s;
   int res=1;
   char c=s[0];
   int maxi=1;
   for(int i=1;i<s.size();i++)
   {
      if(s[i]==c)
      {
        maxi++;
        res=max(res,maxi);
      }
      else
      {
        c=s[i];
        maxi=1;
      }
   }
   cout<<res<<endl;
}
int main()
{
        solve();
        return 0;
}