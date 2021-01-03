#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

ll myceil(ll a,ll b){return (a + (b - 1)) / b;}
ll myfloor(ll a,ll b){return a / b;}
template<class t,class u> void chmax(t& a,u b){if(a < b) a = b;}
template<class t,class u> void chmin(t& a,u b){if(b < a) a = b;}

int factorial(int n){
    if(n == 0) return 1;
    else return factorial(n - 1) * n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<double, double>> p(n);
    for(int i = 0; i < n; ++i){
        cin >> p[i].first >> p[i].second;
    }

    vector<int> per(n);
    for(int i = 0; i < n; ++i){
        per[i] = i;
    }
    double ave = 0.0;
    do{
        double sum = 0.0;
        for(int i = 0; i < n - 1; ++i){
            sum += pow((double)(p[per[i]].first - p[per[i+1]].first) * (double)(p[per[i]].first - p[per[i+1]].first) + (double)(p[per[i]].second - p[per[i+1]].second) * (double)(p[per[i]].second - p[per[i+1]].second), 0.5);
        }
        ave += sum;
    }while(next_permutation(per.begin(), per.end()));

    ave = ave / (double)factorial(n);

    cout << fixed << setprecision(10) << ave << '\n';

    return 0;
}
