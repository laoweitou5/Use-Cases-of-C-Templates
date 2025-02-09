#include<iostream>
#include<string>
using namespace std;

template<class T>
void MySwap(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void MySort( T Array[],int len)
{
	
	//��ѡ������ķ�ʽ��������
	for(int i=0;i<len;i++)
	{
		int Max = i;//ָ��һ�����ֵ
		for (int j = i+1; j < len ; j++)
		{
			if (Array[Max] < Array[j])//������ָ�������ֵ����˵����Ϊ�µ����ֵ
			{
				Max = j;
			}
		}
		if (Max != i)
		{
			//�����滻����
			MySwap(Array[Max], Array[i]);
		}
	}
}

//���������������д�ӡ����
template<class T>
void MyPrint(T Array[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Array[i]<<" ";
	}
	cout << endl;
}

//��һ���ַ����͵��ַ����Խ���ʽ����
void test01()
{
	char charArray[] = "abcdef";
	int len = sizeof(charArray) / sizeof(charArray[0]);
	MySort(charArray, len);
	MyPrint(charArray, len);
}

//��һ���������͵��ַ����Խ���ʽ����
void test02()
{
	int intArray[] = {0,1,2,3,4,5,6,7,8,9};
	int len = sizeof(intArray) / sizeof(intArray[0]);
	MySort(intArray, len);
	MyPrint(intArray, len);
}

int main()
{
	test01();
	test02();
	return 0;
}