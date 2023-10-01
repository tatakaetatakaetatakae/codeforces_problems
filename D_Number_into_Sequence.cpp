#include <bits/stdc++.h>
 
#define ll long long 
#define pb push_back
#define vi vector<int>
#define endl '\n'
using namespace std;

vector<ll> primes;

void primeFactors(ll n)
{
    while (n % 2 == 0)
    {
        primes.pb(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            primes.pb(i);
            n = n/i;
        }
    }
    if (n > 2)
        primes.pb(n);
}
void solve(){
    ll n;cin>>n;
    primes.clear();
    primeFactors(n);
    //for(auto x : primes)cout<<x<<" ";
    map<ll , int> mp;
    for(int i = 0 ; i < primes.size() ; i++){
        mp[primes[i]]++;
    }
    int m = 0;
    for(auto x : mp){
        m = max(x.second , m);
    }
    ll j;
    for(auto x : mp){
        if(x.second == m)
        j = x.first;
    }
    cout<<m<<endl;
    m--;
    while(m--)cout<<j<<" ";
    ll answer = 1;
    for(auto x : primes){
        if(x != j)answer*=x;
    }
    cout<<answer*j<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    int t = 1;cin>>t;
    while(t--)solve();
	return 0;
}