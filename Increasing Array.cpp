#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  mod       1000000007
#define  N        1002
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    vector<ll>v,v1;
    map<ll,ll>mp;
    ll n,m,j,i,k,len,z,p,x,y;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])sum+=abs(a[i]-a[i-1]),a[i]=a[i-1];
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
