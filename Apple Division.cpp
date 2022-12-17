#include<bits/stdc++.h>
using namespace std;
#define  ll long long
 
void solve()
{
    vector<ll>v,v1;
    map<ll,ll>mp;
    ll n,m,j,i,k,len,z,p,x,y;
    cin>>n;
    ll a[n+2];
    ll sum=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    x=powl(2,n);
    ll c=0;
    ll mn=1e14;
    vector<vector<int>>ans;
    while(c<x)
    {
       // vector<int>v;
        k=0;
        for(i=0; i<n; i++)
        {
            if(c&(1<<i))
            {
                k+=a[i];
                //v.push_back(a[i]);
            }
        }
        c++;
        mn=min(mn,abs(sum-2*k));
    }
    cout<<mn<<endl;
 
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
