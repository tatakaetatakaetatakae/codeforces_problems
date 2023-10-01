#include <bits/stdc++.h>
 
#define ll long long 
#define pb push_back
#define vi vector<int>
#define endl '\n'
using namespace std;


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if((s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0') || (s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0')){
        cout<<"YES"<<endl;return;
    }
    else if(s[0]== '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0' && n > 4){cout<<"YES"<<endl;return;}
    else if(s[0]== '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0' && n > 4){cout<<"YES"<<endl;return;}
    else if(s[0]== '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0' && n > 4){cout<<"YES"<<endl;return;}
    else cout<<"NO"<<endl;}
int main() {
    ios_base::sync_with_stdio(false);
    int t = 1;cin>>t;
    while(t--)solve();
	return 0;
}