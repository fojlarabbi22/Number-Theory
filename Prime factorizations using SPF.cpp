#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5 + 10;
vector<int> spf(N + 1);

void pre_spf() {   
    for(int i = 2; i <= N; i++) {
        spf[i] = i;
    }
    for(int i = 2; i*i <= N; i++) {
        if(spf[i] == i) {
            for(int j = i*i; j <= N; j += i) {
                if(spf[j] == j) spf[j] = i;
            }
        }
    }

}
void solve() {
    int q; cin >> q; // q <= 1e6
    for(int i = 1; i <= q; i++) {
        int n; cin >> n; // Find prime factorization of n
        vector<int> v;
        while(n > 1) { // Estimately less than O(log n)
            v.push_back(spf[n]);
            n /= spf[n];
        }
        for(auto x: v) cout << x << " ";
        cout << '\n';

    }
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pre_spf();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
