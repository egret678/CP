#include <bits/stdc++.h>
#define SIZE 200005
using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int to[SIZE];
int L[SIZE],R[SIZE];
int main()
{
	int a,b;
	scanf("%d",&a);
  scanf("%d",&b);

  //vector <int> a(b);
  //vector <int> b(a);

  if(a <= b){
    for(int i=0;i<b;i++){
      printf("%d", a);
    }
    printf("\n");
  }else{
    for(int i=0;i<a;i++){
      printf("%d", b);
    }
    printf("\n");
  }
}
