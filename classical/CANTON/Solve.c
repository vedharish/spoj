#include <stdio.h>

int main(){
    int cases, number, iter, temp1, temp2, flag;
    scanf("%d", &cases);
    scanf("%*[^\n]");
    while(cases--){
	scanf("%d", &number);
	scanf("%*[^\n]");
	printf("TERM %d IS ", number);
	temp1 = 0;
	flag = 0;
	for(iter=1; iter>0; iter++){
	    if(iter%2 == 1){
		for(temp2=1; temp2<=iter; temp2++){
		    temp1++;
		    if(temp1 == number){
			flag = 1;
			break;
		    }
		}
	    }else{
		for(temp2=iter; temp2>=1; temp2--){
		    temp1++;
		    if(temp1 == number){
			flag = 1;
			break;
		    }
		}
	    }
	    if(flag == 1) break;
	}
	printf("%d/%d\n", iter+1-temp2, temp2);
    }
    return 0;
}
