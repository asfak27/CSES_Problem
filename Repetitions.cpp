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
    string s;
    cin>>s;
    ll mx=1;
    ll c=1;
    for(i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
        }
        else{
 
            mx=max(mx,c);
            c=1;
        }
    }
    cout<<max(mx,c)<<endl;
 
 
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
