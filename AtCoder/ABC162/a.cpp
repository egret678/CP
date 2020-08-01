#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    int n;

    scanf("%d", &n);

    if((n/100)==7 || ((n/10)%10)==7 || (n%10)==7){
        printf("%s\n", "Yes");
    } else{
        printf("%s\n", "No");
    }
    return 0;
}