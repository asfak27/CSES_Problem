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
    cin>>n>>m;
    if(n==m)
    {
        cout<<(n*n)-(n-1)<<endl;
    }
    else if(n>m)
    {
        if(n%2==1)
        {
            ll ans=(n-1)*(n-1);
            cout<<ans+m<<endl;
        }
        else{
            ll ans=n*n;
            cout<<ans-m+1<<endl;
        }
    }
    else
    {
        if(m%2==0)
        {
            ll ans=(m-1)*(m-1);
            cout<<ans+n<<endl;
        }
        else{
            ll ans=m*m;
            cout<<ans-n+1<<endl;
        }
 
    }
 
}
int main()
{
    fast;
    int T=1;
    cin>>T;
    while(T--)solve();
    return 0;
}
