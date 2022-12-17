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
    if(n<=3 && n!=1)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    if(n==4)
    {
        cout<<"2 4 1 3"<<endl;
        return;
    }
    for(i=1;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    for(i=2;i<=n;i+=2)
    {
        cout<<i<<" ";
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
