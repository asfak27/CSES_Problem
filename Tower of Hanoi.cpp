#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  N    100005
#define  mod       998244353
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
vector<pair<ll,ll>>v;
void dfs(ll n, ll st, ll mid, ll ed)
{
    if(n)
    {
        dfs(n-1, st, ed, mid);
        v.push_back({st, ed});
        dfs(n-1, mid, st, ed);
    }
    return ;
}
void solve()
{
    //freopen("textnew.txt","r",stdin);
    //vector<ll>v,p,ans;
    map<ll,ll>mp;
    set<ll>st;
    ll n,e,i,j,l,m,x,y,z,r,k;
    cin>>n;
    dfs(n,1,2,3);
    cout<<(1<<n)-1<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
 
}
int main()
{
    fast;
    ll T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
