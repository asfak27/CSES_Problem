#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  N    100005
#define  mod       998244353
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
char a[20][20];
ll diagon1[20];
ll diagon2[20];
ll row[20];
ll cnt;
 
void dfs(ll j)
{
    if(j==8)
    {
        cnt++;
        return;
    }
    for(ll i=0;i<8;i++)
    {
        if(a[i][j]=='.' && diagon1[i-j+7]==0 && diagon2[i+j]==0 && row[i]==0)
        {
            diagon1[i-j+7]=1;
            diagon2[i+j]=1;
            row[i]=1;
            dfs(j+1);
            diagon1[i-j+7]=0;
            diagon2[i+j]=0;
            row[i]=0;
        }
    }
}
 
void solve()
{
    //freopen("textnew.txt","r",stdin);
    vector<ll>v,p,ans;
    map<ll,ll>mp;
    set<ll>st;
    ll n,e,i,j,l,m,x,y,z,r,k;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
    }
    dfs(0);
    cout<<cnt<<endl;
 
 
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
