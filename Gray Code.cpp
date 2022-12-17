#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define no cout << "No" << endl
#define yes cout << "Yes" << endl
#define N 500006
#define mod 1000000007
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
string decToBinary(ll n,ll k)
{
    string s="",t="";
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k&1)s+='1';
        else s+='0';
    }
    bool f=false;
    ll cnt=0;
    for(ll i=s.size()-1; ; i--)
    {
        t+=s[i];
        cnt++;
        if(cnt==k)break;
    }
    return t;
}
void solve()
{
    // freopen("textnew.txt","r",stdin);
    vector<string> v, p;
    // set<ll> st;
    map<ll, ll> mp, pp;
    ll n, e, i, j, l, m, x, y, z, r, k;
    string s,t="" ;
    cin >> n;
    x=(1<<n);
    for(i=0;i<x;i++)
    {
        s=decToBinary(i,n);
        reverse(s.begin(),s.end());
        v.push_back(s);
    }
 
    ll a[x+1][n+1];
    for(i=0;i<=x;i++)
    {
        for(j=0;j<=n;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=0;i<x;i++)
    {
        a[i][0]=v[i][0]-'0';
    }
 
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;*/
 
    for(i=0;i<v.size();i++)
    {
        for(j=1;j<n;j++)
        {
            l=v[i][j]-'0';
            r=v[i][j-1]-'0';
            a[i][j]=(l^r);
        }
    }
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
 
 
 
}
int main()
{
    fast;
    int T = 1;
   // cin >> T;
    while (T--)
        solve();
    return 0;
}
