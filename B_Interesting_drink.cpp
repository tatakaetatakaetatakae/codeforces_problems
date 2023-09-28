#include <bits/stdc++.h>
 
#define ll long long 
#define pb push_back
#define vi vector<int>
#define endl '\n'
using namespace std;
 
 
void solve(){
    int n , q;
    cin>>n;
    vi arr(n);
    for(auto &x : arr)cin>>x;
    sort(arr.begin() , arr.end());
    cin>>q;
    while(q--){
        int a; cin>>a;
        if(a < arr[0])cout<<0<<endl;
        else{
            int l = -1, r = n;
            while(r - l > 1) {
                int m = (l + r) / 2;
                if(a < arr[m])r = m;
                    else l = m; 
            }
            cout<<l+1<<endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t = 1;//cin>>t;
    while(t--)solve();
	return 0;
}