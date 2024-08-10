/*

sieve.cpp from https://github.com/adityabhongade/Algorithms
by Aditya Bhongade - https://github.com/adityabhongade

Description : Sieve of Eratosthenes. Add this into your code.

*/

typedef unsigned long long ull;
const int ARR_MAX = 1e5 + 1;

vector<bool> prime(ARR_MAX, true); // global for easier access

void sieve() {
    prime[0] = prime[1] = false;
    for(ull i=2;i<ARR_MAX;++i) {
        if(prime[i] && i*i < ARR_MAX) {
            for(ull j=i*i;j<ARR_MAX;j+=i) {
                prime[j] = false;
            }
        }
    }
    return;
}
