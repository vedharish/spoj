#include <stdio.h>

void print_arr(int arr[], int size, int print){
    int temp, flag=0;
    for(temp=0; temp<=size; temp++){
	if(print==1 || (arr[temp]!=0 || flag==1)){
	    printf("%d", arr[temp]);
	    flag = 1;
	}
    }
    if(flag==0) printf("0");
    putchar('\n');
}

int arr_sub(int ia[], int id[], int size_a, int size_d){
    int carry=0, n=0;
    while(size_d >= 0){
	if(ia[size_a] >= id[size_d]+carry){
	    n = ia[size_a] - id[size_d] - carry;
	    carry = 0;
	}else{
	    n = 10 + ia[size_a] - id[size_d] - carry;
	    carry = 1;
	}
	ia[size_a] = n;
	size_d--;
	size_a--;
    }
    while(size_a >= 0){
	if(ia[size_a] >= carry){
	    n = ia[size_a] - carry;
	    carry = 0;
	}else{
	    n = 10 + ia[size_a] - carry;
	    carry = 1;
	}
	ia[size_a] = n;
	size_a--;
    }
    return carry;
}

int arr_add(int ia[], int id[], int size_a, int size_d){
    int carry=0, n=0;
    while(size_d >= 0){
	n = ia[size_a]+id[size_d]+carry;
	ia[size_a] = (n)%10;
	carry = n/10;
	size_d--;
	size_a--;
    }
    while(size_a >= 0){
	n = ia[size_a]+carry;
	ia[size_a] = n%10;
	carry = n/10;
	size_a--;
    }
    return carry;
}

void inc_by_one(int arr[], int size){
    int carry=1, n=0;
    while(size >=0 && carry==1){
	n = arr[size]+carry;
	arr[size] = n%10;
	carry = n/10;
	size--;
    }
    if(carry==1) putchar('1');
    return;
}

int main() {
    int iter, ia[100], id[100], ex[100], temp, flag, size_a, size_d;
    char t;
    for(iter=0; iter<10; iter++){
	flag=0;
	size_a=0;
	size_d=0;
	temp=0;
	while((t = getchar()) >= '0' && t <= '9'){
	    if(flag==0){
		ia[temp] = (t-'0')/2;
		flag = (t-'0')%2;
	    }else{
		ia[temp] = (10+(t-'0'))/2;
		flag = (10+(t-'0'))%2;
	    }
	    if(!(temp == 0 && ia[0] == 0)) temp++;
	}
	size_a = --temp;
//	print_arr(ia, size_a, 0);
//	printf("size - %d\n", size_a);

	temp = 0;
	flag = 0;
	while((t = getchar()) >= '0' && t <= '9'){
	    if(flag==0){
		id[temp] = (t-'0')/2;
		flag = (t-'0')%2;
	    }else{
		id[temp] = (10+(t-'0'))/2;
		flag = (10+(t-'0'))%2;
	    }
	    if(!(temp == 0 && id[0] == 0)) temp++;
	}
	size_d = --temp;
//	print_arr(id, size_d, 0);
//	printf("size - %d\n", size_d);


//	print_arr(ex, size_a);
	
	if(flag==1){
	    //ia[size_a]++;
	    //printf("gotcha!!");
        }
	if(size_a <= size_d){
	    for(temp=0; temp<=size_d; temp++){
		ex[temp] = id[temp];
	    }
	    temp = arr_add(ex, ia, size_d, size_a);
//	    printf("temp!!");
	    if(flag==1){
		if(ex[size_d] != 9) ex[size_d]++;
		else inc_by_one(ex, size_d);
	    }
	    if(temp!=0){
		putchar(temp+'0');
	        print_arr(ex, size_d, 1);
	    }else{
		print_arr(ex, size_d, 0);
	    }
	}else{
	    for(temp=0; temp<=size_a; temp++){
		ex[temp] = ia[temp];
	    }
	    temp = arr_add(ex, id, size_a, size_d);
	    if(temp!=0) putchar(temp+'0');
	    if(flag==1){
		if(ex[size_a] != 9) ex[size_a]++;
		else inc_by_one(ex, size_a);
	    }
	    print_arr(ex, size_a, 0);
	}

//	printf("--------------------------Substracting-------------------------------\n");
//	printf("ia array -------\n");
//	print_arr(ia, size_a);
//	printf("size_a == %d\nd array -------\n", size_a);
//	print_arr(id, size_d);
//	printf("size_d == %d\n", size_d);
	if(size_a >= size_d){
	    temp = arr_sub(ia, id, size_a, size_d);
	    print_arr(ia, size_a, 0);
//          printf("size - %d\n", size_a);
	}else{
//	    printf("WTF??\n");
	    temp = arr_sub(id, ia, size_d, size_a);
	    print_arr(id, size_d, 0);
	}
    }
    return 0;
}
