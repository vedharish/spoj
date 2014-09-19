#include <stdio.h>
#include <math.h>

float H(int n){
    float y = 0.577215;
    float temp1 = 1.0/(2*n);
    float temp2 = 1.0/(12*n*n);
    return log(n)+y+temp1-temp2;
}

int main(){
    int temp, answer;
    float number;
    while(1 == 1){
	scanf("%f", &number);
	scanf("%*[^\n]");
	if(number == 0.00) return 0;
	temp = ceil(pow(2.718, number))-1;
	answer = temp;
	while(H(temp)-1.0 <= number){
	    answer = temp;
	    temp++;
	}
	printf("%d card(s)\n", answer);
    }
    return 0;
}
