#define z return

#include <stdio.h>

int r() {
  char c;
  int f=0, r=0;
  while((c=getchar())<'0' || c>'9') if(c == '-') f=1;
  while(c>='0' && c<='9') {
    r = 10 * r + c - 48;
    c = getchar();
  }
  if(f==1) z 0;
  z r;
}

int main(){
    int c = r(), t=0;
    while(c--){
	t += r();
    }
    printf("%d\n",t);
    z 0;
}
