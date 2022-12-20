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
    string s,t="";
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    v.push_back(a[0]);
 
    for(i=1;i<n;i++)
    {
        ll up=upper_bound(v.begin(),v.end(),a[i])-v.begin();
 
        if(up==v.size())
        {
            v.push_back(a[i]);
        }
        else{
            v[up]=a[i];
        }
    }
    cout<<v.size()<<endl;
 
//    for(i=0;i<v.size();i++)
//    {
//        cout<<v[i]<<" ";
//    }
//    cout<<endl;
 
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
