#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  no               cout<<"No"<<endl
#define  yes              cout<<"Yes"<<endl
#define  mod       1000000007
#define  N        1002
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
ll bigmod(ll a,ll b,ll MOD) ///a=base,b=power;
{
    ll res=1LL;
    while(b)
    {
        if(b%2==1)res=(res*a)%MOD;
        a=(a*a)%MOD;
        b/=2;
    }
    return res;
}
void solve()
{
    map<ll,ll>mp,mp1;
    vector<ll>v;
    ll n,m,j,i,y,z,l,r,x,k;
    cin>>n;
    x=bigmod(2,n,mod);
    cout<<x<<endl;
 
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
