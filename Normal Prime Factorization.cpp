// O(sqrt(n)) ---> For prime
// O(log n) ---> For composite
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> v;
    for(int i = 2; i*i <= n; i++) { 
        if(n % i == 0) {
            while(n % i == 0) { // Always think n in skeleton form
                v.push_back(i);
                n /= i;
            }
        }
    }
    if(n > 1) v.push_back(n); // When n itself becomes a prime
    for(auto i: v) cout << i << " ";
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
