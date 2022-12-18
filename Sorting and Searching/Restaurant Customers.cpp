#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  N    100005
#define  mod       998244353
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return a.second > b.second;
}
void solve()
{
    //freopen("textnew.txt","r",stdin);
    vector<pair<ll,ll>>v;
    multiset<ll>s;
    map<ll,ll>mp;
    ll n,e,i,j,l,m,x,y,z,r,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,1});
        v.push_back({y,-1});
    }
    sort(v.begin(),v.end());
 
   /* cout<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;*/
 
    ll sum=0;
    ll mx=0;
    ll ans=0;
    for(i=0;i<v.size();i++)
    {
        sum+=v[i].second;
        ans=max(sum,ans);
    }
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
