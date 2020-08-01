#include <stdio.h>

typedef long long ll;

int main(void){
    ll n;
    char s[50] = {0};
    scanf("%lld", &n);

    int i = 0;
    while(n > 0){
        n -= 1;
        s[i] = 'a' + (n % 26);
        i++;
        n /= 26;
    }
    for(int j = (i - 1); j >= 0; --j){
        printf("%c", s[j]);
    }
    puts("\n");

    return 0;
}