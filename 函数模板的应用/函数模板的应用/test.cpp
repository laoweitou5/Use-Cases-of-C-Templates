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
	
	//以选择排序的方式进行排序
	for(int i=0;i<len;i++)
	{
		int Max = i;//指定一个最大值
		for (int j = i+1; j < len ; j++)
		{
			if (Array[Max] < Array[j])//有数比指定的最大值还大，说明其为新的最大值
			{
				Max = j;
			}
		}
		if (Max != i)
		{
			//进行替换操作
			MySwap(Array[Max], Array[i]);
		}
	}
}

//堆排序完的数组进行打印操作
template<class T>
void MyPrint(T Array[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Array[i]<<" ";
	}
	cout << endl;
}

//给一个字符类型的字符串以降序方式排序
void test01()
{
	char charArray[] = "abcdef";
	int len = sizeof(charArray) / sizeof(charArray[0]);
	MySort(charArray, len);
	MyPrint(charArray, len);
}

//给一个整形类型的字符串以降序方式排序
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