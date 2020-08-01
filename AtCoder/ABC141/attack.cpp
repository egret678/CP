#include <bits/stdc++.h>
using namespace std;

int main() {
  int num, point, num_ques, i;

  cin >> num >> point >> num_ques;

  std::vector<int>  a(num, point - num_ques);

  int ans_index;
  for(i = 0; i < num_ques; i++){
    cin >> ans_index;
    a[ans_index - 1]++;
  }

  for(i = 0; i < num; i++){
    if((a[i]) > 0){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }

}
