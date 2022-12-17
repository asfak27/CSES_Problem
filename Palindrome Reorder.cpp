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
 
    vector<string>v;
    map<ll,ll>mp,mp2;
    ll n,m,j,i,y,z,l,r,x,k;
    string s,t="",p="",q="";
    cin>>s;
    ll len=s.size();
    for(i=0;i<len;i++)
    {
        mp[s[i]-'A']++;
    }
    ll c=0;
    for(i=0;i<26;i++)
    {
        if(mp[i]%2==1)c++;
    }
    if(c>=2)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    for(i=0;i<26;i++)
    {
        if(mp[i]%2==1)
        {
            for(j=0;j<mp[i];j++)
            {
                q+=char(i+'A');
            }
            break;
        }
    }
    for(i=0;i<26;i++)
    {
        if(mp[i]%2==0)
        {
            for(j=0;j<mp[i]/2;j++)
            {
                t+=char(i+'A');
            }
            for(j=0;j<mp[i]/2;j++)
            {
                p+=char(i+'A');
            }
 
        }
    }
    cout<<t<<q;
    reverse(p.begin(),p.end());
    cout<<p<<endl;
 
 
}
int main()
{
    fast;
    int T=1;
   // cin>>T;
    while(T--)solve();
    return 0;
}
