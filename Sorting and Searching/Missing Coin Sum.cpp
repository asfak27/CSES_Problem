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
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll sum=1;
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
       if(sum<a[i])break;
       else sum+=a[i];
    }
    cout<<sum<<endl;
 
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
