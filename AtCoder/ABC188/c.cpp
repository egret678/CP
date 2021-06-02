#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}
template<class t,class u> void chmax(t&a,u b){if(a<b)a=b;}
template<class t,class u> void chmin(t&a,u b){if(b<a)a=b;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int size = 1 << n;
    //cout << size << endl;
    vector<int> a(size), a_sub1(size/2), a_sub2(size/2);
    for(auto& e:a) cin >> e;
    for(int i = 0; i < size/2; ++i) a_sub1[i] = a[i];
    for(int i = size/2; i < size; ++i) a_sub2[i-(size/2)] = a[i];

    //ll maxval = *max_element(a.begin(), a.end());
    ll max1 = *max_element(a_sub1.begin(), a_sub1.end());
    ll max2 = *max_element(a_sub2.begin(), a_sub2.end());
    //cout << a[0] << endl;
    int ans = min(max1, max2);

    for(int i = 0; i < size; ++i){
        if(a[i] == ans){
            cout << i + 1 << endl;
            return 0;
        }
    }
}