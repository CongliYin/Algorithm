//ʵ�֣���char����ת����int����
//˼·����1��ʹ��atoi()����
//      ��2��ʹ��char���ͼ�ȥ'0'�ķ����õ�ĳһλ��int����ֵ

#include<iostream>
using namespace std;

/*
//ʹ��atoi()����ʵ��
class Solution
{
public:
	int myAtoi(char* ch)
	{
		return atoi(ch);
	}
};
*/


//ʹ��char���ͼ�ȥ'0'�ķ���ʵ��
class Solution
{
public:
	int myAtoi(char* ch)
	{
		int sum = 0;
		int i;
		
		//���ַ���һ������
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
			//char����ת����int���͵ļ��㷽��
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