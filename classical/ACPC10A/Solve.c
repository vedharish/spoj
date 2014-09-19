#include <stdio.h>

int main(){
    int n1, n2, n3, temp;
    while(1 == 1){
	scanf("%d %d %d", &n1, &n2, &n3);
        if(n1 == 0 && n2 == 0 && n3 == 0) return 0;
	scanf("%*[^\n]");
	temp = n2 - n1;
	if(temp == n3 - n2){
	    printf("AP %d\n", n3+temp);
	}else{
	    printf("GP %d\n", n2/n1*n3);
	}
    }
    return 0;
}
