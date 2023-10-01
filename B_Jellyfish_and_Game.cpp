#include <bits/stdc++.h>
 
#define ll long long 
#define pb push_back
#define pf push_front
#define f pop_front
#define b pop_back
#define vi vector<int>
#define endl '\n'
using namespace std;
 
 
void solve(){
    int n , m , k ;
    cin>>n>>m>>k;
    vi je  , ge;
    ll sum = 0;
    for(int i  = 0 ; i < n ;i++){
        int a ; cin>>a;sum+=a;
        je.pb(a);}
    for(int i  = 0 ; i < m ;i++){
        int a ; cin>>a;
        ge.pb(a);}
    int m1 , m2 , M1 , M2;
    m1 = *(min_element(je.begin() , je.end()));
    M1 = *(max_element(je.begin() , je.end()));
    m2 = *(min_element(ge.begin() , ge.end()));
    M2 = *(max_element(ge.begin() , ge.end()));
    int final1 = min(m1, m2);
    int final2 = max(M1, M2);
    if(k % 2 == 1){
        cout<<sum - m1 + max(m1, M2)<<endl;
        }
        else 
        cout<<sum -m1 + max(m1, M2) -final2+final1<<endl;
    }
int main() {
    ios_base::sync_with_stdio(false);
    int t = 1;cin>>t;
    while(t--)solve();
	return 0;
}