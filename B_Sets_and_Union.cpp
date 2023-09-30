#include <bits/stdc++.h>
 
#define ll long long 
#define pb push_back
#define vi vector<int>
#define vii vector<vector<int>>
#define endl '\n'
using namespace std;
 
/*bool bysize(vi a, vi b) {
if (a.size() != b.size()) return a.size() > b.size();
return a > b;
}*/
 
 
void solve(){
    int n;
    cin>>n;
    //if(n == 1){cout<<0<<endl;return;}
    set<int> attainable;
    vector<set<int>> arr(n);
    for(int i = 0 ; i < n ; i++){
        int k ; cin>>k;
        while(k--){
            int a ; cin>>a;
            arr[i].insert(a);
            attainable.insert(a);
        }
    }
    //sort(arr.rbegin(), arr.rend(), [](const set<int> & a, const set<int> & b){ return a.size() < b.size(); });
 
    set<int> ans;
    int maxi = 0;
    for(auto x : attainable){
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i].count(x) != 0)continue;
            for(auto y : arr[i])ans.insert(y);
        }
        maxi = max(maxi , (int)ans.size());
        ans.erase(ans.begin() , ans.end());
    }
    cout<<maxi<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;cin>>t;
    while(t--)solve();
	return 0;
}
