#include <stdio.h>

int main(){
    int H, W, h, w;

    scanf("%d %d %d %d", &H, &W, &h, &w);

    int ans = H * W - (h * W + w * H - (h * w));

    printf("%d\n", ans);

    return 0;
}
