#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  N    100005
#define  mod       998244353
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    //freopen("textnew.txt","r",stdin);
    // vector<ll>v;
    multiset<ll>s;
    map<ll,ll>mp;
    ll n,e,i,j,l,m,x,y,z,r,k;
    cin>>n>>m;
    ll a[n+2];
    ll sum=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(mp.count(m-a[i]))
        {
            cout<<mp[m-a[i]]<<" "<<i+1<<endl;
            return;
        }
        mp[a[i]]=i+1;
    }
    cout<<"IMPOSSIBLE"<<endl;
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
