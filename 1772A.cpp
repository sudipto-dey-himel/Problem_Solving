///A+B?
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin>>s;
    ll num[s.size()-1], j=0, sum=0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]>='0' && s[i]<='9')
        num[j++]=s[i]-'0';
    }
    for(ll i=0; i<j; i++)
    sum+=num[i];
 
    cout<<sum<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
}