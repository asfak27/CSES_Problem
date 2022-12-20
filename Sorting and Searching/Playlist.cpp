#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll       long long int
#define mod      1000000007
#define N        200005
#define yes      cout<<"Yes"<<endl
#define no      cout<<"No"<<endl
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve()
{
    //freopen("textnew.txt","r",stdin);
    vector<ll>v;
    map<ll,ll>mp;
    ll e,i,j,l,m,x,y,z,r,n,k;
    string s,t;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mx=0;
    i=0;
    j=0;
    while(j<n)
    {
        if(mp[a[j]]==0)
        {
            mp[a[j]]++;
            j++;
            mx=max(mx,j-i);
        }
        else{
 
            mp[a[i]]--;
            i++;
 
        }
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
