#include <stdio.h>

int main(){
    int x[10];

    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &x[i]);
        if(x[i] == 0) printf("%d\n", i);
    }
    
    return 0;
}