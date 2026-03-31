#include <iostream>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>p(n+1);
    for(int i=1;i<n+1;i++){
        cin>>p[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(p[i]<=i) cnt++;
    }
    cout<<cnt<<"\n";
    // vector<int>pref(n+1,0);
    // vector<int>diff(n+2,0);
    // for(int i=1;i<=n;i++){
    //     pref[i]=pref[i-1]+(p[i]<=i ?1:0);
    //     if(p[i]>i){
    //         diff[i]++;
    //         diff[p[i]]--;
    //     }
    // }
    // int maxi=0;
    // int cnt=0;
    // for(int i=1;i<=n;i++){
    //     cnt+=diff[i];
    //     int curr=cnt+pref[i];
    //     maxi=max(maxi,curr);
    // }
    // cout<<maxi<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}