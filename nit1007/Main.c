#include<stdio.h>
/**
��֪�����εĵ׺͸ߣ���������ε������ 

ÿ������׺͸� 

ÿ����������ε��������ȷ����λС���� 

Sample Input
1 2 
3 4
5 6

Sample Output
1.000
6.000
15.000
**/
float calSanJiao(int length,int height){
	return (length*1.0)*height/2;
}

int main(void)
{
	int a,b;
	while(scanf("%d %d",&a, &b) != EOF){
		printf("%.3f\n",calSanJiao(a,b));
	}

	getchar();getchar();
	return 0;
}