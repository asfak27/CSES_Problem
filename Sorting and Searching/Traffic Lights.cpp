#include<bits/stdc++.h>
using namespace std;
#define ll  int
#define  no               cout<<"NO"<<endl
#define  yes              cout<<"YES"<<endl
#define  N    100005
#define  mod       998244353
#define  fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    //freopen("textnew.txt","r",stdin);
    vector<ll>v,p;
    set<ll>st;
    multiset<ll>dis;
    map<ll,ll>mp;
    ll n,e,i,j,l,m,x,y,z,r,k;
    cin>>k>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    st.insert(0LL);
    st.insert(k);
 
    dis.insert(k);
    for(i=0;i<n;i++)
    {
        auto it=st.upper_bound(a[i]);
        r=*it;
        it--;
        l=*it;
        st.insert(a[i]);
 
 
        dis.erase(dis.find(r-l));
        dis.insert(a[i]-l);
        dis.insert(r-a[i]);
 
        auto ans=dis.end();
        ans--;
        cout<<*ans<<" ";
 
        //cout<<l<<" "<<a[i]<<r<<endl;
 
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
