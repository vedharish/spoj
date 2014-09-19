#include <stdio.h>
#include <math.h>

int ways(int number){
    printf("%d\n", number);
    if(number==0) return 1;
    int digits=(int)log10(number)+1;
    if(number/10 == 0) return 1;
    int first_digit=number/pow(10, digits-1);
    int next_number=(int)number%(int)pow(10, digits-1);
    if(first_digit > 2) return ways(next_number);
    if(first_digit == 0) return 0;
    else{
	int second_digit=next_number/pow(10, digits-2);
	int next_next_number = (int)next_number%(int)pow(10, digits-2);
	if(second_digit==0){
	    if(next_next_number == 0) return 1;
	    return ways(next_next_number);
	}
	if(first_digit==1){
	    if(next_next_number == 0) return 1+ways(next_number);
	    else return ways(next_number)+ways(next_next_number);
	}
	if(first_digit==2){
	    if(second_digit>6) return ways(next_number);
	    else if(next_next_number != 0) return ways(next_number)+ways(next_next_number);
	    else if(next_next_number == 0) return 1+ways(next_number);
	}
    }
    return -1000;
}

int main(){
    int number;
    char c;
    while(1 == 1){
	scanf("%d\n", &number);
	if(number==0) return 0;
	else printf("answer -- %d\n", ways(number));
    }
    return 0;
}
