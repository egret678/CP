#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);


    if(a == b && b == c) printf("No\n");
    else if(b == c) printf("Yes\n");
    else if(a == b) printf("Yes\n");
    else if(a == c) printf("Yes\n");
    else printf("No\n");
	return 0;
}
