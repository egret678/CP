#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
typedef int keytype;

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int h_a, h_b, h_c;
    ll cnt = 0;
    while((a % 2) == 0 && (b % 2) == 0 && (c % 2) == 0){
        if(a == b && b == c){
            puts("-1");
            return 0;
        }
        h_a = (a / 2); h_b = (b / 2); h_c = (c / 2);
        a = (h_b + h_c);
        //printf("%d %d %d\n", a, h_b, h_c);
        b = (h_a + h_c);
        c = (h_b + h_a);
        cnt++;
    }

    printf("%lld\n", cnt);

    return 0;
}
