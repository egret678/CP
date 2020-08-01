#include <stdio.h>

int main (void){
    int n, c0 = 0, c1 = 0, c2 = 0, c3 = 0;
    char s[100005][5];

    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        scanf("%s", &s[i][0]);
        switch (s[i][0])
        {
        case 'A':
            c0++;
            break;
        case 'W':
            c1++;
            break;
        case 'T':
            c2++;
            break;
        case 'R':
            c3++;
            break;
        default:
            break;
        }
    }

    printf("AC x %d\n", c0);
    printf("WA x %d\n", c1);
    printf("TLE x %d\n", c2);
    printf("RE x %d\n", c3);

    return 0;
}