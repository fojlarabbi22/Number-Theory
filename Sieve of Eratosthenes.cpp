// It's just a pre-computation to save all the primes till a number
// O(n*log log n) ---> for i to N
// O(n*log log sqrt(n)) ---> i to sqrt(N)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5 + 10;
vector<int> prime;
void sieve() {
    vector<int> p(N + 1, 0);
    for(ll i = 2; i*i <= N; i++) {
        if(p[i] != 1) {
            for(ll j = i*i; j <= N; j += i) {
                p[j] = 1;
            }
        }
    }
    for(int i = 2; i <= N; i++) {
        if(p[i] != 1) prime.push_back(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
