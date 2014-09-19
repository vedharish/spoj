#define f printf
#define q else if
#define m scanf
#include <stdio.h>
int main(){int c,t,e;unsigned long p;m("%d",&c);m("%*[^\n]");while(c--){m("%d %ld",&t,&p);m("%*[^\n]");t=t%10;if(p==0)f("1");q(t==0){f("0");}q(t==1){f("1");}q(t==2){e=p%4;if(e==0)f("6");q(e==1)f("2");q(e==2)f("4");q(e==3)f("8");}q(t==3){e=p%4;if(e==0)f("1");q(e==1)f("3");q(e==2)f("9");q(e==3)f("7");}q(t==4){e=p%2;if(e==0)f("6");q(e==1)f("4");}q(t==5){f("5");}q(t==6){f("6");}q(t==7){e=p%4;if(e==0)f("1");q(e==1)f("7");q(e==2)f("9");q(e==3)f("3");}q(t==8){e=p%4;if(e==0)f("6");q(e==1)f("8");q(e==2)f("4");q(e==3)f("2");}q(t==9){e=p%2;if(e==0)f("1");q(e==1)f("9");}f("\n");}return 0;}
