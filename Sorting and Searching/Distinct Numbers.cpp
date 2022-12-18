#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  mod       1000000007
#define  N       1000000
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    vector<ll>v;
    map<ll,ll>mp;
    set<ll>s;
    ll n,j,i,y,z,l,r,d,x,k,m;
    cin>>n;
    ll a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    cout<<s.size()<<endl;
 
}
int main()
{
    fast;
    int T=1;
    // cin>>T;
    while(T--)solve();
    return 0;
}
