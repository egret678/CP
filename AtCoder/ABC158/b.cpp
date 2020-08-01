#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    ll n, a, b;
    ll ret = 0;

    scanf("%lld%lld%lld", &n, &a, &b);
    /*
    int j=0;
    if(a!=0){
        for(int i=a;i<n;i+=a){
            j++;
            i+=b;
            if(n < i){
                cout << a*j << endl;
            }
        }
    }else{
        cout << 0 << endl;
    }
    if(a!=0) cout << a*j+n-(a*j+b*j) << endl;
    */
   if(a!=0){
       if(n%(a+b)){
           if(n%(a+b) > a){
               cout << a*(n/(a+b))+a << endl;
           }else{
               cout << a*(n/(a+b))+n%(a+b) << endl;
           }
       }else{
           cout << a*(n/(a+b)) << endl;
       }
   }else{
       cout << 0 << endl;
   }
    return 0;
}