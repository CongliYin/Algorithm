//实现：将char类型转换成int类型
//思路：（1）使用atoi()函数
//      （2）使用char类型减去'0'的方法得到某一位的int型数值

#include<iostream>
using namespace std;

/*
//使用atoi()函数实现
class Solution
{
public:
	int myAtoi(char* ch)
	{
		return atoi(ch);
	}
};
*/


//使用char类型减去'0'的方法实现
class Solution
{
public:
	int myAtoi(char* ch)
	{
		int sum = 0;
		int i;
		
		//若字符第一个负号
		if(ch[0] == '-')
		{
			i = 1;
		}
		else
		{
			i = 0;
		}
		while(ch[i])
		{
			//char类型转换成int类型的计算方法
			sum = sum * 10 + (ch[i] - '0');
			i++;
		}
		if(ch[0] == '-')
		{
			return -sum;
		}
		else
		{
			return sum;
		}
		
	}
};



int main()
{
	Solution s;
	char ch1[] = {'-','1','2','3','\0'};
	char ch2[] = {'1','2','3','\0'};
	cout << s.myAtoi(ch1) << endl;
	cout << s.myAtoi(ch2) << endl;

	system("pause");
	return 0;
}