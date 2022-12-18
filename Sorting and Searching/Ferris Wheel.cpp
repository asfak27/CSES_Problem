#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,m,j=0,y,i,k,x,d,l,r,mod=1e9+7;
    cin>>n>>k;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll c=0,sum=0;
    sort(a,a+n);
    /*for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;*/
    ll ans=n;
    i=n-1;
    j=0;
    while(j<i)
    {
        if(a[i]+a[j]<=k)
        {
            ans--;
            i--;
            j++;
        }
        else i--;
    }
 
    cout<<ans<<endl;
}
int main()
{
    int T=1;
   // cin>>T;
    while(T--)solve();
    return 0;
}
