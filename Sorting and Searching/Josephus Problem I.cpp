#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  N    100005
#define  mod       998244353
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    //freopen("textnew.txt","r",stdin);
    vector<ll>v,p,ans;
    map<ll,ll>mp;
    set<ll>st;
    ll n,e,i,j,l,m,x,y,z,r,k;
    cin>>n;
 
    deque<ll>q;
    for(i=1; i<=n; i++)
    {
        q.push_back(i);
    }
    ll cnt=0;
    while(!q.empty())
    {
        cnt++;
 
        if(cnt%2==0)
        {
            cout<<q.front()<<" ";
            q.pop_front();
        }
        else{
 
            x=q.front();
            q.pop_front();
            q.push_back(x);
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
