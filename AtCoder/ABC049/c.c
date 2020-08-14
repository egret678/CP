#include <stdio.h>
#include <string.h>

void string_reverse(char s[]){

#if 0
    const size_t len = strlen(s);
    char tmp = {0};
    int i = 0;
    for(int j = len - 1; j > (len - 1) / 2; --j){
        tmp = s[j];
        s[j] = s[i];
        s[i] = tmp;
        i++;
    }
#endif

#if 1
	int size = strlen(s);
	int i,j;
	char tmp = {0};

	for(i = 0, j = size - 1; i < size / 2; i++, j--){
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
#endif

}

int main(){
    char s[100005];
    //size_t len = sizeof(s) / sizeof(s[0]);
    char a[] = "maerd", b[] = "remaerd", c[] = "esare", d[] = "resare";
    char T[4][8]={"dream","dreamer","erase","eraser"};

    scanf("%s", s);

#if 0
    int size = 0;
    while(s[size] != '\0'){
        size++;
    }
    char s_rev[100005];
    int i = 0;
    for(int j = size - 1; j >= 0; --j){
        s_rev[i] = s[j];
        i++;
    }
    s_rev[i] = '\0';
#endif

    size_t len = strlen(s);

    string_reverse(s);

    int j = 0;
    int flag = 0;
    while(s[j] != '\0'){
        int k = 0;
        flag = 0;
        if(s[j] != '\0' && flag == 0){
            while(a[k] != '\0'){
                if(s[j + k] == a[k]){
                    flag = 1;
                    k++;
                }else{
                    flag = 0;
                    k = 0;
                    break;
                }
            }
            if(flag == 1){
                j += k;
                k = 0;
            }
        }
        if(s[j] != '\0' && flag == 0){
            while(b[k] != '\0'){
                if(s[j + k] == b[k]){
                    flag = 1;
                    k++;
                }else{
                    flag = 0;
                    k = 0;
                    break;
                }
            }
            if(flag == 1){
                j += k;
                k = 0;
            }
        }
        if(s[j] != '\0' && flag == 0){
            while(c[k] != '\0'){
                if(s[j + k] == c[k]){
                    flag = 1;
                    k++;
                }else{
                    flag = 0;
                    k = 0;
                    break;
                }
            }
            if(flag == 1){
                j += k;
                k = 0;
            }
        }
        if(s[j] != '\0' && flag == 0){
            while(d[k] != '\0'){
                if(s[j + k] == d[k]){
                    flag = 1;
                    k++;
                }else{
                    flag = 0;
                    k = 0;
                    break;
                }
            }
            if(flag == 1){
                j += k;
                k = 0;
            }
        }
        if(flag == 0) break;
    }

    if(flag == 1) puts("YES");
    else puts("NO");

    return 0;
}