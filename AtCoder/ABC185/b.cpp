#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//x:コンテナ
#define ALL(x) x.begin(),x.end() 
#define SIZE(x) ll(x.size()) 
//定数
#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007
//出力(空白区切りで昇順に)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<" ";cout<<*--x.end()<<endl;

ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, a, b;

    cin >> n >> m >> t;

    int last_time = 0, init = n;
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        n = n - (a - last_time);
        if(n <= 0){
            cout << "No" << endl;
            return 0;
        }
        else{
            n = min(init, n + b - a);
            last_time = b;
        }
    }
    n = n - (t - last_time);
    if(n <= 0) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}