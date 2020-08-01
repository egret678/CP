#include<bits/stdc++.h>

using namespace std;
#define llint long long

const int N = 200005;
llint p[N], sum[N];

int main() {
    int n,k;
    scanf("%d", &n);
    scanf("%d", &k);
    for(int i = 0; i < n; ++i){
        scanf("%lld", p + i);
    }

    // calculate cumulative sum
    sum[0] = 0;
    for(int i = 0; i < n; ++i){
        sum[i + 1] = sum[i] + p[i];
    }
    // calculate section sum
    llint ans = 0;
    for(int i = 0; i + k - 1 <= n + 1; ++i){
        ans = max(ans, sum[i + k] - sum[i]);
    }

    //for(int i = 0; i < n; ++i) cout << sum[i] << endl;
    //cout << ans << endl;
    //sort(p, p + n, greater<int>());
    /*
    for(int i = 0; i < n; ++i){
        cout << p[i] << " ";
    }
    cout << endl;
    */
    /*
    double ans = accumulate(q, q + k, 0.0);
    for(int i = 1; i < n - (k - 1); ++i){
        if(ans < accumulate(q + i , q + i + k, 0.0)){
            ans = accumulate(q + i , q + i + k, 0.0);
        }
    }
    */

    printf("%.11f\n", (ans + k) * 0.5);

	return 0;
}
