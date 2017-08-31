//实现：将int型数据转换成字符串
//思路：（1）使用itoa()函数实现
//      （2）使用整数加'0'的方法实现


#include<iostream>
#include<string>
using namespace std;

/*
class Solution
{
public:
	void my_itoa(int x)
	{
		//定义临时变量temp
		int temp = x;
		//若int型值为负数，用它的绝对值转换，然后再加符号
		if(x < 0)
		{
			temp =  -x;
		}

		char ch[100] = "";
		int i = 0;
		while(temp)
		{
			//char类型和int类型的转换关系
			ch[i] = (temp % 10) + '0';

			temp = temp / 10;
			i++;
		}

		//若int型整数为负数，则char类型的长度要增加1来存放符号
		int len;
		if(x < 0)
		{
			len = i + 1;
			i++;
		}
		else
		{
			len = i;
		}

		char str[100];
		//最后一个字符存放NUL
		str[i] = 0;
		while(1)
		{
			i--;
			//当前字符为空，结束循环
			if(ch[len - i - 1] == 0)
			{
				break;
			}
			str[i] = ch[len - i - 1];

		}

		if(i == 0)
		{
			str[i] = '-';
		}
		cout << str << endl;
	}
};
*/

class Solution
{
public:
	void my_itoa(int x)
	{
		char str[100];
		//函数的三个参数：第一个为要转换的int型整数，第二个为存放字符串的char变量，第三个是10进制转换
		itoa(x, str,10);
		cout << str << endl;
	}
};

int main()
{
	Solution s;
	s.my_itoa(-213456);
	s.my_itoa(213456);

	system("pause");
	return 0;
}


