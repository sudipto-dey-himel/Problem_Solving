//NEW YEAR & HURRY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, k;
    cin>>n>>k;
    ll t=k, i;
    for(i=1; i<=n; i++) {
        t+=5*i;
        if(t>240) break;
    }
    cout<<i-1<<endl;
}