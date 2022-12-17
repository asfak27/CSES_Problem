
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  no               cout<<"No"<<endl
#define  yes              cout<<"Yes"<<endl
#define  mod       1000000007
#define  N        1002
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    map<ll,ll>mp,mp1;
    vector<ll>v;
    ll n,m,j,i,y,z,l,r,x,k;
    cin>>n;
    ll ans=0;
    for(i=5;i<=n;i*=5)
    {
        ans+=(n/i);
    }
    cout<<ans<<endl;
 
}
int main()
{
    fast;
    int T=1;
   // cin>>T;
    while(T--)solve();
    return 0;
}
