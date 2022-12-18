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
    vector<ll>v;
    map<ll,ll>mp;
    map<ll,ll>pp;
    ll n,e,i,j,l,m,x,y,z,r,k;
    cin>>n;
    ll a[n+2];
    ll sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mx=-1e9;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        mx=max(mx,sum);
        if(sum<0)sum=0;
    }
    cout<<mx<<endl;
 
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
