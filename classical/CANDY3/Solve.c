#include <stdio.h>

int main(){
    int cases, children, total, result=0;
    long long number;
    char c;
    scanf("%d", &cases);
    scanf("%*[^\n]");
    while(cases--){
	result = 0;
	scanf("%d", &children);
	scanf("%*[\n]");
	total = children;
	while(children--){
	    scanf("%lld", &number);
	    scanf("%*[^\n]");
	    result += number%total;
	    result %= total;
	}
	if(result%total == 0) printf("YES\n");
	else printf("NO\n");
    }
    return 0;
}
