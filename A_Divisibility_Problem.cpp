#include <bits/stdc++.h>
 
#define ll long long 
#define pb push_back
#define vi vector<int>
#define endl '\n'
using namespace std;
 
 
void solve(){
    int a , b;
    cin>>a>>b;
    if(a <=b)cout<<b-a<<endl;
    else{
        if(a%b == 0)cout<<0<<endl;
        else{
        int help = (a/b)+1;
        cout<<(help*b)-a<<endl;}
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t = 1;cin>>t;
    while(t--)solve();
	return 0;
}