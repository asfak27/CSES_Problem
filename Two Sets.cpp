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
    x=n*(n+1)/2;
    if(x%2==1)
    {
        no;
        return;
    }
    x/=2;
    ll sum=0;
    for(i=n;i>=1;i--)
    {
        sum+=i;
        v.push_back(i);
        mp[i]++;
        if(sum==x)break;
        if(x-sum<i)
        {
            mp[x-sum]++;
            v.push_back(x-sum);
            break;
        }
    }
    yes;
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<n-v.size()<<endl;
    for(i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
 
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
