#include <stdio.h>
#include <math.h>

int main(){
//    long long int temp=0, iter=0, offset=0;
//    long long int t;
    int arr[4];
    arr[0] = 192;
    arr[1] = 442;
    arr[2] = 692;
    arr[3] = 942;
//    while(1==1){
//	t = arr[iter]+offset;
//	iter++;
//	if(iter == 4) offset+=1000;
//	iter %= 4;
//	temp = pow(t, 3);
//	if(temp%1000 == 888) printf("%lld\n", t);
//	t+=50;
//	if(t>1000000) return 0;
//    }

    int cases;
    long long int number;
    scanf("%d", &cases);
    scanf("%*[^\n]");
    while(cases--){
	scanf("%lld", &number);
	scanf("%*[^\n]");
	if(number > 4) printf("%lld%d\n", (number-1)/4, arr[(number-1)%4]);
	else if(number <= 4 && number > 0) printf("%d\n", arr[number-1]);
    }
    return 0;
}
