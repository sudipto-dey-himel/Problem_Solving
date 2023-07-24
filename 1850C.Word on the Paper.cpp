#include<bits/stdc++.h>
#include<string>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
    string ans, s;
    for(ll i=1; i<=8; i++) {
        cin>>s;   
        for(int j=0; j<8; j++) {
            if(s[j]!='.')
            ans+=s[j];
        }  
    }
    cout<<ans<<endl;
}

int main()
{
    opt();

    tc()
    {
        solve();
    }

    return 0;
}
