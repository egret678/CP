#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    int n;

    int a[3][3];
    int col[3][3];
    int row[3][3];
    int acr[2][3];
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
            col[i][j] = a[j][i];
            row[i][j] = a[i][j];
            if(i == j){
                acr[0][j] = a[i][j];
            }
            if(i + j == 2){
                acr[1][j] = a[i][j];
            }
        }
    }

    scanf("%d", &n);
    int b[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }

    int cnt = 0;
    for (int j = 0; j < 3; j++){
        for(int k = 0; k < 3; k++){
            for (int i = 0; i < n; i++){
                if(b[i] == col[j][k]){
                    cnt++;
                }
            }
        }
        if(cnt == 3){
            puts("Yes");
            return 0;
        }else{
            cnt = 0;
        }
    }

    for (int j = 0; j < 3; j++){
        for(int k = 0; k < 3; k++){
            for (int i = 0; i < n; i++){
                if(b[i] == row[j][k]){
                    cnt++;
                }
            }
        }
        if(cnt == 3){
            puts("Yes");
            return 0;
        }else{
            cnt = 0;
        }
    }

    for (int j = 0; j < 2; j++){
        for(int k = 0; k < 3; k++){
            for (int i = 0; i < n; i++){
                if(b[i] == acr[j][k]){
                    cnt++;
                }
            }
        }
        if(cnt == 3){
            puts("Yes");
            return 0;
        }else{
            cnt = 0;
        }
    }

    puts("No");
    return 0;
}