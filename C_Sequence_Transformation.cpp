#include <bits/stdc++.h>
 
#define ll long long 
#define pb push_back
#define vi vector<int>
#define endl '\n'
const int INF = 1e9;
using namespace std;




void solve(){
    int n;cin>>n;
    vi arr(n);
    set<int> check;
    for(int i = 0 ; i < n  ;i++){
        cin>>arr[i];
        check.insert(arr[i]);
    }
    if(check.size() == 1){cout<<0<<endl;return;}
    if(check.size() == n){cout<<1<<endl;return;}
    arr.erase(unique(arr.begin() , arr.end()) , arr.end());
    n = (int)arr.size();
    map<int , int> mp;
    for(int i = 0 ; i < n ; i++){
        mp[arr[i]]++;
    }
    /*for(auto x : mp)cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;*/
    int m = INF;
    //mp[arr[0]]--;
    for(auto x : arr){
        m = min(m , mp[x]+1 - (arr.front() == x) - (arr.back() == x));
    }
    cout<<m<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    int t = 1;cin>>t;
    while(t--)solve();
	return 0;
}