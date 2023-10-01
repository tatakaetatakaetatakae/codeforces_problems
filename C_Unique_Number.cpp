#include <bits/stdc++.h>
 
#define ll long long 
#define pb push_back
#define vi vector<int>
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    if(n < 10){cout<<n<<endl;return;}
    if(n == 45)cout<<123456789<<endl;
    else if(n >= 10 && n<= 17){
        cout<<19+10*(n-10)<<endl;
    }
    else if(n >= 18 && n <= 24)
        cout<<189+100*(n-18)<<endl;
    else if(n >= 25 && n <= 30)
        cout<<1789+1000*(n-25)<<endl;
    else if(n >= 31 && n <= 35)
        cout<<16789+10000*(n-31)<<endl;
    else if(n >= 36 && n <= 39)
        cout<<156789+100000*(n-36)<<endl;
    else if(n >= 40 && n <= 42)
        cout<<1456789+1000000*(n-40)<<endl;
    else if(n >= 43 && n <= 44)
        cout<<13456789+10000000*(n-43)<<endl;
    else cout<<-1<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    int t = 1;cin>>t;
    while(t--)solve();
	return 0;
}