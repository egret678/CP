#include <stdio.h>

#define ll long long

int main(void){
    ll n;
    int j;
    char s[250000][10];
    
    scanf("%lld", &n);
    for(ll i = 1; i <= n; ++i){
        scanf("%s", &s[i][0]);
    }

    for(ll i = 1; i <= n; ++i){
        for(ll k = i + 1; k <= n; ++k){
            while(s[i][j] != '\0'){

            }
        }
    }

    return 0;
}