#include<stdio.h>
#include<math.h>
/*
 * 20110722_1.c
 *
 *  Created on: 2011-7-12
 *      Author: Administrator
 */
void test1(){
	double x,y;
	printf("please input a number\n");
	scanf("%lf",&x);
	y=sin(x);
	printf("the sin value of the number %lf is %lf",x,y);
}

