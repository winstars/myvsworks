#include<stdio.h>
/************************************************************************/
/* 
给你两个数,求最大公约数。 

每行输入两个数a，b。（0< a < 1000000, 0< b < 1000000 ）。 

每行输出最大公约数。 

Sample Input
12 2 
1024 256
19 43

Sample Output
2
256
1
                                                                     */
/************************************************************************/

int minYueShu(int a,int b){
	int c;
	int mod=1;
	if(a<b){
		c=a,a=b,b=c;
	}
	while(mod=a%b){
		a=b,b=mod;
	}
	return b;
}
int main(void){
	int a,b;
	while(scanf("%d %d",&a, &b) != EOF){
		printf("%d\n",minYueShu(a,b));
	}

	getchar();getchar();
	return 0;
}