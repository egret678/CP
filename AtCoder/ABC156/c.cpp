#include<bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 105;
int x[N];

int main() {
    double ave;
    ll ans = 0;
    int n;
    scanf("%d", &n);
    double sum = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", x + i);
        sum += x[i];
    }
    ave = round(double(sum/n));
    for(int i = 0; i < n; ++i){
        ans += (ave - x[i]) * (ave - x[i]);
    }
    cout << ans << "\n";

    return 0;
}
