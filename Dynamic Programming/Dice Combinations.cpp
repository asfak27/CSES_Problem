#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define N 1000005
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
ll dp[N];
ll dfs(ll n)
{
    if(n==0)return 1;
    if(n<0)return 0;
 
    if(dp[n]!=-1)return dp[n];
 
    ll ans=0;
    for(ll i=1;i<=6;i++)
    {
        ans+=dfs(n-i)%mod;
    }
    return dp[n]=ans%mod;
}
void solve()
{
    // freopen("textnew.txt","r",stdin);
    memset(dp,-1,sizeof dp);
    vector<ll> v;
    map<string,ll> mp;
    map<ll, ll> pp;
    ll n,k,i,j;
    cin>>n;
    ll ans=dfs(n);
    cout<<ans<<endl;
}
int main()
{
    fast;
    // count_divisor();
    int T = 1;
   // cin>>T;
    while (T--)
        solve();
    return 0;
}
