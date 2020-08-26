#include <stdio.h>

// 入力
int n, W;
int weight[110], value[110];

// DPテーブル
int dp[110][10010];

int max(int a, int b){
    if(a > b) return a;
    else return b;
}

int main() {
  scanf("%d %d", &n, &W);
  for (int i = 0; i < n; ++i) scanf("%d %d", &weight[i], &value[i]);

  // DP初期条件: dp[0][w] = 0
  for (int w = 0; w <= W; ++w) dp[0][w] = 0;

  // DPループ
  for (int i = 0; i < n; ++i) {
    for (int w = 0; w <= W; ++w) {
      if (w >= weight[i]) dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
      else dp[i+1][w] = dp[i][w];
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int w = 0; w <= W; ++w) {
      printf("%d ", dp[i][w]);
    }
    puts("");
  }

  printf("%d\n", dp[n][W]);
}
