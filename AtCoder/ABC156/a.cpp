#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    int n, r;

    scanf("%d%d", &n, &r);

    if(n >= 10){
        printf("%d\n", r);
    } else{
        printf("%d\n", 100 * (10 - n) + r);
    }
    return 0;
}