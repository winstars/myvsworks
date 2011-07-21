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
	int addByLen,addLen,resultLen;
	addByLen = strlen(addBy);
	addLen = strlen(add);
	resultLen = strlen(result);
	char *theLong,*theShort;

	if(strlen(addBy)>strlen(add)){
		theLong=addBy;
		theShort=add;
	}else{
		theLong=add;
		theShort=addBy;
	}

	int increse = 0;
	int spart = strlen(theLong)-strlen(theShort);
	for(int i=strlen(theLong)-1;i>spart-1;i--){
		int realLong = theLong[i]-48;
		int realShort = theShort[i-spart]-48;
		int _result = realLong+realShort+increse;
		increse =_result / 10;
		_result %= 10;
		result[i]=_result+48;
	}
	for(int i=spart-1;i>=0;i--){
		int realLong = theLong[i]-48;
		int _result = realLong+increse;
		increse =_result / 10;
		_result %= 10;
		result[i]=_result+48;
	}
}
int main(int argc,char* argv){
	int count;

	char *addBy,*add,result[1001]={0};

	if(scanf("%d\n",&count)!=EOF){
		for(int i=0;i<count;i++){
			char readLine[2001]={0};
			gets(readLine);
			char *p;
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
