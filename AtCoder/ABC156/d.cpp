#include<bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 1000000007;

int main() {
    ll n, a, b;
    ll ans = 0;
    scanf("%lld%lld%lld", &n, &a, &b);

    vector<vector<long long int> > v(n + 1,vector<long long int>(n + 1,0));
    for(int i = 0;i < v.size(); i++){
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for(int k = 1;k < v.size();k++){
        for(int j = 1;j < k;j++){
            v[k][j]=(v[k-1][j-1]+v[k-1][j]) % N;
            if(k == n && j != a && j != b) ans += v[k][j];
        }
    }
    
    cout << ans << "\n";

    return 0;
}
