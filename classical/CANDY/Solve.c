#include <stdio.h>

int main(){
    int number, ans[10001], size;
    long long total=0, temp=0, moves;
    scanf("%d", &number);
    scanf("%*[^\n]");
    while(number != -1){
	total=0;
	moves=0;
	size = number;
	while(number--){
	    scanf("%d", &ans[number]);
	    scanf("%*[^\n]");
	    total += ans[number];
	}
	if(total%(size) != 0) printf("-1\n");
	else{
	    temp = total/(size);
	    number = size;
	    while(number--){
		moves += ans[number]-temp >= 0 ? ans[number]-temp : temp-ans[number];
	    }
	    printf("%lld\n", moves/2);
	}
	scanf("%d", &number);
	scanf("%*[^\n]");
    }
    return 0;
}
