#include <bits/stdc++.h>
#define SIZE 200005
using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int to[SIZE];
int L[SIZE],R[SIZE];
int main()
{
	int n;
	scanf("%d",&n);
  vector <int> p(n);
  for(int i=0;i<n;i++){
    scanf("%d",&p.at(i));
  }

  int i=0;
  int j=0;
  for(i=0;i<p.size();i++){
    for(j=i+1;j<p.size();){
      if(p.at(i) < p.at(j)){
        p.erase(p.begin()+j);
      }else j++;
    }
  }

  printf("%d\n", p.size());
}
