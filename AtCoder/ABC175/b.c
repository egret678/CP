#include <stdio.h>

int min2(int a, int b){
    if(a < b) return a;
    else return b;
}

int max2(int a, int b){
    if(a > b) return a;
    else return b;
}

int max3(int a, int b, int c){
    return max2(max2(a, b), max2(b, c));
}

int main(){
    int n;
    int l[1000];

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &l[i]);
    }

    int max = 0;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            for(int k = j + 1; k < n; ++k){
                max = max3(l[i], l[j], l[k]);
                if(max == l[i]){
                    if(max < (l[j] + l[k]) && l[i] != l[j] && l[j] != l[k] && l[i] != l[k]){
                        cnt++;
                        continue;
                    }
                }
                else if(max == l[j]){
                    if(max < (l[i] + l[k]) && l[i] != l[j] && l[j] != l[k] && l[i] != l[k]){
                        cnt++;
                        continue;
                    }
                }
                else{
                    if(max < (l[i] + l[j]) && l[i] != l[j] && l[j] != l[k] && l[i] != l[k]){
                        cnt++;
                        continue;
                    }
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}
