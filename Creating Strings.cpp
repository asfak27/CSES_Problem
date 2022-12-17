#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  no               cout<<"No"<<endl
#define  yes              cout<<"Yes"<<endl
#define  mod       1000000007
#define  N        1002
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    map<ll,ll>mp,mp1;
    vector<string>v;
    ll n,m,j,i,y,z,l,r,x,k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    do
    {
        v.push_back(s);
    }
    while(next_permutation(s.begin(),s.end()));
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)solve();
    return 0;
}
