#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> posA, posB;
    string charsA = "", charsB = "";
    if (n > 0) {
        char current_max = '\0'; 
        char last_char = 'a'; 
        for (int i = 0; i < n; i++) {
            if (s[i] >= last_char) {
                posA.push_back(i);
                charsA += s[i];
                last_char = s[i];
            } else {
                posB.push_back(i);
                charsB += s[i];
            }
        }
    }
    sort(charsA.begin(), charsA.end());
    sort(charsB.begin(), charsB.end());

    string res = s;
    for (int i = 0; i < posA.size(); i++) {
        res[posA[i]] = charsA[i];
    }
    for (int i = 0; i < posB.size(); i++) {
        res[posB[i]] = charsB[i];
    }

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}
