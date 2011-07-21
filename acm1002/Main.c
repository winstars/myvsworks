#include <stdio.h>
#include <string.h>


/************************************************************************
Problem Description
I have a very simple problem for you. Given two integers A and B, your 
job is to calculate the Sum of A + B.


Input
The first line of the input contains an integer T(1<=T<=20) which means 
the number of test cases. Then T lines follow, each line consists of two 
positive integers, A and B. Notice that the integers are very large, that 
means you should not process them by using 32-bit integer. You may assume 
the length of each integer will not exceed 1000.


Output
For each test case, you should output two lines. The first line is "Case #:", 
# means the number of the test case. The second line is the an equation 
"A + B = Sum", Sum means the result of A + B. Note there are some spaces int 
the equation. Output a blank line between two test cases.


Sample Input
2
1 2
112233445566778899 998877665544332211


Sample Output
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110
************************************************************************/
void addBigNum(char* addBy,char* add,char* result){
	int addByLen,addLen,resultLen,increse,spart,realLong,realShort,_result,i;
	char *theLong,*theShort;

	addByLen = strlen(addBy);
	addLen = strlen(add);
	resultLen = strlen(result);

	if(strlen(addBy)>strlen(add)){
		theLong=addBy;
		theShort=add;
	}else{
		theLong=add;
		theShort=addBy;
	}

	increse = 0;
	spart = strlen(theLong)-strlen(theShort);
	for(i=strlen(theLong)-1;i>spart-1;i--){
		realLong = theLong[i]-48;
		realShort = theShort[i-spart]-48;
		_result = realLong+realShort+increse;
		increse =_result / 10;
		_result %= 10;
		result[i]=_result+48;
	}
	for(i=spart-1;i>=0;i--){
		realLong = theLong[i]-48;
		_result = realLong+increse;
		increse =_result / 10;
		_result %= 10;
		result[i]=_result+48;
	}
}
int main(int argc,char* argv){
	int count,i;

	char *addBy,*add,result[1001]={0},*p;

	if(scanf_s("%d\n",&count)!=EOF){
		for(i=0;i<count;i++){
			char readLine[2001]={0};
			gets_s(readLine,2001);
			p=strchr(readLine,' ');
			*p='\0';
			addBy=readLine;
			add=p+1;
			addBigNum(addBy,add,result);
			printf("Case %d:\n%s + %s = %s\n",i+1,addBy,add,result);
			if(count>i){
				printf("\n");
			}
		}
	}

	return 0;
}
