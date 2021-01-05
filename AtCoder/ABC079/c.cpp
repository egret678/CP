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

int my_calc(const int a, const int b, const char& ope){
    if(ope == '+'){
        return a + b;
    }else if(ope == '-'){
        return a - b;
    }
    else{
        return 0;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> a(s.size());
    auto itr = a.begin();
    for(const auto& e:s){
        //cout << s[i] << '\n';
        *itr = e - '0';
        itr++;
    }

    string ope1("+-"), ope2("+-"), ope3("+-");
    for(const auto& e1:ope1){
        for(const auto& e2:ope2){
            for(const auto& e3:ope3){
                int result = my_calc(my_calc(my_calc(a[0], a[1], e1), a[2], e2), a[3], e3);
                if(result == 7){
                    cout << a[0] << e1 << a[1] << e2 << a[2] << e3 << a[3] << "=7" << '\n';
                    return 0;
                    //break;
                }
            }
        }
    }

}
