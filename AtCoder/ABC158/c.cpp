#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    int a, b;
    int ret = 0;

    scanf("%d%d", &a, &b);

    ret = a/0.08;
    int i;
    for(i=ret;i<1000;i++){
        //cout << round(i*0.1) << endl;
        if(floor(i*0.1)==b){
            //cout << round(i*0.1) << endl;
            break;
        }
    }
    if(i!=1000) cout << i << endl;
    else cout << -1 << endl;

    return 0;
}