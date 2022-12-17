#include<bits/stdc++.h>
using namespace std;
#define  ll      long long
#define  NO      cout<<"NO"<<endl
#define  YES     cout<<"YES"<<endl
#define  no      cout<<"No"<<endl
#define  yes     cout<<"Yes"<<endl
#define  mod     1000000007
#define  mx      10000000007
#define  N       100005
#define  M       17
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    map<ll,ll>mp;
    ll n,j,i,z,l,r,x,k,m,y;
    string s,t;
    cin>>n;
 
    k=1;
    ll sum=0;
    while(n>=sum)
    {
        sum+=9*k*powl(10,k-1);///find the total index
        k++;
    }
    k--;
    ll away=(sum-n)/k;
    ll rem=(sum-n)%k;
 
    ll num=(powl(10,k)-1)-away;
 
    s=to_string(num);
 
    cout<<s[s.size()-1-rem]<<'\n';
}
int main()
{
    fast;
    int T=1;
    cin>>T;
    while(T--)solve();
    return 0;
}
