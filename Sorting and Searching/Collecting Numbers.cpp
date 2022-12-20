#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=1;i<=n;i++)
    {
        ll num;
        cin>>num;
        v.push_back({num,i});
    }
    sort(v.begin(),v.end());
    ll ans=1;
    for(ll i=1;i<v.size();i++)
    {
        if(v[i].second<v[i-1].second)
            ans+=1;
    }
    cout<<ans;
}
