#include<bits/stdc++.h>
using namespace std;
#define  ll      long long
#define  NO      cout<<"NO"<<endl
#define  YES     cout<<"YES"<<endl
#define  no      cout<<"No"<<endl
#define  yes     cout<<"Yes"<<endl
#define  mod     1000000007
#define  mx      10000000007
#define  N       100005
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    vector<ll>v;
    map<ll,ll>mp;
    ll n,j,i,z,l,r,x,k,m,y;
    string s,t;
    cin>>n;
    ll a[n+1];
    for(i=1; i<=n; i++)
    {
        ll sum=(i*i)*((i*i)-1)/2;
        x=2*2*(i-2)*(i-1);
        ll ans=sum-x;
        cout<<ans<<endl;
    }
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
