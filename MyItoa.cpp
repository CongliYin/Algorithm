//ʵ�֣���int������ת�����ַ���
//˼·����1��ʹ��itoa()����ʵ��
//      ��2��ʹ��������'0'�ķ���ʵ��


#include<iostream>
#include<string>
using namespace std;

/*
class Solution
{
public:
	void my_itoa(int x)
	{
		//������ʱ����temp
		int temp = x;
		//��int��ֵΪ�����������ľ���ֵת����Ȼ���ټӷ���
		if(x < 0)
		{
			temp =  -x;
		}

		char ch[100] = "";
		int i = 0;
		while(temp)
		{
			//char���ͺ�int���͵�ת����ϵ
			ch[i] = (temp % 10) + '0';

			temp = temp / 10;
			i++;
		}

		//��int������Ϊ��������char���͵ĳ���Ҫ����1����ŷ���
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
		//���һ���ַ����NUL
		str[i] = 0;
		while(1)
		{
			i--;
			//��ǰ�ַ�Ϊ�գ�����ѭ��
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
		//������������������һ��ΪҪת����int���������ڶ���Ϊ����ַ�����char��������������10����ת��
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


