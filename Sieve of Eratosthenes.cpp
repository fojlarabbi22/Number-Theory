// It's just a pre-computation to save all the primes till a number
// O(n*log log n) ---> for i to N
// O(n*log log sqrt(n)) ---> i to sqrt(N)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5 + 10;
vector<int> prime;
bitset<N + 1> b(0); // Both fast and memory efficient 
void sieve() {
    for(int i = 2; i*i <= N; i++) {
        if(b[i] != 1) {
            for(int j = i*i; j <= N; j += i) {
                b[j] = 1;
            }
        }
    }
    for(int i = 2; i <= N; i++) {
        if(b[i] != 1) prime.push_back(i);
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
