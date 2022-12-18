#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,m,j=0,y,i,k,x,c,d,l,r,mod=1e9+7;
    cin>>n>>m>>k;
    ll a[n+1],b[m+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    ll sum=0;
    sort(a,a+n);
    sort(b,b+m);
    i=0;
    j=0;
    while(i<n && j<m)
    {
        if(abs(a[i]-b[j])<=k)
        {
            sum++;
            i++;
            j++;
        }
        else if(a[i]<b[j])i++;
        else j++;
    }
    cout<<sum<<endl;
}
int main()
{
    int T=1;
   // cin>>T;
    while(T--)solve();
    return 0;
}
 
