#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int cases, num1, num2, equals, temp, supp1, supp2, temp2;
    char flag1, flag2, flag3, c;
    scanf("%d", &cases);
    getchar();
    getchar();
    while(cases--){
	num1=0; num2=0; equals=0; temp=0; supp1=0; supp2=0;
	flag1='f'; flag2='f'; flag3='f';
	while((c = getchar()) != ' '){
	    if(c >= '0' && c <= '9') temp = temp*10+(c-'0');
	    else if(flag1=='f'){
		flag1='t';
		supp1=temp;
		temp=0;
	    }
	}
	if(flag1=='t') supp2=temp;
	else num1=temp;
	getchar();getchar();
	temp=0;
	while((c = getchar()) != ' '){
	    if(c >= '0' && c <= '9') temp = temp*10+(c-'0');
	    else if(flag2=='f'){
		flag2='t';
		supp1=temp;
		temp=0;
	    }
	}
	if(flag2=='t') supp2=temp;
	else num2=temp;
	getchar();getchar();
	temp=0;
	while((c = getchar()) != '\n'){
	    if(c >= '0' && c <= '9') temp = temp*10+(c-'0');
	    else if(flag3=='f'){
		flag3='t';
		supp1=temp;
		temp=0;
	    }
	}
	if(flag3=='t') supp2=temp;
	else equals=temp;

	    if(flag1 == 't'){
		num1 = equals-num2;
//		if(supp2>0){
//		    temp=0;
//		    while(supp2/(int)pow(10, temp) != 0) temp++;
//		    num1 = num1/pow(10, temp);
//		}
//		if(supp1>0){
//		    temp=(int)log10(num1)+1;
//		    temp2=(int)log10(supp1)+1;
//		    num1 %= (int)pow(10, temp-temp2);
//		}
	    }else if(flag2 == 't'){
		num2 = equals-num1;
//		if(supp2>0){
//		    temp=0;
//		    while(supp2/(int)pow(10, temp) != 0) temp++;
//		    num2 = num2/pow(10, temp);
//		}
//		if(supp1>0){
//		    temp=(int)log10(num2)+1;
//		    temp2=(int)log10(supp1)+1;
//		    num2 %= (int)pow(10, temp-temp2);
//		}
	    }else if(flag3 == 't'){
		equals = num1+num2;
//		if(supp2>0){
//		    temp=0;
//		    while(supp2/(int)pow(10, temp) != 0) temp++;
//		    equals = equals/pow(10, temp);
//		}
//		if(supp1>0){
//		    temp=(int)log10(equals)+1;
//		    temp2=(int)log10(supp1)+1;
//		    equals %= (int)pow(10, temp-temp2);
//		}
	    }
	printf("%d + %d = %d\n", num1, num2, equals);
	getchar();
    }
    return 0;
}
