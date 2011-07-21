#include <stdio.h>
#include <math.h>
/************************************************************************/
/* 
给出三角形的三边的边长，求三角形的面积。 

每行输入三边边长 

每行输出三角形的面积。精确到三位小数。 

Sample Input
1 2 2.5
3 4 4.5
5 6 6.5

Sample Output
0.950
5.881
14.249
                                                                     */
/************************************************************************/
float calSanJiaoMianJi(float s1,float s2,float s3){
	float p = (s1+s2+s3)/2;
	return sqrtf(p*(p-s1)*(p-s2)*(p-s3));
}

int main(void)
{
	float a,b,c;
	while(scanf("%f %f %f",&a, &b, &c) != EOF){
		printf("%.3f\n",calSanJiaoMianJi(a,b,c));
	}

	getchar();getchar();
	return 0;
}