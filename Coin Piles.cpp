#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  mod       1000000007
#define  N       10000
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
vector<ll>g[N];
void solve()
{
    // vector<ll>v;
    map<ll,ll>mp1;
    ll n,j,i,y,z,l,r,d,x,k,m;
    cin>>n>>m;
    x=max(n,m);
    y=min(n,m);
    if(y*2<x)
    {
        no;
    }
    else if(x==y*2)
    {
        yes;
    }
    else if(x==y && x%3==0)
    {
        yes;
    }
    else{
 
       l=x%3;
       r=y%3;
       if(l==r && l==0)yes;
       else if((l==2 && r==1)|| (l==1 &&r==2))yes;
       else no;
 
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
