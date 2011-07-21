#include <stdio.h>
#include <string.h>


/************************************************************************
Problem Description
Given a sequence a[1],a[2],a[3]......a[n], your job is to calculate the max 
sum of a sub-sequence. For example, given (6,-1,5,4,-7), the max sum in 
this sequence is 6 + (-1) + 5 + 4 = 14.
��������
����һ���������飬�ҵ��ϼ�������һ��������

Input
The first line of the input contains an integer T(1<=T<=20) which means the 
number of test cases. Then T lines follow, each line starts with a number 
N(1<=N<=100000), then N integers followed(all the integers are between -1000 and 1000).
����
��һ�и���һ������N����ʾ���������ĸ���������

Output
For each test case, you should output two lines. The first line is "Case #:", 
# means the number of the test case. The second line contains three integers, 
the Max Sum in the sequence, the start position of the sub-sequence, the end 
position of the sub-sequence. If there are more than one result, output the first one. 
Output a blank line between two cases.


Sample Input
2
5 6 -1 5 4 -7
7 0 6 -1 1 -6 7 -5


Sample Output
Case 1:
14 1 4

Case 2:
7 1 6
************************************************************************/
void calMaxSumOfSubArray(int arr[]){
	int size = arr[0];
	for(int i=0;i<size;i++){
		printf("%d ",arr[i+1]);
	}
}

int main(int argc,char* argv[]){
	int count;
	
	if(scanf("%d\n",&count)!=EOF){
		for(int i=0;i<count;i++){
			int size=0;
			scanf("%d",&size);
			if(size>0){
				int nums[100000];
				nums[0]=size;
				for(int j=0;j<size;j++){
					scanf("%d",&nums[j+1]);
				}
				calMaxSumOfSubArray(nums);
				/*
				for(int j=0;j<size;j++){
					printf("%d ",*(nums+(2*i)));
				}
				*/
			}
		}
	}
	
	getchar();getchar();
	return 0;
}
