#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    int i,n;

    int a[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] % 3 != 0 && a[i] % 5 != 0) {
        puts("DENIED");
        return 0;
        }
    }
    puts("APPROVED");

    return 0;
}