#include<stdio.h>
/*
 * test2.c
 *
 *  Created on: 2011-7-12
 *      Author: Administrator
 */
double getMaxD();
int getMaxI();

void test2(){
	int x,y;
	printf("please input 2 numbers for compare\n");
	scanf("%d,%d",&x,&y);
	printf("the larger one is %d\n",getMaxI(x,y));
}

double getMaxD(double x,double y){
	return ((x>y)?x:y);
}

int getMaxI(int x,int y){
	return ((x>y)?x:y);
}

