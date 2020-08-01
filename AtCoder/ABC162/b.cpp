#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    int n;

    scanf("%d", &n);

    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if((i%3==0 || i%5==0)==0){
            sum += i;
        }
    }
    printf("%lld\n", sum);

    return 0;
}