//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//void bubblesort(int data[], int num);
//
//int main()
//{
//	
//	int n = 0;
//	cin >> n;
//
//	int arr[1000] = { 0 };
//
//	for (int i = 0; i < n ; i++)
//	{
//		cin >> arr[i];
//	}
//
//	bubblesort(arr, n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	
//}
//
//void bubblesort(int data[], int num)//������ �迭, ������ �迭ũ��
//{
//	for (int i = 0; i < num - 1; i++)
//		//�ڿ��� ������ �̵��ϸ鼭 ���࿡ �������� �ڿ������� ����
//	{
//		for (int j = num - 1; j > i; j--)
//			//�������� �����ϸ鼭 num�� num-1�� ��
//		{
//			if (data[j] < data[j - 1])
//			{
//				swap(data[j], data[j - 1]);
//			}
//		}
//	}
//}

//�� �ݺ��� ���ι��� ���� Ƚ�� => O(n2) 1/2n(n-1)

/*
*		���۹��
* 
		4 2 3 5 1			���� num���� num-1���� �� 
		4 2 3 1 5			num��ũ�� ���� �ƴϸ� ��Ƽ�� �뽺�� 
		4 2 1 3 5 
		4 1 2 3 5
		1 4 2 3 5 ... 

		���������� �ٲ���ٸ� data[0]���� �������� �Ѿ��
		��Ӱ�� ����

*/

