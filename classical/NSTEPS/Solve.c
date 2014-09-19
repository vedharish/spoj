#include <stdio.h>

int main() {
    int cases, x, y, r=-1;
    scanf("%d\n", &cases);
    while(cases--){
	scanf("%d %d/n", &x, &y);
	if((x!=y && y!=(x-2))) printf("No Number\n");
	else{
	    if(x==y){
		if(x%2 == 0) printf("%d\n", 2*x);
		else printf("%d\n", 2*x-1);
	    }else{
		if(x%2 == 0) printf("%d\n", 2*x-2);
		else printf("%d\n", 2*x-3);
	    }
	}
    }
    return 0;
}
