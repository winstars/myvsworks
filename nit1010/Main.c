#include<stdio.h>
/************************************************************************/
/* 
����������,�����Լ���� 

ÿ������������a��b����0< a < 1000000, 0< b < 1000000 ���� 

ÿ��������Լ���� 

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