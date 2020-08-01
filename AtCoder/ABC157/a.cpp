#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    int n;

    scanf("%d", &n);

    if(n % 2 == 1){
        printf("%d\n", n/2 + 1);
    } else{
        printf("%d\n", n/2);
    }
    return 0;
}