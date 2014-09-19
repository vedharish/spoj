#include <stdio.h>

int main(){
    int number, div=2, temp1=2, temp2;
    unsigned long long result;
    scanf("%d", &number);
    scanf("%*[^\n]");
    result = number;
    while(temp1<=number/2+1){
	if(number/temp1 >= temp1) result+=(number/temp1-temp1+1);
	temp1++;
    }
    printf("%lld", result);
    return 0;
}
