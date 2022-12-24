#include<bits/stdc++.h>
using namespace std;
#define ll  int
#define mx 5000
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
ll dp[5001][5001];
string s,t;
ll dfs(ll i,ll j)
{
    if(i==s.size() || j==t.size())
    {
        return max((int)s.size()-i,(int)t.size()-j);
    }
    if(dp[i][j]!=-1)return dp[i][j];
    ll ans;
    if(s[i]==t[j])
    {
        ans=dfs(i+1,j+1);
    }
    else{
 
        ll x=1+dfs(i,j+1);//add
        ll y=1+dfs(i+1,j);//remove
        ll z=1+dfs(i+1,j+1);//replace
        ans=min(min(x,y),z);
    }
    return dp[i][j]=ans;
}
void solve()
{
    memset(dp,-1,sizeof(dp));
    ll n,m,i,j;
    cin>>s>>t;
    ll ans=dfs(0,0);
    cout<<ans<<endl;
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
