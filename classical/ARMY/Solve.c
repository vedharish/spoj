#include<stdio.h>

inline int insert(int arr[], int last){
    int temp, iter = 0, sub_temp;
    scanf("%d", &temp);
    while(iter < last){
        if(arr[iter] < temp) break;
        iter++;
    }
    while(iter < last){
        sub_temp = arr[iter];
        arr[iter] = temp;
        temp = sub_temp;
        iter++;
    }
    arr[last] = temp;
    return last+1;
}

int main() {
    int cases, ng, nm;
    int god_arr[100000], mec_god_arr[100000], god_last, mec_god_last;
    scanf("%d", &cases);
    while(cases-- > 0) {
        getchar();
        ng = 0, nm = 0;
        god_last = 0, mec_god_last = 0;
        scanf("%d %d\n", &ng, &nm);
        while(god_last < ng){
            god_last = insert(god_arr, god_last);
        }
        while(mec_god_last < nm){
            mec_god_last = insert(mec_god_arr, mec_god_last);
        }
        mec_god_last--;
        god_last--;
        while(god_last >= 0 && mec_god_last >= 0){
            if(god_arr[god_last] < mec_god_arr[mec_god_last]) god_last--;
            else mec_god_last--;
        }
        if(god_last < 0) printf("MechaGodzilla\n");
        else if(mec_god_last < 0) printf("Godzilla\n");
    }
    return 0;
}
